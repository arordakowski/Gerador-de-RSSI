// Geração de números aleatórios

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
	A função gerar_numero() retorna um número aleatório
	que pertence ao intervalo [lim_inf, lim_sup]
	
	Os dois parâmetros da função são lim_inf que representa
	o limite inferior do intervalo e lim_sup que representa
	o limite superior.
*/
int gerar_numero(int lim_inf, int lim_sup)
{
	// a função rand() gera um inteiro aleatório
	int valor = lim_inf + rand() % (lim_sup - lim_inf);
	return valor;
}


int main(int argc, char *argv[])
{
	/* coordenadas de uma area de 200m quadrados
	lat1 =-10.6607391; 
	lat2 =-10.6625575; 
     	lon1 =-55.7003228; 
     	lon2 =-55.7021575; 
	
	Como as distância é muito curta, podemos suprirmir os números  antes da virgula
	das latitudes e longitudes, e sortear os valores aleatórios dos números remanescentes após a virgula
	ex: lat1 =-10.6607391 -> (lat1 =6607391)  
	*/
    	const int lat1 =6607391 ; 
	const int lat2 =6625575; 
     	const int lon1 =7003228; 
     	const int lon2 =7021575; 


	int nodes;
	scanf("%d", &nodes);
 
    	FILE *arq1;
    	arq1 = fopen("./coord.txt","w");

	for (int x=1;x<=nodes; x++){
		srand(time(NULL)/x);
		// Na impressão adicionamos o valor suprimido anteriormente	
		fprintf(arq1, "%d -10.%d -55.%d\n", x, gerar_numero(lat1, lat2), gerar_numero(lon1, lon2));
	}
	return 0;
}
