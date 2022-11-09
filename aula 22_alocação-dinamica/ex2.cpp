#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <cstring>
using namespace std;

int main(){
	srand( time(NULL));
	char *palavra;
	int tam;
	
	printf("Digite a quantidade de letras:\n");
	scanf("%d", &tam);
	
	palavra = (char*) malloc(sizeof(char)*tam);
	
	printf("Digite a palavra: \n");
	scanf("%s", palavra);
	
	cout << "\n";
	
	for(int i = 0; i < tam; i++){
		cout << palavra[i] << "\n";
	}
}
