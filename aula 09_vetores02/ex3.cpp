#include <cstdio>
#include <cstdlib>
#include <ctime>

int main (){
	//M�dia n�mero
	int i,x,m;
	int a[30];
	srand( time(NULL));
	printf("\nEx3\n");
	x = 0;
	m = 0;
	
	for ( i = 0; i < 30; i++){
		a[i] = rand ()%10;
		m = m + a[i];
		printf ("%d ", a[i]);
	}
	
	printf("\n\nMedia: %d", m / (sizeof(a) / sizeof(a[0])));
	
	//Menor n�mero
	i = sizeof(a) / sizeof(a[0]) - 1;
	x = 200;
	for ( i; i >= 0; i--){
		if ( a[i] < x){
			x = a[i];
		}
	}
	
	printf("\n\nMenor numero: %d ", x);
	
	//Moda
	int rep, n, r, i2;
	n = 0;
	r = 0;
	for ( i = 0; i < 30; i++){
		rep = 0;
		for ( i2 = 0; i2 < 30; i2++){
			if ( a[i] == a[i2]){
			rep = rep +1;	
			}
		}
		
		if (rep > r){
			r = rep;
			n = a[i];
		}
	}
	
	printf("\n\nModa: %d", n);
	printf("\nRepeticoes: %d", r);
	
	//SOMA 22
	int ai[30],c;
	c = 1;
	for (i = 0; i < 29; i ++){
		ai[i] = a[i] + a[c];
		c++;
	}
	printf("\n");
	for (i = 0; i <30 ; i++){
		printf("%d ", ai[i]);
	}
	
	

	

}
