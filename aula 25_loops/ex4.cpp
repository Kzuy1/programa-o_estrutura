#include <cstdio>

int main(){
	int t;
	printf("Digite o n�mero da tabuada desejada:\n");
	scanf("%d", &t);
	
	for(int i = 1; i <=10; i++){
		printf("%d x %d = %d\n", t, i, t*i);
	}
}
