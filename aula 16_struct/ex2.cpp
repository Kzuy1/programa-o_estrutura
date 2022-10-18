#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

struct Data {
	int dia;
	int mes;
	int ano;
};

struct Automovel {
	string modelo;
	char marca[40];
	Data dtAquisicao;
};

int main(){
	Automovel v1, v2;
	
	v1.modelo = "Uno";
	strcpy(v1.marca, "Fiat");
	v1.dtAquisicao.dia = 3;
	v1.dtAquisicao.mes = 7;
	v1.dtAquisicao.ano = 2005;
	
	v2.modelo = "Fusca";
	strcpy(v1.marca, "Volks");
	v2.dtAquisicao.dia = 20;
	v2.dtAquisicao.mes = 11;
	v2.dtAquisicao.ano = 1983;
	
	printf("Automovel: %s\nMarca: %s\nData de Aquisicao: %d/%d/%d", \
			v1.modelo.c_str(), v1.marca, v1.dtAquisicao.dia, v1.dtAquisicao.mes, v1.dtAquisicao.ano);
			
	printf("\n\n");
	
	printf("Automovel: %s\nMarca: %s\nData de Aquisicao: %d/%d/%d", \
			v2.modelo.c_str(), v2.marca, v2.dtAquisicao.dia, v2.dtAquisicao.mes, v2.dtAquisicao.ano);
		
}
