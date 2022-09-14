#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <locale.h>
#include <cctype>

int main(){
	setlocale(LC_ALL, "Portuguese");
	srand( time(NULL));
	int i;
	
	int a[10],b[10],c[10];
	
	for (i = 0; i < 10; i++){
		a[i] = rand()%20;
		b[i] = rand()%10;
		c[i] = a[i] + b[i];
	}
	printf("\nVetor A:\n");
	for (i = 0; i < 10; i++){
		printf("%d ", a[i]);
	}
	printf("\nVetor B:\n");
	for (i = 0; i < 10; i++){
		printf("%d ", b[i]);
	}
	printf("\nVetor A + B:\n");
	for (i = 0; i < 10; i++){
		printf("%d ", c[i]);
	}
	

}
