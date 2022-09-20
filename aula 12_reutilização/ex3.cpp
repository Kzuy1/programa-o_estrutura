#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <locale.h>
#include <cctype>
#include <stdbool.h>
#include<iostream>
using namespace std;

void soma_numeros(int valor1, int valor2, int passo) {
	int cont, soma;
	soma = 0;
	for(cont=valor1; cont<=valor2; cont += passo) {
		soma = soma + cont;
	}
	cout << soma;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	srand( time(NULL));
	
	int valor1, valor2,passo;
	printf("Digite um inicial a ser somado:\n");
	scanf("%d", &valor1);
	system("clear||cls");
	
	printf("Digite um final a ser somado:\n");
	scanf("%d", &valor2);
	system("clear||cls");
	
	printf("Digite passo:\n");
	scanf("%d", &passo);
	system("clear||cls");
	
	soma_numeros(valor1,valor2,passo);
}
