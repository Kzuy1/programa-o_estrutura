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
	Cliente clientes;
	CD cds;
	Locacao locacao;
};

int main() {
	
	
	
}
