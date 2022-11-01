#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
#include <conio.h>
using namespace std;

#include "data.cpp"

struct Cliente {
	string nome;
	string cidade;
};

struct Automovel {
	Cliente cliente;
	string modelo;
	char marca[40];
	Data dtArquisicao;
};

Automovel v[100];

Automovel geraAutomovel(string nome, string cidade, string mo, char *ma, Data aq){
	Automovel aux;
	aux.cliente.nome = nome,
	aux.cliente.cidade = cidade,
	aux.modelo = mo;
	strcpy(aux.marca, ma);
	aux.dtArquisicao = aq;
	return aux;
}

void mostrarAutomovel(Automovel aux){
	printf("\nCliente: {");
	cout << " Nome:" << aux.cliente.nome;
	cout << " Cidade:" << aux.cliente.cidade;
	printf(" Automovel {");
	cout << " Marca: " << aux.marca;
	cout << ", Modelo: " << aux.modelo;
	cout << ", Data Aquisicao: ";
	mostraData(aux.dtArquisicao);
	printf("}");
}

void mostrarAutomovels(){
	for(int i = 0; i < 100; i++){
		printf("\nCliente: {");
		cout << " Nome:" << v[i].cliente.nome;
		cout << " Cidade:" << v[i].cliente.cidade;
		printf(" Automovel {");
		cout << " Marca: " << v[i].marca;
		cout << ", Modelo: " << v[i].modelo;
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

void pesquisarCarroCidade(){
	char ch;
	string cidade;
	cout << "Digite a cidade aonde foi comprado o carro: \n";
	cout << "São Paulo, Rio de Janeiro, Brasília, Salvador, Fortaleza, Belo Horizonte, Manaus, Curitiba, Recife ou Goiânia\n";
	cin >> cidade;
	for (int i = 0; i < 100; i++){
		if(v[i].cliente.cidade == cidade){
		mostrarAutomovel(v[i]);	
		}
	}
	cout << "\nAperte qualquer botão para voltar ao Menu Principal:\n";
	ch = getch();
	system("cls");
}

void pesquisarCarroCidadeMes(){
	char ch;
	string cidade;
	int mes;
	cout << "Digite a cidade aonde foi comprado o carro: \n";
	cout << "São Paulo, Rio de Janeiro, Brasília, Salvador, Fortaleza, Belo Horizonte, Manaus, Curitiba, Recife ou Goiânia\n";
	cin >> cidade;
	cout << "Digite o mes em número:\n";
	cin >> mes;
	for (int i = 0; i < 100; i++){
		if(v[i].cliente.cidade == cidade && v[i].dtArquisicao.mes == mes){
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
		string str_modelo(modelo[rand() % 10]);
		string nome[10] = {"Miguel", "Arthur", "Gael", "Heitor", "Helena", "Alice", "Theo", "Laura", "Davi", "Gabriel"};
		string str_nome(nome[rand() % 10]);
		string cidade[10] = {"São Paulo", "Rio de Janeiro", "Brasília", "Salvador", "Fortaleza", "Belo Horizonte", "Manaus", "Curitiba", "Recife", "Goiânia"};
		string str_cidade(cidade[rand() % 10]);
		v[i] = geraAutomovel(&str_nome[0], &str_cidade[0], randomNameGeneration(), &str_modelo[0], geraDataAleatorio());
	}
	
	char ch;
	do {
		cout << "Digite um número: [1-2-3-4-5]\n";
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
			
			case '4':
				pesquisarCarroCidade();
			break;
			
			case '5':
				pesquisarCarroCidadeMes();
			break;
						
		}
	} while (ch != 's');
	
}
