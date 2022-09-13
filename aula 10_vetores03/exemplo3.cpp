#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <locale.h>
#include <cctype>

int main(){
	setlocale(LC_ALL, "Portuguese");
	srand( time(NULL));
	int i,c,c1;
	
	int m1[10],par[10],impar[10];
	
	for(i = 0; i < 10; i++){
		m1[i] = (rand()%199)-99;
		printf("%d ",m1[i]);
		

	}
	if (m1[i] % 2 == 0){
		par[i] = m1[i];
		} else {
			impar[i] = m1[i];
	}
	c = 0;
	c1 = 0;
	for(i = 0; i < 10; i++){
		if(m1[i] % 2 == 0){
			par[c] = m1[i];
			c++;
		}else {
			impar[c1] = m1[i];
			c1++;
		}
	}
	
	printf("\n\nPar:");
	for(i = 0; i < c; i++){
		printf("%d ", par[i]);
	}
	printf("\n\nImpar:");
	for(i = 0; i < c1; i++){
		printf("%d ", impar[i]);
	}
	
	
	
	
	
}
