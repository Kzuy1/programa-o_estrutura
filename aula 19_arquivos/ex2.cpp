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
	
	char nome[10][30]= {"Miguel", "Arthur", "Gael", "Heitor", "Helena", "Alice", "Theo", "Laura", "Davi", "Gabriel"};
	
	if(arq == NULL){
		printf("O arquivo n�o foi aberto\n");
	} else {
		for (int i = 0; i < 100; i++){
			strcpy(v1[i].nome, nome[rand() % 10]);
			fprintf(arq, "%s\n", v1[i].nome);
		}
		
		fclose(arq);
	}
}

void le_arquivo(){
	int i = 0;
	FILE *arq;
	arq = fopen("base.txt", "rt");
	
	char nome[100][30];
	
	if(arq == NULL){
		printf("O arquivo n�o foi aberto\n");
	} else {
		for(; !feof(arq); i++){
			if(!feof(arq))
			fscanf(arq, "%s\n", &nome[i][30]);
			
		}
		for(i = 1; i <101; i++){
			cout << nome[i] << "\n";
		}
		fclose(arq);
	}
}

int main(){
	srand( time(NULL));
	//grava_arquivo();
	le_arquivo();
}
