#include <cstdio>

int main(){
	int x, y, z;
	x = 3;
	y = 2;
	z = 1;
	
	z += x++*y;
	printf("\n %d", z);
	z += ++x*y;
	printf("\n %d", z);	
}
