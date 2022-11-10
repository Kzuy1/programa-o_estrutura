#include <cstdio>
#include <iostream>
using namespace std;

void divisao(int a, int b, int *q, int *r){
	*q = a / b;
	*r = a % b;
}

int main(){
	int a,b,q,r;
	printf("Digite o dividendo: \n");
	scanf("%d", &a);
	
	printf("Digite o divisor: \n");
	scanf("%d", &b);
	
	divisao(a,b,&q,&r);
	printf("\nQuociente: %d", q);
	printf("\nResto: %d", r);
}
