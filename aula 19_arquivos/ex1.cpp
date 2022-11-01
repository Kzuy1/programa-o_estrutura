#include <cstdio>
#include <ctime>
#include "vetor.cpp"

void organizar_valores(int p[], int t){
	int i, k, temp;
	for ( i = 0; i < t; i++){
		for ( k = 0; k < t; k++){
			if (p[i] < p[k]){
				temp = p[i];
				p[i] = p[k];
				p[k] = temp;
			}
		}
	}
	
}

void grava_arquivo(int dt[], int tam){
	FILE *arq, *arq1;
	arq = fopen("base.txt", "wt");
	
	if(arq == NULL){
		printf("O arquivo não foi aberto\n");
	} else {
		for (int i = 0; i < tam; i++){
			fprintf(arq, "\n%d", dt[i]);
		}
		
		fclose(arq);
	}
	
	organizar_valores(dt, 100);
	arq1 = fopen("base1.txt", "wt");
	if(arq == NULL){
		printf("O arquivo não foi aberto\n");
	} else {
		for (int i = 0; i < tam; i++){
			fprintf(arq1, "\n%d", dt[i]);
		}
		
		fclose(arq1);
	}
}

int main(){
	srand( time(NULL));
	
	int v[100];
	preenche_aleatorio100(v, 100);
	grava_arquivo(v, 100);
}
