#include <cstdio>
#include <iostream>
using namespace std;

void operacao(int a, int b, int &menos, int &mais, int &div, int &mult){
	menos = a - b;
	mais = a + b;
	div = a / b;
	mult= a * b;
}

int main(){
	int a,b,menos,mais,div,mult;
	printf("Digite o valor1: \n");
	scanf("%d", &a);
	
	printf("Digite o valor2: \n");
	scanf("%d", &b);
	
	operacao(a,b,menos,mais,div,mult);
	printf("\nMais: %d", mais);
	printf("\nMenos: %d", menos);
	printf("\nDivisao: %d", div);
	printf("\nMultipicacao: %d", mult);
}
