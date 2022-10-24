#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
using namespace std;

#include "data.cpp"

struct Automovel {
	string modelo;
	char marca[40];
	Data dtArquisicao;
};

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

int main (){
	Automovel v1, v2, v3, v4;
	
	v1 = geraAutomovel("Uno", "Fiat", geraData(3,7,2005));
	v2 = geraAutomovel("Fusca", "Volks", geraData(20,11,1983));
	v3 = geraAutomovel("Siena", "Fiat", geraDataSytem());
	v4 = geraAutomovel("Tucktuck", "Fiat", geraDataAleatorio());
	
	
	mostrarAutomovel(v1);
	mostrarAutomovel(v2);
	mostrarAutomovel(v3);
	mostrarAutomovel(v4);
	cout << "\n";
	verificaData(29,11,2001);
}
