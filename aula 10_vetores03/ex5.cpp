#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <locale.h>
#include <cctype>

//Intercalar

int i, d, c, m, t;
int a[100], dezena[100], centena[100], milhar[100];

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
	t = sizeof(dezena) / sizeof(dezena[0]);
	for( i = 0; i < t; i++){
		if (dezena[i] != 0 ){
		printf("%d ", dezena[i]);	
		}
		
	}
	
	printf("\n\nCentena:\n\n");
	t = sizeof(centena) / sizeof(centena[0]);
	for( i = 0; i < t; i++){
		if (centena[i] != 0 ){
		printf("%d ", centena[i]);	
		}
		
	}
	
	printf("\n\nMilhar:\n\n");
	t = sizeof(milhar) / sizeof(milhar[0]);
	for( i = 0; i < t; i++){
		if (milhar[i] != 0 ){
		printf("%d ", milhar[i]);	
		}
		
	}
	
}
