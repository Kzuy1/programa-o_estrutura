#include <cstdio>
#include <cstdlib>
#include <ctime>

int main(){
	int i;
	int a[30];
	srand( time(NULL));
	printf("\nEx1\n");
	for ( i = 0; i < 30; i++){
		a[i] = rand ()%100;
		printf ("%d ", a[i]);
	}
	printf("\nEx2\n");
	i = sizeof(a) / sizeof(a[0]) - 1;
	for ( i; i >= 0; i--){
		printf("%d ", a[i]);
	}
	
}
