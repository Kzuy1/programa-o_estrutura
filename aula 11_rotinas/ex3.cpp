#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <locale.h>
#include <cctype>

int i, j, aux;
int a[20], b[20], c[20], d[20], e[20], f[20];

void mostra_vetor(int p[], int t){
	for (i = 0; i < t; i++){
		printf("%d ", p[i]);
	}
}

void soma_vetor(int soma1[], int soma2[], int resultado[]){
	for (i = 0; i < 20; i++){
		resultado[i] = soma1[i] + soma2[i];
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	srand( time(NULL));
	
	for (i = 0; i < 20; i++){
		a[i] = i + 1;
		b[i] = i + 21;
		c[i] = rand()%28;
		d[i] = rand()%35;
	}
	
	printf("Mostra A:\n");
	mostra_vetor(a,  sizeof(a) / sizeof(a[0]));
	printf("\nMostra B:\n");
	mostra_vetor(b,  sizeof(b) / sizeof(b[0]));
	
	for (i = 0, j = 19;  i < 20; i++, j--){
		aux = a[i];
		a[i] = b[j];
		b[j] = aux;
	}
	
	printf("\n\nMostra A trocado:\n");
	mostra_vetor(a,  sizeof(a) / sizeof(a[0]));
	printf("\nMostra B trocado:\n");
	mostra_vetor(b,  sizeof(b) / sizeof(b[0]));
	
	soma_vetor(a, b, e);
	soma_vetor(c, d, f);
	
	printf("\n\nMostra E:\n");
	mostra_vetor(e,  sizeof(e) / sizeof(e[0]));

	printf("\n\nMostra F:\n");
	mostra_vetor(f,  sizeof(f) / sizeof(f[0]));
	
	
	
	
	
}

