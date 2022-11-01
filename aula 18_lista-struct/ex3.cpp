#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
#include <conio.h>
using namespace std;

#include "data.cpp"

struct Automovel {
	string modelo;
	char marca[40];
	Data dtArquisicao;
};
Automovel v[100];

Automovel geraAutomovel(string mo, char *ma, Data aq){
	Automovel aux;
	aux.modelo = mo;
	strcpy(aux.marca, ma);
	aux.dtArquisicao = aq;
	return aux;
}

void mostrarAutomovel(Automovel aux){
	printf("\nAutomovel {");
	cout << " Marca : " << aux.marca;
	cout << ", Modelo : " << aux.modelo;
	cout << ", Data Aquisicao: ";
	mostraData(aux.dtArquisicao);
	printf("}");
}

void mostrarAutomovels(){
	for(int i = 0; i < 100; i++){
		printf("\nAutomovel {");
		cout << " Marca : " << v[i].marca;
		cout << ", Modelo : " << v[i].modelo;
		cout << ", Data Aquisicao: ";
		mostraData(v[i].dtArquisicao);
		printf("}");
	}
	
	char ch;
	cout << "\nAperte qualquer botão para voltar ao Menu Principal:\n";
	ch = getch();
	system("cls");
}

void pesquisarData(){
	char ch;
	int ano;
	cout << "Digite o ano que deseja mostrar as compras realizadas: \n";
	cin >> ano;
	for (int i = 0; i < 100; i++){
		if(v[i].dtArquisicao.ano == ano){
		mostrarAutomovel(v[i]);	
		}
	}
	cout << "\nAperte qualquer botão para voltar ao Menu Principal:\n";
	ch = getch();
	system("cls");
}

void pesquisarMarca(){
	char ch;
	string marca;
	cout << "Digite a marca que deseja mostrar das compras realizadas: \n";
	cout << "Toyota, Volkswagen, Ford, Honda, Hyundai, Nissan, Chevrolet, Kia, Mercedes-Benz ou BMW\n";
	cin >> marca;
	for (int i = 0; i < 100; i++){
		if(v[i].marca == marca){
		mostrarAutomovel(v[i]);	
		}
	}
	cout << "\nAperte qualquer botão para voltar ao Menu Principal:\n";
	ch = getch();
	system("cls");
}

int main (){
	srand( time(NULL));
	setlocale(LC_ALL, "Portuguese");
	
	for(int i = 0; i < 100; i++){
		string modelo[10] = {"Toyota", "Volkswagen", "Ford", "Honda", "Hyundai", "Nissan", "Chevrolet", "Kia", "Mercedes-Benz", "BMW"};
		string str_obj(modelo[rand() % 10]);
		v[i] = geraAutomovel(randomNameGeneration(), &str_obj[0], geraDataAleatorio());
	}
	
	char ch;
	do {
		cout << "Digite um número: [1-2-3]\n";
		ch = getch();
		system("cls");
		
		switch (ch) {
			case '1':
				mostrarAutomovels();
			break;
			
			case '2':
				pesquisarData();
			break;	
			
			case '3':
				pesquisarMarca();
			break;	
						
		}
	} while (ch != 's');
	
}
