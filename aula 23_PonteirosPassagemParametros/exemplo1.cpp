#include <cstdio>
#include <iostream>
using namespace std;

void troca(int &x, int &y){
	int aux;
	printf("\nAntes: x=%d y=%d", x, y);
	aux = x;
	x = y;
	y = aux;
	printf("\nDepois: x=%d y=%d", x, y);
}

int main(){
	int a, b;
	printf("\nEntre com dois 2 valores inteiros:\n");
	scanf("%d%d", &a, &b);
	
	printf("\nAntes: a=%d b=%d", a,b);
	troca(a,b);
	printf("\nDepois: a=%d b=%d", a,b);
	
	
}
