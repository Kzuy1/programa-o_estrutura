#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <locale.h>
#include <cctype>

//Intercalar

int i, d, c, m;
int a[100], dezena[100], centena[100], milhar[100];

void mostrar_valores(int p[100], int t){
	for( i = 0; i < t; i++){
		if (p[i] != 0 ){
		printf("%d ", p[i]);	
		}
		
	}
}

int main(){ 
	setlocale(LC_ALL, "Portuguese");
	srand( time(NULL));
	i = d = c = m = 0;
	for ( i ++; i < 100; i++){
		a[i] = rand()%32000;
		
		if ( a[i] < 100){
			dezena[d] = a[i];
			d++;
		}
		
		if ( a[i] < 1000){
			centena[c] = a[i];
			c++;
		}
		
		if ( a[i] < 10000){
			milhar[m] = a[i];
			m++;
		}	
	}
	printf("Dezena:\n\n");
	mostrar_valores(dezena, sizeof(dezena) / sizeof(dezena[0]));
	
	printf("\n\nCentena:\n\n");
	mostrar_valores(centena, sizeof(centena) / sizeof(centena[0]));
	
	printf("\n\nMilhar:\n\n");
	mostrar_valores(milhar, sizeof(milhar) / sizeof(milhar[0]));
	
}
