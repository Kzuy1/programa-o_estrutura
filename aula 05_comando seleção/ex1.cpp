#include <cstdio>

int main(){
	int A,B,X;
	char c;

	printf("\nDigite um numero inteiro para A: ");
	scanf("%d", &A);
	printf("\nDigite um numero inteiro para B: ");
	scanf("%d", &B);
	printf("\nDigite um numero inteiro para X: ");
	scanf("%d", &X);
	printf("\nDigite uma Letra: ");
	scanf(" %c", &c);
	
	if(X>0){
		printf("\nX eh positivo");
	}
	
	if(X % 2 == 0){
		printf("\nX eh par");
	}
	
	if(10<=X and X<=35){
		printf("\nX esta entre 10 e 35");
	}
	
	if(10<X or X<-6){
		printf("\nX eh maior que 10 ou X eh menor que -6");
	}
	
	if(X== 10 or X==15 or X==19 or X==35){
		printf("\nX assume um dos seguintes valores: 10, 15, 19 ou 35");
	}
	
	if(A== 35 and B==23){
		printf("\nA tem valor 35 e B tem valor 23");
	}
	
	if( X< 12 and X%X==0){
		printf("\nX eh um dos cinco primeiros numeros primos");
	}
	
	if('a'<= c and c<='m'){
		printf("\nEsta entre a e m");		
	}
	
	if(c != 'c' and c != 'x'){
		printf("\nEh diferente de c e de x");		
	}
	

	
	
}
