#include <cstdio>
#include <locale.h>
#include<iostream>
using namespace std;

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

int multVertical(){
	int lin, col, aux, cal;
	int posLin, posCol;
	aux = 0;
	for(col = 0; col < 20; col++){
		for(lin = 0; lin <17; lin++){
			cal = matriz[lin][col] * matriz[lin+1][col] * matriz[lin+2][col] * matriz[lin+3][col];
			if(cal > aux){
				aux = cal;
				posLin = lin;
				posCol = col;
			}
		}
	}
	printf("Número: %d\tPosição Linha: %d\tPosição Coluna %d\n", aux, posLin, posCol);
}

int multHorizontal(){
	int lin, col, aux, cal;
	int posLin, posCol;
	aux = 0;
	for(lin = 0; lin < 20; lin++){
		for(col = 0; col < 17; col++){
			cal = matriz[lin][col] * matriz[lin][col+1] * matriz[lin][col+2] * matriz[lin][col+3];
			if(cal > aux){
				aux = cal;
				posLin = lin;
				posCol = col;
			}
		}
	}
	printf("Número: %d\tPosição Linha: %d\tPosição Coluna %d\n", aux, posLin, posCol);
}

int multDiagonal45(){
	int lin, col, aux, cal;
	int posLin, posCol;
	aux = 0;
	for(lin = 0; lin < 17; lin++){
		for(col = 3; col < 20; col++){
			cal = matriz[lin][col] * matriz[lin+1][col-1] * matriz[lin+2][col-2] * matriz[lin+3][col-3];
			if(cal > aux){
				aux = cal;
				posLin = lin;
				posCol = col;
			}
		}
	}
	printf("Número: %d\tPosição Linha: %d\tPosição Coluna %d\n", aux, posLin, posCol);
}

int multDiagonal135(){
	int lin, col, aux, cal;
	int posLin, posCol;
	aux = 0;
	for(lin = 0; lin < 1; lin++){
		for(col = 0; col < 17; col++){
			cal = matriz[lin][col] * matriz[lin+1][col+1] * matriz[lin+2][col+2] * matriz[lin+3][col+3];
			if(cal > aux){
				aux = cal;
				posLin = lin;
				posCol = col;
			}
		}
	}
	printf("Número: %d\tPosição Linha: %d\tPosição Coluna %d\n", aux, posLin, posCol);
}


int main(){
	setlocale(LC_ALL, "Portuguese");
	le_arquivo();
	int lin, col, aux, cal;
	lin = 6, col = 15;
	multVertical();
	multHorizontal();
	multDiagonal45();
	multDiagonal135();
}

