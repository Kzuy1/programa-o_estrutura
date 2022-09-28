#include <cstdio>

void prog1 (){
	int x = 9, y = 0;
	do {
		y = (x % 2) + 10 * y;
		x = x /2;
		printf( "x = %d, y = %d\n", x, y);
	} while( x );
	while( y ) {
		x = y % 100;
		y = y / 10;
		printf( "x = %d, y = %d\n", x, y);
	}
}

void prog2 (){
	int i, j, n;
	n = 4;
	for (i = 1; i <= n; i++){
		for( j = 1; j <= i; j++){
			printf("%3d", j * i);
		}
		printf("\n");
	}
}

void prog2a (){
	int i, j, n;
	n = 7;
	for (i = 1; i <= n; i++){
		for( j = 1; j <= i; j++){
			printf("%3d", j * i);
		}
		printf("\n");
	}
}

void prog2b (){
	int i, j, n;
	n = 10;
	for (i = 1; i <= n; i++){
		for( j = 1; j <= i; j++){
			printf("%3d", j * i);
		}
		printf("\n");
	}
}

void prog2c (){
	int i, j, n;
	n = 10;
	for (i = 1; i <= n; i++){
		for( j = 1; j <= 10; j++){
			printf("%3d", j * i);
		}
		printf("\n");
	}
}

void prog3a (){
	int i, soma;
	soma = 0;
	for (i = 1; i <= 1000; i++){
		if( i % 2 == 0){
			soma = soma + i;
		}
	}
	printf("\n%3d", soma);
}

void prog3b (){
	int Y,i,mult;
	float X;
	mult = 1;
	
	printf("\nDigite um numero real para X: ");
	scanf("%f", &X);
	printf("\nDigite um numero inteiro para Y: ");
	scanf("%d", &Y);
	
	for (i = 1; i <= Y; i++){
		mult = mult * X;
		printf("\n%f", mult);
	}
	printf("\n%3d", mult);
}

int main(){
	prog1();
	//prog2();
	//prog2a();	
	//prog2b();
	//prog2c();
	//prog3a();
	//prog3b();
	
}












