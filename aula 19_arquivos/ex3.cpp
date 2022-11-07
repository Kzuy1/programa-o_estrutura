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
	arq = fopen("base.db", "wb");
	
	char nome[10][30]= {"Miguel", "Arthur", "Gael", "Heitor", "Helena", "Alice", "Theo", "Laura", "Davi", "Gabriel"};
	
	if(arq == NULL){
		printf("O arquivo não foi aberto\n");
	} else {
		for (int i = 0; i < 100; i++){
			strcpy(v1[i].nome, nome[rand() % 10]);
			v1[i].idade = rand() % 50;
			fwrite(&v1[i].nome, sizeof(char), 30, arq);
			fwrite(&v1[i].idade, sizeof(int), 1, arq);
		}
		
		fclose(arq);
	}
}

void le_arquivo(){
	int i = 0;
	FILE *arq;
	arq = fopen("base.db", "rb");
	
	char nome[100][30];
	int idade[100];
	
	if(arq == NULL){
		printf("O arquivo não foi aberto\n");
	} else {
		for(; !feof(arq); i++){
			if(!feof(arq))
			fread(&nome[i], sizeof(char), 30, arq);
			fread(&idade[i], sizeof(int), 1, arq);
		}
		for(i = 0; i <100; i++){
			cout << nome[i] << "\n";
			cout << idade[i] << "\n";
		}
		fclose(arq);
	}
}

int main(){
	srand( time(NULL));
	//grava_arquivo();
	le_arquivo();
}
