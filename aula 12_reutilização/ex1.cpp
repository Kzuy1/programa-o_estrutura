#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <locale.h>
#include <cctype>
#include <stdbool.h>

void quadrados(int t) {
	for(int i=1; i<=t; i++) {
		printf("\n%d° - %d^%d = %d", i, i, i, i*i);
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	srand( time(NULL));
	
	int valor;
	printf("Digite um valor:\n");
	scanf("%d", &valor);
	system("clear||cls");
	quadrados(valor);
}
