
#include <stdio.h>   //  Arquivo de cabeçalho (header)
#include <math.h>   //  Biblioteca operaçõẽs algébricas 


long double mWToDBm(long double mW){
    long double dBm = log10(mW) * 10;
    return dBm;
}


double Friis(double Pt, double Gt, double Gr, double lambda, double L, double d)
{

double M = lambda / (4 * M_PI * d);
return (Pt * Gt * Gr * (M * M)) / L;
}


// Importado do NS-3
long double WTwoRay(double Pt, double d) {

    double Gt = 1;
    double Gr = 1.0;
    double PI = 3.14159265358979323846;
    double SPEED_OF_LIGHT = 300000000;
    double freq = 914e+6;
    double L = 1.0;
    double lambda = SPEED_OF_LIGHT / freq; // lambda = SPEED_OF_LIGHT / freq
    double Rb = 1e+6;
    double ht = 1.5;
    double hr = 1.5;
    // received power
    long double Pr;
    double crossover_dist = (4 * M_PI * ht * hr) / lambda;

    if (d < crossover_dist)
        Pr = Friis(Pt, Gt, Gr, lambda, L, d);
    else
        Pr = Pt * Gt * Gr * (hr * hr * ht * ht) / (d * d * d * d * L);

    return mWToDBm(Pr);
}

long double coordInMeters (double lat1, double longi1, double lat2, double longi2 ){

    double Latitude1 = lat1 / 57.29577951;      // Value of Latitude in Radians: Lat/(180/pi)
    double Longitude1 = longi1 / 57.29577951;   // Value of Longitude in Radians: Long/(180/pi)

    double Latitude2 = lat2 / 57.29577951;      // Value of Latitude in Radians: Lat/(180/pi)
    double Longitude2 = longi2 / 57.29577951;   // Value of Longitude in Radians: Long/(180/pi)

    // Haversine Formula 
    long double dlong = Longitude2 - Longitude1; 
    long double dlat = Latitude2 - Latitude1; 
  
    long double ans = pow(sin(dlat / 2), 2) +  
                          cos(Latitude1) * cos(Latitude2) *  
                          pow(sin(dlong / 2), 2); 
  
    ans = 2 * asin(sqrt(ans)); 
  
    // Radius of Earth in  
    // Kilometers, R = 6371 
    // Use R = 3956 for miles 
    long double R = 6371; 
      
    // Calculate the result 
    ans = ans * R * 1000;  //Raio em km convertido em metros
  
    return ans; 

}


void main() {
	
     double distance;
     double range = 40;	
     double Pt = 0.000856486183700;      // PT range 40 metros

     int source, dest, source1, dest1;    
     long double lat1; 
     long double lon1; 
     long double lat2; 
     long double lon2; 
  
    FILE *arq1;
    FILE *arq2;
    arq1 = fopen("./coord.txt","r");
    arq2 = fopen("./coord.txt","r");

    FILE *arqTopoTxt;
    arqTopoTxt = fopen("./topoTOSSIM.txt","w");

    FILE *arqRssiH;
    arqRssiH = fopen("./rssi.h","w");

    FILE *arqTopoNS3;
    arqTopoNS3 = fopen("./topoNS3.txt","w");

    fprintf(arqRssiH, "/* This file must be placed in the same folder as the RSSI component */");
    fprintf(arqRssiH, "\n#ifndef RSSI_H\n#define RSSI_H");
    fprintf(arqRssiH, "\n\ndouble matrizRSSI[20][20];\n\ndouble setRSSI(){");

	fprintf(arqRssiH, "\n\tswitch(TOS_NODE_ID){\n");

    while (!feof(arq1)){
        fscanf(arq1, "%d%Lf%Lf", &source, &lat1, &lon1);
	fprintf(arqTopoNS3, "$node_(%d) set X_ %.7Lf\n$node_(%d) set Y_ %.7Lf\n", source, lat1, source, lon1);
	fprintf(arqTopoNS3, "$node_(%d) set Z_ 0.000000000000\n", source);
	fprintf(arqTopoNS3, "ns at 0.0000000 \"$comp_(%d) POSITION %.7Lf %.7Lf 0\"\n\n", source, lat1, lon1);
	
	fprintf(arqRssiH, "\n\tcase %d:", source );

	FILE *arq2;
    	arq2 = fopen("./coord.txt","r");

      	while (!feof(arq2)){
        	fscanf(arq2, "%d%Lf%Lf", &dest, &lat2, &lon2);
		if(source != dest && source != source1 && dest != dest1){
			distance = coordInMeters(lat1, lon1, lat2, lon2);
			if(distance <= range){
				fprintf(arqTopoTxt, "%d\t%d\t", source, dest);				
				//fprintf(arqTopoTxt, "%lfm\t", distance);
				long double rssi = WTwoRay( Pt, distance );
        			fprintf(arqTopoTxt, "%.2Lf\n", rssi );
				fprintf(arqRssiH, "\n\tmatrizRSSI[%d][%d] = %.2Lf;", source, dest, rssi);
				dest1 = dest;
			}  
		}
    	}
	source1 = source;
	fprintf(arqRssiH, "\n\tbreak;");
    }
    fprintf(arqRssiH, "\n\t}\n}\n\ndouble getRSSI(int src, int dest){");
    fprintf(arqRssiH, "\n\tdouble RSSI = matrizRSSI[src][dest];\n\treturn RSSI;\n}\n\n#endif");
}
