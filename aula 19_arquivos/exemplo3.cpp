#include <cstdio>
#include <ctime>
#include "vetor.cpp"

void grava_arquivo(int dt[], int tam){
	FILE *arq;
	arq = fopen("base.db", "wb");
	
	if(arq == NULL){
		printf("O arquivo não foi aberto\n");
	} else {
		for (int i = 0; i < tam; i++){
			fwrite(&dt[i], sizeof(int), 1, arq);
		}
		
		fclose(arq);
	}
}

int le_arquivo(int dt[]){
	int i = 0;
	FILE *arq;
	arq = fopen("base.db", "rb");
	
	if(arq == NULL){
		printf("O arquivo não foi aberto\n");
	} else {
		for(; !feof(arq); i++){
			if(!feof(arq)){
				fread(&dt[i], sizeof(int), 1, arq);
			}
		}
		fclose(arq);
	}
	return i-1;
}

int main(){
	srand( time(NULL));
	
	int v[50], w[50], tam;
	preenche_aleatorio(v, 50);
	mostra_vetor(v, 50);
	grava_arquivo(v, 50);
	
	tam = le_arquivo(w);
	mostra_vetor(w, tam);
}
