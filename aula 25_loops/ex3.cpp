#include <cstdio>

int main(){
	int m;
	
	m = 15;
	
	for(int i = 1; i <= m; i++){
		for(int c = 0; c < i; c++){
			printf("*");
		}
		printf("\n");
	} 
}
