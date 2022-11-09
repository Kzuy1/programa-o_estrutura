#include <cstdio>
#include <windows.h>
#include <ctime>
#include <locale.h>
#include <iostream>
#include <string>
using namespace std;

struct Data {
	int dia;
	int mes;
	int ano;
};

Data geraData(int d, int m, int a){
	Data aux;
	aux.dia = d;
	aux.mes = m;
	aux.ano = a;
	return aux;
}

Data geraDataAleatorio (){
	Data aux;
	
	aux.dia = rand() % 30 + 0001;
	aux.mes = rand() % 12 + 0001;
	aux.ano = rand() % 27 + 1995;
	return aux;
}

int main(){
	srand( time(NULL));
	Data *p;
	
	p = (struct Data*) malloc(sizeof(struct Data)*100);
	
	for (int i=0; i < 100; i++){
		p[i] = geraDataAleatorio();
	}
	
	for (int i=0; i < 100; i++){
		cout << p[i].dia << "/" << p[i].mes << "/" << p[i].ano << "\n";
	}
}


