#include <cstdio>
#include <ctime>
#include "vetor.cpp"

int le_arquivo(int aux[]){
	int i = 0;
	FILE *arq;
	arq = fopen("base.txt", "rt");
	
	if(arq == NULL){
		printf("O arquivo não foi aberto\n");
	} else {
		for(; !feof(arq); i++){
			fscanf(arq, "\n%d", &aux[i]);
		}
		fclose(arq);
	}
	return i;
}

int main(){
	srand( time(NULL));
	
	int v[100], tam;
	tam = le_arquivo(v);
	mostra_vetor(v, tam);

}
