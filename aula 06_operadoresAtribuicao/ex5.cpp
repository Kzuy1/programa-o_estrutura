#include <cstdio>

int main(){
	int x,y,z;
	x = 1;
	y = 2;
	z = x++ +y;
	printf("\n %d", z);
	z = x+ ++y;
	printf("\n %d", z);	
}
