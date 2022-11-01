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
		cout << "\n";
		mostraData(datas[i]);
	}
	cout << "\nAperte qualquer botão para voltar ao Menu Principal:\n";
	ch = getch();
	system("cls");
}

void pesquisarData(){
	char ch;
	int mes;
	cout << "Digite o mês que deseja mostrar:\n";
	cin >> mes;
	for (int i = 0; i < 10; i++){
		if(datas[i].mes == mes){
		cout << "\n";
		mostraData(datas[i]);	
		}
	}
	cout << "\nAperte qualquer botão para voltar ao Menu Principal:\n";
	ch = getch();
	system("cls");
}

void pesquisarOldData(){
	char ch;
	int dia, mes, ano, i;
	dia = datas[0].dia;
	mes = datas[0].mes;
	ano = datas[0].ano;
	
	for (i = 0; i < 10; i++){
		if(datas[i].dia < dia && datas[i].mes < mes && datas[i].ano < ano){
			dia = datas[i].dia;
			mes = datas[i].mes;
			ano = datas[i].ano;
		}
	}
	cout << "Data mais antiga:\n";
	printf("\n%02d/%02d/%04d", dia, mes, ano);
	cout << "\nAperte qualquer botão para voltar ao Menu Principal:\n";
	ch = getch();
	system("cls");
}

int main() {
	srand( time(NULL));
	setlocale(LC_ALL, "Portuguese");
	
	for (int i = 0; i < 10; i++){
		datas[i]=geraDataAleatorio();
	}


	char ch;
	do {
		cout << "Digite um número: [1-2-3]\n";
		ch = getch();
		system("cls");
		
		switch (ch) {
			case '1':
				mostrarTodasDatas();
			break;
			
			case '2':
				pesquisarData();
			break;	
			
			case '3':
				pesquisarOldData();
			break;			
		}
	} while (ch != 's');
}
