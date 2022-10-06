#include <cstdio>

int main(){
	int x,y,z;
	x = 1;
	y = 2;
	z = 3;
	x = y = z = 7;
	printf("\n %d %d %d", x, y, z);
	x += y += z += 7;
	printf("\n %d %d %d", x, y, z);	
}
