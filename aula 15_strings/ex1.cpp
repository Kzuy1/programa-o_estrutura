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

void verifica(string email){
	int posAroba, posPonto;

	posAroba = email.find("@");
	if(posAroba >= 0){
		cout << "\nPossui @";
		cout << "\n" << posAroba;
	}
	
	posPonto = email.rfind(".");
	if(posPonto >= 0){
		cout << "\nPossui .";
		cout << "\n" << posPonto;
	}
	
	if(posAroba == 0){
		cout <<  "\nE-mail invalido!";
	} else if(posPonto < 3){
		cout << "\nE-mail invalido!";
	} else if(email.size() < 4){
		cout << "\nE-mail invalido!";
	} else {
		cout << "\nE-mail válido";
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	srand( time(NULL));
	string email;
	
	printf("Digite seu e-mail:\n");
	cin >> email;
	
	
	verifica(email);

}
