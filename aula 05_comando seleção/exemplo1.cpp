#include <cstdio>

int main(){
	
	int n;
	printf("\nDigite um numero inteiro: ");
	scanf("%d", &n);
	
	if ( n>0 and n%2 == 0){
		printf("\nPositivo e par");
	} else if( n<0 and n%2 == 0){
		printf("\nNegativo e par");		
	}else if( n>0 and n%2 != 0){
		printf("\nPositivo e impart");		
	}else if( n<0 and n%2 != 0){
		printf("\nNegativo e impar");		
	}else {
		printf("\nZero eh neutro");	
	}
		
	
}
