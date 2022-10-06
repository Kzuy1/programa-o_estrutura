#include <cstdio>

int main(){
	int x,y,R;
	x = 2;
	y = 3;
	R = 3*6;
	printf("\n%d",x);
	R = R % y - x;
	printf("\n%d", R);
	R = R + 4;
	printf("\n%d", R);
	R = R * x;
	printf("\n%d", R);
	R = R/3;
	printf("\n%d", R);
	
}
