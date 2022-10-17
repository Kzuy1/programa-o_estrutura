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
#include <string>
using namespace std;

void verifica(string password){
		
	char sC[] = {'!', '@', '#', '$', '%', '^', '&', '*'};
	bool pM, pN, pC;
	pM = pN = pC = false;
	int posM, posN, posC;
	posM = posN = posC = 0;
	
	for(int i = 65; i < 91; i++){
		char ch = char(i);
		posM = password.find(ch);
		if (posM >= 0) {
			cout << "\nPossui letra maiúscula";
			pM = true;
			break;
		}
	}
	
	for(int i = 48; i < 58; i++){
		char ch = char(i);
		posM = password.find(ch);
		if (posM >= 0) {
			cout << "\nPossui número";
			pN = true;
			break;
		}
	}
	
	for(int i = 0; i < 8; i++){
		posM = password.find(sC[i]);
		if (posM >= 0) {
			cout << "\nPossui caractere estranho";
			pC = true;
			break;
		}
	}
	
	if(pM == true && pN == true && pC == true){
		cout << "\n\nSenha válida";
	}else {
		cout << "\n\nSenha invalida";
	}

}

int main(){
	setlocale(LC_ALL, "Portuguese");
	srand( time(NULL));
	string password;
	
	printf("Digite uma senha:\n");
	cin >> password;
	
	
	verifica(password);
	char ch = char(65);
	
}
