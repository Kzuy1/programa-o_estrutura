#include <cstdio>

int main(){
	int lin, col;
	
	lin = 5;
	col = 15;
	
	for(int i = 0; i < lin; i++){
		for(int c = 0; c < col; c++){
			printf("*");
		}
		printf("\n");
	}
}
