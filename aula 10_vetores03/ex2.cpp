#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <locale.h>
#include <cctype>

int main(){
	setlocale(LC_ALL, "Portuguese");
	srand( time(NULL));
	int i,c,c1;
	
	int A[20], P[20] = {}, I[20] = {}, v1[20],v2[20],v3[20];
	for(i=0; i<20; i++) {
		A[i] = i;
	}
	c = c1 = 0;
	for(i=0; i<20; i++) {
		if(A[i]%2 == 0){
			P[i] = A[i];
			v1[c] = i;
			v3[c] = i;
			c++;
		} else{
			I[i] = A[i];
			v2[c1] = A[i];
			c1++;
		}
			
	}
	printf("\nPar:\n");
	for( i = 0; i < 20; i++){
		printf("%d ", P[i]);
	}
	printf("\nImpar:\n");
	for( i = 0; i < 20; i++){
		printf("%d ", I[i]);
	}
	printf("\nv1 Posições dos Pares:\n");
	for( i = 0; i < c; i++){
		printf("%d ", v1[i]);
	}
	printf("\nv2 Elementos Impares:\n");
	for( i = 0; i < c1; i++){
		printf("%d ", v2[i]);
	}
	printf("\nv3 Posições dos Pares::\n");
	for( i = 0; i < c; i++){
		printf("%d ", v3[i]);
	}
	
}
