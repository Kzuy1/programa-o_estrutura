#include <cstdio>

int matriz[20][20];

void le_arquivo(){
	int i = 0;
	FILE *arq;
	arq = fopen("matriz20.csv", "rt");
	
	if(arq == NULL){
		printf("O arquivo não foi aberto\n");
	} else {
		for(int i = 0; i < 20; i++){
			for(int c = 0; c < 20; c++){
				fscanf(arq, "%d;", &matriz[i][c]);	
			}
		}
		fclose(arq);
	}
}



int main(){
	le_arquivo();
	
	for(int lin = 0; i < 20; i++){
		for(int col = 0; c <20; c++){
			printf("%d ", matriz[lin][col]);
		}
		printf("\n");
	}
}

