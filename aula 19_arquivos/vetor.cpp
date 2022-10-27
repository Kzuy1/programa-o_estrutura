#include <cstdio>
#include <ctime>
#include <cstdlib>
#include <string>
#include <cstring>
#include<iostream>
using namespace std;

void preenche_aleatorio(int aux[], int length){
	for(int i = 0; i < length; i++){
		aux[i] = rand()%50;
	}
}

void mostra_vetor(int aux[], int tam){
	for(int i = 0; i < tam; i++){
		printf("\n%d", aux[i]);
	}
}


