#include <cstdio>
#include <cmath>

int main(){
	//a
	int i;
	i = 3,1415;
	printf("\n%d",i);
	//b
	char c;
	c = 'C';
	i = c;
	printf("\n%d", i);
	//c
	i = 45;
	c = i;
	printf("\n%c", c);
	//d
	float f,x;
	f = 5.67;
	printf("\n%f", trunc(f));
	//e
	x = 4.543;
	printf("\n%f", x - ((int)x));
	//f
	f = 12%500;
	printf("\n%f", f);
}
