#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <locale.h>
#include <cctype>

//Intercalar

int i, k, d, temp;
int a[10],b[10],c[10];

void mostrar_valores(int p[], int t){
	for( i = 0; i < t; i++){
		printf("%d ", p[i]);
	}
}

void organizar_valores(int p[], int t){
	for ( i = 0; i < t; i++){
		for ( k = 0; k < t; k++){
			if (a[i] < a[k]){
				temp = a[i];
				a[i] = a[k];
				a[k] = temp;
			}
		}
	}
	
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	srand( time(NULL));
	
	for (i = 0; i < 10; i++){
		a[i] = rand()%10;
		b[i] = rand()%10;	
	}
	
	i = 0;
	while (i < 10){
		c[i] = a[i];
		c[i + 1] = b[i + 1];
		i = i + 2;
	}
	
	printf("A Desorgnizado:\n");
	mostrar_valores(a, sizeof(a) / sizeof(a[0]));
	
	printf("\nB Desorgnizado:\n");
	mostrar_valores(b, sizeof(b) / sizeof(b[0]));
	
	printf("\nC Desorgnizado:\n");
	for(i = 0; i < 10; i++){
		printf("%d ", c[i]);
	}

	organizar_valores(a, sizeof(a) / sizeof(a[0]));
	
	organizar_valores(b, sizeof(b) / sizeof(b[0]));
	
	organizar_valores(c, sizeof(c) / sizeof(c[0]));
	
	printf("\n\n\n\n");
	printf("A Orgnizado:\n");
	mostrar_valores(a, sizeof(a) / sizeof(a[0]));
	
	printf("\nB Orgnizado:\n");
	mostrar_valores(b, sizeof(b) / sizeof(b[0]));
	
	printf("\nC Orgnizado:\n");
	mostrar_valores(c, sizeof(c) / sizeof(c[0]));
	
		
}
