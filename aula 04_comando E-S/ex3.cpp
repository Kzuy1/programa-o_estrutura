#include <cstdio>

int main() {
	float a,b,c;
	float calx,caly,calz;
	printf("\nEntre com a em numero real: ");
	scanf("%f", &a);
	printf("\nEntre com b em numero real: ");
	scanf("%f", &b);
	printf("\nEntre com c em numero real: ");
	scanf("%f", &c);
	
	calx = a/(b+c);
	printf("\nX=%f", calx);

	caly = a/(b*c);
	printf("\nY=%f", caly);

	calz = (a+2*b)/(4-c);
	printf("\nZ=%f", calz);
}
