#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <locale.h>
#include <cctype>

int main(){
	setlocale(LC_ALL, "Portuguese");
	srand( time(NULL));
	int i;
	int a[10],b[10],c[20];
	for (i = 0; i < 10; i++){
		a[i] = rand()%10;
		b[i] = rand()%10;
	}
	
}
