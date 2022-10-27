#include <cstdio>
#include <cstring>
#include <string>
#include <locale.h>
#include <iostream>
using namespace std;

#include "data.cpp"

struct Cliente {
	string name;
	int salario;
	Data dataNascimento;
	Data dataCadastro;	
};

struct CD {
	string name;
	string artista;
	int numeroDeFaixas;
};

struct Locacao {
	int codigoClient;
	int codigoCD;
	Data dataLocacao;
	Data dataDevolucao;
};

struct Locadora{
	Cliente clientes[50];
	CD cds[200];
	Locacao locacao[200];
};

Locadora aux;

void geraCliente(int index, string name, int salario, Data dNas, Data dCadas){
	aux.clientes[index].name = name;
	aux.clientes[index].salario = salario;
	aux.clientes[index].dataNascimento = dNas;
	aux.clientes[index].dataCadastro = dCadas;
}

void mostraCliente(int index){
	cout <<  "Nome: " << aux.clientes[index].name;
	cout <<  "\nSalário: " << aux.clientes[index].salario;
	printf("\nData Nascimento: %02d/%02d/%04d", aux.clientes[index].dataNascimento.dia, aux.clientes[index].dataNascimento.mes, aux.clientes[index].dataNascimento.ano);
	printf("\nData Cadastro: %02d/%02d/%04d", aux.clientes[index].dataCadastro.dia, aux.clientes[index].dataCadastro.mes, aux.clientes[index].dataCadastro.ano);
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	geraCliente(0, "Jovano", 5000, geraData(3,7,2005), geraData(27,10,2022));
	mostraCliente(0);
}
