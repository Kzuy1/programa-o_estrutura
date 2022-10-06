#include <cstdio>
#include <cmath>

int main(){
	// a
	float r,b,a;
	r = 2 * 1.45/3;
	printf("\n%f", r);
	printf("\n");
	// b
	b= 4;
	a= 40 - sqrt(b);
	r= (int) 3.1416 + a*5;
	printf("\n%f", b);
	printf("\n%f", a);
	printf("\n%f", r);
	printf("\n");
	//c
	r= 9.5 - 18 % 8;
	printf("\n%f", r);
	printf("\n");
	//d
	r= (-6+(int)3.4)*(-6+(int)3.4)-7/3;
	printf("\n%f", r);
	printf("\n");
}
