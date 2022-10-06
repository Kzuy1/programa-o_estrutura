#include <cstdio>

int main(){
	int a,b;
	a = 5; 
	b = 7;
	printf("\n %d %d", a,b);//A
	
	a += 2;
	b -= 2;
	printf("\n %d %d", a,b);//B
	
	a += b; 
	b -= a;
	printf("\n %d %d", a,b);//C
	
	a++;
	b--;
	printf("\n %d %d", a,b);//D
	
	a +=b;
	b -=a;
	printf("\n %d %d", a,b);//E
	
}
