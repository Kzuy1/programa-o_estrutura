#include <cstdio>

int main(){
	int altura;
	char c;
	
	printf("\nDigite sua altura em cm: ");
	scanf("%d", &altura);
	
	printf("\nF= FEMININO M= MASCULINO");
	scanf(" %c", &c);
	
	if(c == 'M'){
		printf("\n%d", ((72.7*altura)-58)/100);
	}
	if(c == 'F'){
		printf("\n%d", ((62.1*altura)-44.7)/100);
	}
}
