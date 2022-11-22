#include <cstdio>

int main(){
	int lin, col;
	
	lin = 5;
	col = 5;
	
	for(int i = 0; i < lin; i++){
		for(int c = 0; c < col; c++){
			if(i == 0 || i == lin-1){
				printf("*");	
			} else if(c == 0 || c == col-1){
				printf("*");	
			} else{
				printf(" ");	
			}
		}
		printf("\n");
	}
}
