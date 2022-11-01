#include <cstdio>
#include <ctime>
#include <string>
#include "vetor.cpp"



struct dados{
	char nome[30];
	int idade;
};
dados v1[100];

void grava_arquivo(){
	FILE *arq;
	arq = fopen("base.txt", "wt");
	
	string nome[10] = {"Miguel", "Arthur", "Gael", "Heitor", "Helena", "Alice", "Theo", "Laura", "Davi", "Gabriel"};
	
	if(arq == NULL){
		printf("O arquivo não foi aberto\n");
	} else {
		for (int i = 0; i < 100; i++){
			v1[i].nome = nome[rand() % 10];
			fprintf(arq, "%c", v1[i].nome);
		}
		
		fclose(arq);
	}
}

int main(){
	srand( time(NULL));
	grava_arquivo();
}
