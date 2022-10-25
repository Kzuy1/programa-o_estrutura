#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
#include <locale.h>
#include <windows.h>
#include <conio.h>
using namespace std;
#include "data.cpp"

Data datas[10];

void mostrarTodasDatas(){
	char ch;
	for (int i = 0; i < 10; i++){
		mostraData(datas[i]);
	}
	cout << "\nAperte qualquer botão para voltar ao Menu Principal:\n";
	ch = getch();
	system("cls");
}

void mostrarDatasDeUmMes(int mes){
	for (int i = 0; i < 10; i++){
		if(datas[i].mes == mes){
			mostraData(datas[i]);
		}	
	}
}

int main() {
	srand( time(NULL));
	setlocale(LC_ALL, "Portuguese");
	
	for (int i = 0; i < 10; i++){
		datas[i]=geraDataAleatorio();
	}


	char ch;
	do {
		cout << "Digite um número:\n";
		ch = getch();
		system("cls");
		
		switch (ch) {
			case '1':
				mostrarTodasDatas();
			break;				
		}
	} while (ch != 's');
}
