/* This file must be placed in the same folder as the RSSI component */
#ifndef RSSI_H
#define RSSI_H

double matrizRSSI[20][20];

double setRSSI(){
	switch(TOS_NODE_ID){

	case 1:
	matrizRSSI[1][2] = -72.95;
	matrizRSSI[1][3] = -76.47;
	matrizRSSI[1][4] = -88.59;
	matrizRSSI[1][5] = -87.25;
	matrizRSSI[1][6] = -85.08;
	matrizRSSI[1][7] = -82.52;
	matrizRSSI[1][8] = -82.20;
	matrizRSSI[1][9] = -82.60;
	matrizRSSI[1][10] = -87.57;
	matrizRSSI[1][11] = -87.94;
	matrizRSSI[1][12] = -88.80;
	matrizRSSI[1][13] = -89.48;
	matrizRSSI[1][14] = -90.19;
	matrizRSSI[1][15] = -91.29;
	matrizRSSI[1][16] = -89.73;
	matrizRSSI[1][17] = -86.46;
	matrizRSSI[1][18] = -80.19;
	matrizRSSI[1][19] = -83.75;
	matrizRSSI[1][20] = -83.79;
	break;
	case 2:
	matrizRSSI[2][1] = -72.95;
	matrizRSSI[2][3] = -80.47;
	matrizRSSI[2][4] = -89.49;
	matrizRSSI[2][5] = -87.91;
	matrizRSSI[2][6] = -85.74;
	matrizRSSI[2][7] = -82.22;
	matrizRSSI[2][8] = -80.05;
	matrizRSSI[2][9] = -79.51;
	matrizRSSI[2][10] = -85.96;
	matrizRSSI[2][11] = -86.72;
	matrizRSSI[2][12] = -87.98;
	matrizRSSI[2][13] = -88.97;
	matrizRSSI[2][14] = -89.85;
	matrizRSSI[2][15] = -91.11;
	matrizRSSI[2][16] = -89.77;
	matrizRSSI[2][17] = -86.87;
	matrizRSSI[2][18] = -78.63;
	matrizRSSI[2][19] = -85.08;
	matrizRSSI[2][20] = -83.21;
	break;
	case 3:
	matrizRSSI[3][1] = -76.47;
	matrizRSSI[3][2] = -80.47;
	matrizRSSI[3][4] = -86.24;
	matrizRSSI[3][5] = -85.06;
	matrizRSSI[3][6] = -82.69;
	matrizRSSI[3][7] = -81.98;
	matrizRSSI[3][8] = -83.86;
	matrizRSSI[3][9] = -85.11;
	matrizRSSI[3][10] = -88.93;
	matrizRSSI[3][11] = -88.73;
	matrizRSSI[3][12] = -89.08;
	matrizRSSI[3][13] = -89.35;
	matrizRSSI[3][14] = -89.83;
	matrizRSSI[3][15] = -90.76;
	matrizRSSI[3][16] = -88.78;
	matrizRSSI[3][17] = -84.65;
	matrizRSSI[3][18] = -81.55;
	matrizRSSI[3][19] = -79.79;
	matrizRSSI[3][20] = -83.57;
	break;
	case 4:
	matrizRSSI[4][1] = -88.59;
	matrizRSSI[4][2] = -89.49;
	matrizRSSI[4][3] = -86.24;
	matrizRSSI[4][5] = -79.21;
	matrizRSSI[4][6] = -82.52;
	matrizRSSI[4][7] = -86.77;
	matrizRSSI[4][8] = -89.25;
	matrizRSSI[4][9] = -90.53;
	matrizRSSI[4][10] = -92.20;
	matrizRSSI[4][11] = -91.21;
	matrizRSSI[4][12] = -90.51;
	matrizRSSI[4][13] = -89.68;
	matrizRSSI[4][14] = -89.27;
	matrizRSSI[4][15] = -89.21;
	matrizRSSI[4][16] = -86.18;
	matrizRSSI[4][17] = -82.92;
	matrizRSSI[4][18] = -88.22;
	matrizRSSI[4][19] = -81.58;
	matrizRSSI[4][20] = -87.30;
	break;
	case 5:
	matrizRSSI[5][1] = -87.25;
	matrizRSSI[5][2] = -87.91;
	matrizRSSI[5][3] = -85.06;
	matrizRSSI[5][4] = -79.21;
	matrizRSSI[5][6] = -75.06;
	matrizRSSI[5][7] = -83.06;
	matrizRSSI[5][8] = -86.67;
	matrizRSSI[5][9] = -88.46;
	matrizRSSI[5][10] = -90.22;
	matrizRSSI[5][11] = -88.80;
	matrizRSSI[5][12] = -87.76;
	matrizRSSI[5][13] = -86.62;
	matrizRSSI[5][14] = -86.18;
	matrizRSSI[5][15] = -86.48;
	matrizRSSI[5][16] = -81.98;
	matrizRSSI[5][17] = -73.92;
	matrizRSSI[5][18] = -85.50;
	matrizRSSI[5][19] = -78.30;
	matrizRSSI[5][20] = -83.53;
	break;
	case 6:
	matrizRSSI[6][1] = -85.08;
	matrizRSSI[6][2] = -85.74;
	matrizRSSI[6][3] = -82.69;
	matrizRSSI[6][4] = -82.52;
	matrizRSSI[6][5] = -75.06;
	matrizRSSI[6][7] = -78.78;
	matrizRSSI[6][8] = -84.09;
	matrizRSSI[6][9] = -86.39;
	matrizRSSI[6][10] = -88.75;
	matrizRSSI[6][11] = -87.30;
	matrizRSSI[6][12] = -86.48;
	matrizRSSI[6][13] = -85.74;
	matrizRSSI[6][14] = -85.81;
	matrizRSSI[6][15] = -86.77;
	matrizRSSI[6][16] = -82.96;
	matrizRSSI[6][17] = -70.91;
	matrizRSSI[6][18] = -82.41;
	matrizRSSI[6][19] = -74.56;
	matrizRSSI[6][20] = -79.85;
	break;
	case 7:
	matrizRSSI[7][1] = -82.52;
	matrizRSSI[7][2] = -82.22;
	matrizRSSI[7][3] = -81.98;
	matrizRSSI[7][4] = -86.77;
	matrizRSSI[7][5] = -83.06;
	matrizRSSI[7][6] = -78.78;
	matrizRSSI[7][8] = -77.30;
	matrizRSSI[7][9] = -81.77;
	matrizRSSI[7][10] = -85.61;
	matrizRSSI[7][11] = -84.10;
	matrizRSSI[7][12] = -84.09;
	matrizRSSI[7][13] = -84.55;
	matrizRSSI[7][14] = -85.58;
	matrizRSSI[7][15] = -87.36;
	matrizRSSI[7][16] = -85.06;
	matrizRSSI[7][17] = -80.11;
	matrizRSSI[7][18] = -73.92;
	matrizRSSI[7][19] = -80.75;
	matrizRSSI[7][20] = -68.07;
	break;
	case 8:
	matrizRSSI[8][1] = -82.20;
	matrizRSSI[8][2] = -80.05;
	matrizRSSI[8][3] = -83.86;
	matrizRSSI[8][4] = -89.25;
	matrizRSSI[8][5] = -86.67;
	matrizRSSI[8][6] = -84.09;
	matrizRSSI[8][7] = -77.30;
	matrizRSSI[8][9] = -74.09;
	matrizRSSI[8][10] = -82.05;
	matrizRSSI[8][11] = -81.64;
	matrizRSSI[8][12] = -83.53;
	matrizRSSI[8][13] = -85.29;
	matrizRSSI[8][14] = -86.77;
	matrizRSSI[8][15] = -88.67;
	matrizRSSI[8][16] = -87.41;
	matrizRSSI[8][17] = -84.75;
	matrizRSSI[8][18] = -71.55;
	matrizRSSI[8][19] = -84.89;
	matrizRSSI[8][20] = -76.93;
	break;
	case 9:
	matrizRSSI[9][1] = -82.60;
	matrizRSSI[9][2] = -79.51;
	matrizRSSI[9][3] = -85.11;
	matrizRSSI[9][4] = -90.53;
	matrizRSSI[9][5] = -88.46;
	matrizRSSI[9][6] = -86.39;
	matrizRSSI[9][7] = -81.77;
	matrizRSSI[9][8] = -74.09;
	matrizRSSI[9][10] = -80.37;
	matrizRSSI[9][11] = -82.24;
	matrizRSSI[9][12] = -84.92;
	matrizRSSI[9][13] = -86.85;
	matrizRSSI[9][14] = -88.24;
	matrizRSSI[9][15] = -89.94;
	matrizRSSI[9][16] = -89.05;
	matrizRSSI[9][17] = -86.97;
	matrizRSSI[9][18] = -77.90;
	matrizRSSI[9][19] = -86.80;
	matrizRSSI[9][20] = -81.64;
	break;
	case 10:
	matrizRSSI[10][1] = -87.57;
	matrizRSSI[10][2] = -85.96;
	matrizRSSI[10][3] = -88.93;
	matrizRSSI[10][4] = -92.20;
	matrizRSSI[10][5] = -90.22;
	matrizRSSI[10][6] = -88.75;
	matrizRSSI[10][7] = -85.61;
	matrizRSSI[10][8] = -82.05;
	matrizRSSI[10][9] = -80.37;
	matrizRSSI[10][11] = -77.46;
	matrizRSSI[10][12] = -82.88;
	matrizRSSI[10][13] = -85.96;
	matrizRSSI[10][14] = -87.72;
	matrizRSSI[10][15] = -89.63;
	matrizRSSI[10][16] = -89.59;
	matrizRSSI[10][17] = -88.82;
	matrizRSSI[10][18] = -84.32;
	matrizRSSI[10][19] = -89.51;
	matrizRSSI[10][20] = -84.89;
	break;
	case 11:
	matrizRSSI[11][1] = -87.94;
	matrizRSSI[11][2] = -86.72;
	matrizRSSI[11][3] = -88.73;
	matrizRSSI[11][4] = -91.21;
	matrizRSSI[11][5] = -88.80;
	matrizRSSI[11][6] = -87.30;
	matrizRSSI[11][7] = -84.10;
	matrizRSSI[11][8] = -81.64;
	matrizRSSI[11][9] = -82.24;
	matrizRSSI[11][10] = -77.46;
	matrizRSSI[11][12] = -76.22;
	matrizRSSI[11][13] = -81.88;
	matrizRSSI[11][14] = -84.56;
	matrizRSSI[11][15] = -87.18;
	matrizRSSI[11][16] = -87.36;
	matrizRSSI[11][17] = -87.07;
	matrizRSSI[11][18] = -83.75;
	matrizRSSI[11][19] = -88.54;
	matrizRSSI[11][20] = -82.82;
	break;
	case 12:
	matrizRSSI[12][1] = -88.80;
	matrizRSSI[12][2] = -87.98;
	matrizRSSI[12][3] = -89.08;
	matrizRSSI[12][4] = -90.51;
	matrizRSSI[12][5] = -87.76;
	matrizRSSI[12][6] = -86.48;
	matrizRSSI[12][7] = -84.09;
	matrizRSSI[12][8] = -83.53;
	matrizRSSI[12][9] = -84.92;
	matrizRSSI[12][10] = -82.88;
	matrizRSSI[12][11] = -76.22;
	matrizRSSI[12][13] = -75.62;
	matrizRSSI[12][14] = -80.45;
	matrizRSSI[12][15] = -84.32;
	matrizRSSI[12][16] = -85.06;
	matrizRSSI[12][17] = -85.83;
	matrizRSSI[12][18] = -84.78;
	matrizRSSI[12][19] = -88.15;
	matrizRSSI[12][20] = -82.60;
	break;
	case 13:
	matrizRSSI[13][1] = -89.48;
	matrizRSSI[13][2] = -88.97;
	matrizRSSI[13][3] = -89.35;
	matrizRSSI[13][4] = -89.68;
	matrizRSSI[13][5] = -86.62;
	matrizRSSI[13][6] = -85.74;
	matrizRSSI[13][7] = -84.55;
	matrizRSSI[13][8] = -85.29;
	matrizRSSI[13][9] = -86.85;
	matrizRSSI[13][10] = -85.96;
	matrizRSSI[13][11] = -81.88;
	matrizRSSI[13][12] = -75.62;
	matrizRSSI[13][14] = -73.06;
	matrizRSSI[13][15] = -80.37;
	matrizRSSI[13][16] = -82.03;
	matrizRSSI[13][17] = -84.61;
	matrizRSSI[13][18] = -85.89;
	matrizRSSI[13][19] = -87.77;
	matrizRSSI[13][20] = -83.21;
	break;
	case 14:
	matrizRSSI[14][1] = -90.19;
	matrizRSSI[14][2] = -89.85;
	matrizRSSI[14][3] = -89.83;
	matrizRSSI[14][4] = -89.27;
	matrizRSSI[14][5] = -86.18;
	matrizRSSI[14][6] = -85.81;
	matrizRSSI[14][7] = -85.58;
	matrizRSSI[14][8] = -86.77;
	matrizRSSI[14][9] = -88.24;
	matrizRSSI[14][10] = -87.72;
	matrizRSSI[14][11] = -84.56;
	matrizRSSI[14][12] = -80.45;
	matrizRSSI[14][13] = -73.06;
	matrizRSSI[14][15] = -75.50;
	matrizRSSI[14][16] = -79.60;
	matrizRSSI[14][17] = -84.39;
	matrizRSSI[14][18] = -87.07;
	matrizRSSI[14][19] = -87.90;
	matrizRSSI[14][20] = -84.53;
	break;
	case 15:
	matrizRSSI[15][1] = -91.29;
	matrizRSSI[15][2] = -91.11;
	matrizRSSI[15][3] = -90.76;
	matrizRSSI[15][4] = -89.21;
	matrizRSSI[15][5] = -86.48;
	matrizRSSI[15][6] = -86.77;
	matrizRSSI[15][7] = -87.36;
	matrizRSSI[15][8] = -88.67;
	matrizRSSI[15][9] = -89.94;
	matrizRSSI[15][10] = -89.63;
	matrizRSSI[15][11] = -87.18;
	matrizRSSI[15][12] = -84.32;
	matrizRSSI[15][13] = -80.37;
	matrizRSSI[15][14] = -75.50;
	matrizRSSI[15][16] = -78.66;
	matrizRSSI[15][17] = -85.31;
	matrizRSSI[15][18] = -88.76;
	matrizRSSI[15][19] = -88.66;
	matrizRSSI[15][20] = -86.64;
	break;
	case 16:
	matrizRSSI[16][1] = -89.73;
	matrizRSSI[16][2] = -89.77;
	matrizRSSI[16][3] = -88.78;
	matrizRSSI[16][4] = -86.18;
	matrizRSSI[16][5] = -81.98;
	matrizRSSI[16][6] = -82.96;
	matrizRSSI[16][7] = -85.06;
	matrizRSSI[16][8] = -87.41;
	matrizRSSI[16][9] = -89.05;
	matrizRSSI[16][10] = -89.59;
	matrizRSSI[16][11] = -87.36;
	matrizRSSI[16][12] = -85.06;
	matrizRSSI[16][13] = -82.03;
	matrizRSSI[16][14] = -79.60;
	matrizRSSI[16][15] = -78.66;
	matrizRSSI[16][17] = -80.47;
	matrizRSSI[16][18] = -87.10;
	matrizRSSI[16][19] = -85.65;
	matrizRSSI[16][20] = -84.48;
	break;
	case 17:
	matrizRSSI[17][1] = -86.46;
	matrizRSSI[17][2] = -86.87;
	matrizRSSI[17][3] = -84.65;
	matrizRSSI[17][4] = -82.92;
	matrizRSSI[17][5] = -73.92;
	matrizRSSI[17][6] = -70.91;
	matrizRSSI[17][7] = -80.11;
	matrizRSSI[17][8] = -84.75;
	matrizRSSI[17][9] = -86.97;
	matrizRSSI[17][10] = -88.82;
	matrizRSSI[17][11] = -87.07;
	matrizRSSI[17][12] = -85.83;
	matrizRSSI[17][13] = -84.61;
	matrizRSSI[17][14] = -84.39;
	matrizRSSI[17][15] = -85.31;
	matrizRSSI[17][16] = -80.47;
	matrizRSSI[17][18] = -83.54;
	matrizRSSI[17][19] = -78.78;
	matrizRSSI[17][20] = -80.37;
	break;
	case 18:
	matrizRSSI[18][1] = -80.19;
	matrizRSSI[18][2] = -78.63;
	matrizRSSI[18][3] = -81.55;
	matrizRSSI[18][4] = -88.22;
	matrizRSSI[18][5] = -85.50;
	matrizRSSI[18][6] = -82.41;
	matrizRSSI[18][7] = -73.92;
	matrizRSSI[18][8] = -71.55;
	matrizRSSI[18][9] = -77.90;
	matrizRSSI[18][10] = -84.32;
	matrizRSSI[18][11] = -83.75;
	matrizRSSI[18][12] = -84.78;
	matrizRSSI[18][13] = -85.89;
	matrizRSSI[18][14] = -87.07;
	matrizRSSI[18][15] = -88.76;
	matrizRSSI[18][16] = -87.10;
	matrizRSSI[18][17] = -83.54;
	matrizRSSI[18][19] = -82.96;
	matrizRSSI[18][20] = -75.56;
	break;
	case 19:
	matrizRSSI[19][1] = -83.75;
	matrizRSSI[19][2] = -85.08;
	matrizRSSI[19][3] = -79.79;
	matrizRSSI[19][4] = -81.58;
	matrizRSSI[19][5] = -78.30;
	matrizRSSI[19][6] = -74.56;
	matrizRSSI[19][7] = -80.75;
	matrizRSSI[19][8] = -84.89;
	matrizRSSI[19][9] = -86.80;
	matrizRSSI[19][10] = -89.51;
	matrizRSSI[19][11] = -88.54;
	matrizRSSI[19][12] = -88.15;
	matrizRSSI[19][13] = -87.77;
	matrizRSSI[19][14] = -87.90;
	matrizRSSI[19][15] = -88.66;
	matrizRSSI[19][16] = -85.65;
	matrizRSSI[19][17] = -78.78;
	matrizRSSI[19][18] = -82.96;
	matrizRSSI[19][20] = -82.22;
	break;
	case 20:
	matrizRSSI[20][1] = -83.79;
	matrizRSSI[20][2] = -83.21;
	matrizRSSI[20][3] = -83.57;
	matrizRSSI[20][4] = -87.30;
	matrizRSSI[20][5] = -83.53;
	matrizRSSI[20][6] = -79.85;
	matrizRSSI[20][7] = -68.07;
	matrizRSSI[20][8] = -76.93;
	matrizRSSI[20][9] = -81.64;
	matrizRSSI[20][10] = -84.89;
	matrizRSSI[20][11] = -82.82;
	matrizRSSI[20][12] = -82.60;
	matrizRSSI[20][13] = -83.21;
	matrizRSSI[20][14] = -84.53;
	matrizRSSI[20][15] = -86.64;
	matrizRSSI[20][16] = -84.48;
	matrizRSSI[20][17] = -80.37;
	matrizRSSI[20][18] = -75.56;
	matrizRSSI[20][19] = -82.22;
	break;
	case 20:
	break;
	}
}

double getRSSI(int src, int dest){
	double RSSI = matrizRSSI[src][dest];
	return RSSI;
}

#endif