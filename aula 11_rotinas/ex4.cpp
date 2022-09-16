#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <locale.h>
#include <cctype>
#include <stdbool.h>

int r, valor, VAR;

void somar(){
	system("clear||cls");
	printf("Digite o valor a somar no Var:\n");
	scanf("%d", &valor);
	VAR = VAR + valor;
	printf("\n");
}
void subtrair(){
	system("clear||cls");
	printf("Digite o valor a subtrair no Var:\n");
	scanf("%d", &valor);
	VAR = VAR - valor;
	printf("\n");
	
}

void multiplicar(){
	system("clear||cls");
	printf("Digite o valor a multiplicar no Var:\n");
	scanf("%d", &valor);
	VAR = VAR * valor;
	printf("\n");
	
}

void dividir(){
	system("clear||cls");
	printf("Digite o valor a dividir no Var:\n");
	scanf("%d", &valor);
	VAR = VAR / valor;
	printf("\n");
	
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	srand( time(NULL));
	VAR = 0;
	r = 28;
	
	while (r != 0){
		system("clear||cls");
		printf("O VAR está em %d", VAR);
		
		printf("\n\n\nDigite 1 para somar");
		printf("\nDigite 2 para subtrair");
		printf("\nDigite 3 para multiplicar");
		printf("\nDigite 4 para dividir");
		printf("\nDigite 0 para sair\n");
		scanf("%d", &r);
		if ((r < 0) || (4 < r)){
			system("clear||cls");
		} else {
			switch (r){
				case 0 :
					break;
				case 1 :
					somar();
					break;
				case 2 :
					subtrair();
					break;
				case 3 :
					multiplicar();
					break;
				case 4 :
					dividir();
					break;
				
			}
		}
		
		
	}
}
