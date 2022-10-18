#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

struct Data {
	int dia;
	int mes;
	int ano;
};

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

int main() {
	Pessoa Joao;
	
	Joao.nome = "Joao";
	
	Joao.endereco.logradouro = "Castro Alves";
	Joao.endereco.numero = 531;
	Joao.endereco.bairro = "Sao Jose";
	Joao.endereco.cidade = "Blumenau";
	Joao.endereco.estado = "Santa Catarina";
	
	Joao.dataNascimento.dia = 13;
	Joao.dataNascimento.mes =  6;
	Joao.dataNascimento.ano = 2002;
	
	Joao.cpf = "932.652.640-25";
	Joao.sexo = "Masculino";
	
	printf("Nome: \n%s", Joao.nome.c_str());
	printf("\n\nLogradouro: \n%s", Joao.endereco.logradouro.c_str());
	printf("\n\nNumero: \n%d", Joao.endereco.numero);
	printf("\n\nBairro: \n%s", Joao.endereco.bairro.c_str());
	printf("\n\nCidade: \n%s", Joao.endereco.cidade.c_str());
	printf("\n\nEstado: \n%s", Joao.endereco.estado.c_str());
	printf("\n\nData de Nascimento: \n%d/%d/%d", \
			Joao.dataNascimento.dia, Joao.dataNascimento.mes, Joao.dataNascimento.ano);
	printf("\n\nCPF: \n%s", Joao.cpf.c_str());
	printf("\n\nSexo: \n%s", Joao.sexo.c_str());
}


