#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <locale.h>

//Dado um vetor com 100 elementos (preenchido
//aleatoriamente), forneça um número e verifique se este
//número se encontra ou não no vetor.

int main(){
	setlocale(LC_ALL, "Portuguese");
	srand( time(NULL));
	int i, valor, truee;
	int a[100];

	for ( i = 0; i < 100; i++){
		a[i] = rand ()%1000;
		printf(" %d", a[i]);
	}
	
	printf("\nDigite um número:");
	scanf("%d", &valor);
	
	truee = 0;
	for ( i = 0; i < 100; i++){
		if (valor == a[i]){
			truee = 1;
			i = 200;
		}
	}
	
	if ( truee == 1){
		printf("\nValor se encontra no Array!");
	} else {
		printf("\nValor não se encontra no Array!");
	}
}
