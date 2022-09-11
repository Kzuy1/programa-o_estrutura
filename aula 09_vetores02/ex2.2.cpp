#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <locale.h>

//Preencha um vetor com números aleatórios positivos e
//negativos. Então, para os números negativos,
//multiplique-os por -1. Mostre os vetores antes e após as
//operações.

int main (){
	setlocale(LC_ALL, "Portuguese");
	srand( time(NULL));
	int i;
	int a[10], a1[10];
	
	for ( i = 0; i < 10; i++){
		a[i] = (rand()%199)-99;
		printf(" %d", a[i]);
	}
	printf("\n");
	// 0 É POSITIVO!!!!!!!
	for (i = 0; i < 10; i++){
		if (a[i] < 0){
			a1[i] = a[i] * -1;
		}else {
			a1[i] = a[i];
		}
		printf(" %d", a1[i]);
	}
}

