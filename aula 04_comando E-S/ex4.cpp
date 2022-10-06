#include <cstdio>

int main(){
	
	float fahrenheit,fforc;
	printf("\nDigite o valor em Fahrenheit:");
	scanf("\n%f", &fahrenheit);
	
	fforc = (fahrenheit-32)/1.8;
	printf("\n=%f", fforc);
}
