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
using namespace std;

float peso_ideal(float p, float a, char s){
	if ( s = 'm'){
		return (72.0 * a) -58;
	} else {
		return (62.1 * a) -58;
	}
	
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	srand( time(NULL));
	
	float p, a;
	char s;
	
	cout << "Digite seu peso em Kg:\n";
	cin >> p;
	
	cout << "Digite sua altura em Metro:\n";
	cin >> a;
	
	cout << "Digite M para Masculino e F para Feminino:\n";
	cin >> s;
	
	cout << "Peso ideal: " << peso_ideal(p, a, s) << "kg";
}
