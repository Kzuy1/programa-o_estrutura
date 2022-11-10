#include <cstdio>
#include <iostream>
#include "vetor.cpp"
using namespace std;

void leVetor(int *V, int tam){
	for(int i=0; i < tam; i++){
		V[i] = rand()%100;
	}
}

int main(){
	int a[3], b[5];
	
	leVetor(a,3);
	leVetor(b,5);
	mostra_vetor(a,3);
	mostra_vetor(b,5);
}
