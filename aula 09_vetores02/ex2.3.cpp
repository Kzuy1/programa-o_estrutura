#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <locale.h>
#include <cctype>


//Solicitar um nome completo e armazenar num vetor.
//Ent�o, mostre o nome em caixa alta(letras mai�sculas)
//usando um la�o de repeti��o para isto.

int main() {
	setlocale(LC_ALL, "Portuguese");
	srand( time(NULL));
	int i;
	char a[30];
	
	for (i = 0; i < 30; i ++){
		a[i] = 0;
	}
	
	printf("\nDigite seu nome completo:\n");
	gets(a);
	
	for (i = 0; i < 30; i++){
		printf("%c", toupper(a[i]));
	}
	
	
	
}
