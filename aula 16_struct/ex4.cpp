#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

struct Data {
	int dia;
	int mes;
	int ano;
};

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

int main() {
	Locadora l1;
	
	l1.clientes[0].name = 'Jovano';
	l1.clientes[0].salario = 5000;
	
	l1.clientes[0].dataCadastro.dia = 28;
	l1.clientes[0].dataCadastro.mes =	2;
	l1.clientes[0].dataCadastro.ano = 2020;
	
	l1.clientes[0].dataNascimento.dia = 30;
	l1.clientes[0].dataNascimento.mes = 2;
	l1.clientes[0].dataNascimento.ano = 1969;
	
}
