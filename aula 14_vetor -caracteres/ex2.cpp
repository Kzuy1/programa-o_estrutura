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

void verifica(char password[32]){
	
	char sC[] = {'!', '@', '#', '$', '%', '^', '&', '*'};
	bool pM, pN, pC;
	pM = pN = pC = false;
	printf("\n");
	
	
	for(int i = 0; i < 32; i++){
		
		if('A' <= password[i] && password[i] <= 'Z'){
			printf("Possui letra maiúscula");
			pM = true;
			break;
		}		
	}
	
	for(int i = 0; i < 32; i++){
		if('0' <= password[i] && password[i] <= '9'){
			printf("\nPossui número");
			pN = true;
			break;
		}	
	}
	
	for(int i = 0; i < 32; i++){
		
		if(password[i] == sC[0] || password[i] == sC[1] || password[i] == sC[2] || password[i] == sC[3] || password[i] == sC[4] || password[i] == sC[5] || password[i] == sC[6] || password[i] == sC[7]){
			printf("\nPossui caractere estranho");
			pC = true;
			break;
		}
	}
	
	if(pM == true && pN == true && pC == true){
		printf("\n\nSenha válida");
	}else {
		printf("\n\nSenha invalida");
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	srand( time(NULL));
	char password[32];
	
	printf("Digite uma senha:\n");
	cin >> password;
	
	verifica(password);
	
}
