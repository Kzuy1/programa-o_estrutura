#include <cstdio>

struct Data {
	int dia;
	int mes;
	int ano;
};

Data geraData(int d, int m, int a){
	Data aux;
	aux.dia = d;
	aux.mes = m;
	aux.ano = a;
	return aux;
}

void mostraData(Data aux){
	printf("%02d/%02d/%04d", aux.dia, aux.mes, aux.ano);
}
