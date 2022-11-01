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

Data geraDataSytem (){
	SYSTEMTIME str_t;
	GetSystemTime(&str_t);
    
	Data aux;
	aux.dia = str_t.wDay;
	aux.mes = str_t.wMonth;
	aux.ano = str_t.wYear;
	return aux;
}

Data geraDataAleatorio (){
	Data aux;
	
	aux.dia = rand() % 30 + 0001;
	aux.mes = rand() % 12 + 0001;
	aux.ano = rand() % 27 + 1995;
	return aux;
}

string randomNameGeneration (){
	string alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string aux;

	for(int i = 0; i < 5; i++){
		aux = aux + alfabeto[rand() % 25];
	}
	return aux;
}

void verificaData (int d, int m, int a) {
	setlocale(LC_ALL, "Portuguese");
	if (m < 1 || 12 < m){
		printf("Inválida!");
	} else if (a % 4 == 0 && m == 2 && 29 < d){
		printf("Inválida!");
	} else if (a % 4 != 0 && m == 2 && 28 < d){
		printf("Inválida!");
	} else if (31 < d){
		printf("Inválida!");
	} else if (m <= 7){
		if(m % 2 == 0 && 30 < d){
			printf("Inválida!");
		} else{
			printf("Válida!");
		}
	} else if (8 <= m){
		if(m % 2 != 0 && 30 < d){
			printf("Inválida!");
		} else {
			printf("Válida!");
		}
	}
}

void mostraData(Data aux){
	printf("%02d/%02d/%04d", aux.dia, aux.mes, aux.ano);
}

