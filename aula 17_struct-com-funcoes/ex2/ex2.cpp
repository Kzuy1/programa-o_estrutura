#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
#include <locale.h>
#include <windows.h>
using namespace std;
#include "data.cpp"


struct EnderecoData {
	int numero;
	string logradouro;
	string cidade;
	string estado;
};

struct Pessoa {
	string nome;
	EnderecoData endereco;
	Data dataNascimento;
	string cpf;
	string sexo;
};

Pessoa geraPessoa(string nomeE,  int numeroE, string logradouroE, string cidadeE, string estadoE, Data aqE, string cpfE, string sexoE){
	Pessoa aux;
	aux.nome = nomeE;
	aux.endereco.numero = numeroE;
	aux.endereco.logradouro = logradouroE;
	aux.endereco.cidade = cidadeE;
	aux.endereco.estado = estadoE;
	aux.dataNascimento = aqE;
	aux.cpf = cpfE;
	aux.sexo = sexoE;
	return aux;
}

void mostrarPessoa(Pessoa aux){
	SYSTEMTIME str_t;
	GetSystemTime(&str_t);
    int anoAtual = str_t.wYear;
    
	cout << "\nNome: " << aux.nome;	
	cout << "\nEndereço: " << aux.endereco.numero << " - " << aux.endereco.logradouro << ", " << aux.endereco.cidade << " - " << aux.endereco.estado;
	cout << "\nCPF: " << aux.cpf;
	cout << "\nSexo: " << aux.sexo;
	cout << "\nIdade: " << anoAtual - aux.dataNascimento.ano << " anos";
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	Pessoa Joao;
	
	Joao = geraPessoa("Joao", 531, "Castro Alves", "Blumenau", "Santa Catarina", geraData(13,6,2002), "932.652.640-25", "Masculino");

	mostrarPessoa(Joao);
}
