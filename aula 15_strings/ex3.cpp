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
#include <string>
using namespace std;

char verifica(string ipv4){
	
	ipv4 += ".";

	string deli = ".";
	string partIPV4S;
	
    int start = 0;
    int end = ipv4.find(deli);
    int partIPV4;
    int num = 0;
    
    while (end != -1) {
    	num++;
    	
    	partIPV4S = ipv4.substr(start, end - start);
        partIPV4 = atoi(partIPV4S.c_str());
        
        if(partIPV4 > 0 && 255 < partIPV4){
			return printf("Endere�o IPV4 inv�lido!");
		}
        start = end + deli.size();
        end = ipv4.find(deli, start);
    }

    if(num != 4){
		return printf("Endere�o IPV4 inv�lido!");
	} else {
		return printf("Endere�o IPV4 valido!");
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	srand( time(NULL));
	string ipv4;
	
	printf("Digite um endere�o IPV4:\n");
	cin >> ipv4;
	
	verifica(ipv4);

	
}
