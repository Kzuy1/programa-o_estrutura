#include <cstdio>
#include <ctime>
#include "vetor.cpp"


void grava_arquivo(int dt[], int tam){
	FILE *arq;
	arq = fopen("base.txt", "wt");
	
	if(arq == NULL){
		printf("O arquivo não foi aberto\n");
	} else {
		for (int i = 0; i < tam; i++){
			fprintf(arq, "\n%d", dt[i]);
		}
		
		fclose(arq);
	}
}

int main(){
	srand( time(NULL));
	
	int v[50];
	preenche_aleatorio(v, 50);
	grava_arquivo(v, 50);
}
