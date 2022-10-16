#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <locale.h>
#include <cctype>
#include <stdbool.h>
#include<iostream>
#include<windows.h>
#include <math.h>
#include <cstring>
using namespace std;

char verifica(char ipv4[15]){
	char* sub;
	int num = 0;
	int partIPV4;
	
	sub = strtok(ipv4, ".");
	
	while(sub != NULL) {
		num++;
		
		partIPV4 = atoi(sub);
		if(partIPV4 > 0 && 255 < partIPV4){
			return printf("Endereço IPV4 inválido!");
		}
		
		sub = strtok(NULL, ".");
	}
	
	if(num != 4){
		return printf("Endereço IPV4 inválido!");
	} else {
		return printf("Endereço IPV4 valido!");
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	srand( time(NULL));
	char ipv4[15];
	
	printf("Digite um endereço IPV4:\n");
	cin >> ipv4;
	
	verifica(ipv4);

	
}
