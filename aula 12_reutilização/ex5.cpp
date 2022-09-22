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

void preenche_numero(int V[], int tam, int valor){
	for(int i = 0; i < tam; i++){
		V[i] = valor;
	}
}

void preenche_aleatorio(int V[], int tam){
	for(int i = 0; i< tam; i++){
		V[i] = rand()%100;
	}
}

void mostra_vetor(int V[], int tam, char nome){
	printf("\n%c: ", nome);
	for(int i = 0; i < tam; i++){
		printf("%d ", V[i]);
	}
}

void tabuada(int V[], int tam, int valor){
	for(int i = 0; i < tam; i++){
		V[i] = i * valor;
	}
}		

void soma_vetor(int soma1[], int soma2[], int resultado[], int t){
	for (int i = 0; i < t; i++){
		resultado[i] = soma1[i] + soma2[i];
	}
}

void maior_vetor(int V[], int tam){
	int max = V[0];
	for (int i = 0; i < tam; i ++){
		if (max < V[i]){
			max = V[i];
		}
	}
	printf("Maior vetor:\n%d", max);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	srand( time(NULL));
	int A[10], B[5], C[20],D[30],E[10],F[10];
	preenche_numero(A,10,1);
	preenche_numero(B,5,0);
	preenche_numero(C,20,2);
	preenche_aleatorio(D,30);
	tabuada(E,10,5);
	soma_vetor(A, E, F, 10);
	mostra_vetor(A,10,'A');
	mostra_vetor(B,5,'B');
	mostra_vetor(C,20,'C');
	mostra_vetor(D,30,'D');
	mostra_vetor(E,10,'E');
	mostra_vetor(F,10,'F');
	maior_vetor(D,30);
	
}
