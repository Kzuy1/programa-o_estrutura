#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
using namespace std;

#include "data.cpp"


struct EnderecoData {
	string logradouro;
	int numero;
	string bairro;
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

Pessoa geraPessoa(string nomeE, string logradouroE, int numeroE, string bairroE, string cidadeE, string estadoE, Data aqE, string cpfE, string sexoE){
	Pessoa aux;
	aux.nome = nomeE;
	aux.endereco.logradouro = logradouroE;
	aux.endereco.numero = numeroE;
	aux.endereco.bairro = bairroE;
	aux.endereco.cidade = cidadeE;
	aux.endereco.estado = estadoE;
	aux.dataNascimento = aqE;
	aux.cpf = cpfE;
	aux.sexo = sexoE;
}

void mostrarPessoa(Pessoa aux){
	cout << "\nNome: "<< aux.endereco.bairro;
	cout << "\nNome: "<< aux.cpf;
	
	
}

int main() {
	Pessoa Joao;
	
	Joao = geraPessoa("Joao", "Castro Alves", 531, "Sao Jose", "Blumenau", "Santa Catarina", geraData(13,6,2002), "932.652.640-25", "Masculino");

	mostrarPessoa(Joao);
}
