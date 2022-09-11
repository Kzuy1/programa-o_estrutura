#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i,valor,fator;
	
	printf("Digite um valor:");
	scanf("%d", &valor);
	
	if (valor == 0){
		printf("Fatorial de 0 é 1!");
	} else {
		fator = 1;
		for ( i = valor; i > 0 ; i--){
			fator = fator * i;
		}
		printf("\nFatorial: %d", fator);
	}
}
