#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main(){
	srand( time(NULL));
	int *vetor;
	int tam;
	
	printf("Digite o tamanho do vetor:\n");
	scanf("%d", &tam);
	
	vetor = (int*) malloc(sizeof(int)*tam);
	
	for(int i = 0; i < tam; i++){
		vetor[i] = rand()%200;
	}
	
	cout << "\n";
	for(int i = 0; i < tam; i++){
		cout << vetor[i] << "\n";
	}
}
