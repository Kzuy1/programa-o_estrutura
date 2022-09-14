#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <locale.h>
#include <cctype>

int main(){
	setlocale(LC_ALL, "Portuguese");
	srand( time(NULL));
	int i;
	int a[10],b[10],c;
	c = 0;
	for (i = 0; i < 10; i++){
		a[i] = rand()%10;
		b[i] = rand()%10;
		c = c + a[i] * b [i];
	}	
	printf("\nA:\n");
	
	for (i = 0; i < 10; i++){
		printf("%d ", a[i]);
	}
	printf("\nB:\n");
	for (i = 0; i < 10; i++){
		printf("%d ", b[i]);
	}
	printf("\nC:\n");
	printf("%d", c);
	
	
}
