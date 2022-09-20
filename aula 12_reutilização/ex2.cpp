#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <locale.h>
#include <cctype>
#include <stdbool.h>

void mostra_numeros(int valor1, int valor2) {
	for(int i = valor1; i < valor2; i++){
		printf("%d\n", i);
	}
	
}	

int main(){
	setlocale(LC_ALL, "Portuguese");
	srand( time(NULL));
	
	int valor1, valor2;
	printf("Digite um inicial:\n");
	scanf("%d", &valor1);
	system("clear||cls");
	
	printf("Digite um final:\n");
	scanf("%d", &valor2);
	system("clear||cls");
	
	mostra_numeros(valor1,valor2);
	
}
