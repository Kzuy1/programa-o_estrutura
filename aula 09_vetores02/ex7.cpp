#include <cstdio>
#include <cstdlib>
#include <ctime>

int main(){
	int i,fibo[30];
	
	fibo[0] = 0;
	fibo[1] = 1;
	//EX7
	for ( i = 2; i < 30; i++){
		fibo[i] = fibo[i - 1 ] + fibo[i - 2];
		printf("\n%d", fibo[i]);
	}
}
