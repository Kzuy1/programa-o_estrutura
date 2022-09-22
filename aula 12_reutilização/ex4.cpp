#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <locale.h>
#include <cctype>
#include <stdbool.h>
#include<iostream>
#include<windows.h>
using namespace std;

int op = 28;
void aleatorio(){
	int qtd, sum;
	system("clear||cls");
	printf("Digite 0 para sair");
	printf("\nDigite a quantidade números aleatorios:\n");
	scanf("%d", &qtd);
	if(qtd == 0){
		op = 0;
	}
	
	sum = 0;
	for (int i = 0; i < qtd; i++){
		sum = sum + rand()%1000;
	}
	printf("Soma Total:\n%d", sum);
	Sleep(1000);
	
	
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	srand( time(NULL));
	
	while(op != 0){
		aleatorio();
	}
	
	
}
