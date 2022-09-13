#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <locale.h>
#include <cctype>

int main(){
	setlocale(LC_ALL, "Portuguese");
	srand( time(NULL));
	int i,t,c;
	
	int m1[10], m2[10];
	
	for (i = 0; i < 10; i++){
		m1[i] = rand()%10;
		m2[i] = (rand()%20)-10;
	}
	for (i = 0; i < 10; i++){
		printf("%d ",m1[i]);
	}
	printf("\n");
		for (i = 0; i < 10; i++){
		printf("%d ",m2[i]);
	}
	
	for(i = 0, c= 9; i < 10; i++, c--){
		t = m1[i];
		m1[i] = m2[c];
		m2[c] = t; 
	}
	printf("\n\n");
	for (i = 0; i < 10; i++){
		printf("%d ",m1[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++){
		printf("%d ",m2[i]);
	}
}
