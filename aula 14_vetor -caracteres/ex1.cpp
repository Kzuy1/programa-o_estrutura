#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <locale.h>
#include <cctype>
#include <stdbool.h>
#include<iostream>
#include<windows.h>
#include <math.h>
#include <cstring>
using namespace std;

void verifica(char email[]){
	int posAroba, posPonto;
	int i;
	for(i = 0; i < strlen(email); i++){
		if(email[i] == '@'){
			posAroba = i;
			printf("\nPossui @");
			break;
		}	
	}

	for(i; i < 256; i++){
		if(email[i] == '.'){
			posPonto = i;
			printf("\nPossui .");
		}	
	}
	
	if(posAroba == 0){
		printf("\nE-mail invalido!1");
	} else if(posPonto < 3){
		printf("\nE-mail invalido!2");
	} else if(strlen(email) < 4){
		printf("\nE-mail invalido!3");
	} else {
		printf("\nE-mail válido");
	}
	
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	srand( time(NULL));
	char email[256];
	
	printf("Digite seu e-mail:\n");
	cin >> email;
	
	
	verifica(email);

}
