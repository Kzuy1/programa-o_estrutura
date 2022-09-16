#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <locale.h>
#include <cctype>

int i;
int a[10], b[5], c[20], d[30];

void prenche_vetor(int p[], int t){
	for (i = 0; i < t; i++){
		p[i] = rand()%2835;
	}
}

void mostra_vetor(int p[], int t){
	for (i = 0; i < t; i++){
		printf("%d ", p[i]);
	}
}
int main() {
	setlocale(LC_ALL, "Portuguese");
	srand( time(NULL));

	prenche_vetor(a,  sizeof(a) / sizeof(a[0]));
	prenche_vetor(b,  sizeof(b) / sizeof(b[0]));
	prenche_vetor(c,  sizeof(c) / sizeof(c[0]));
	prenche_vetor(d,  sizeof(d) / sizeof(d[0]));
	
	printf("\nA:\n");
	mostra_vetor(a,  sizeof(a) / sizeof(a[0]));
	printf("\n");
	printf("\nB:\n");
	mostra_vetor(b,  sizeof(b) / sizeof(b[0]));
	printf("\n");
	printf("\nC:\n");
	mostra_vetor(c,  sizeof(c) / sizeof(c[0]));
	printf("\n");
	printf("\nD:\n");
	mostra_vetor(d,  sizeof(d) / sizeof(d[0]));
	printf("\n");
	
	
	
}
