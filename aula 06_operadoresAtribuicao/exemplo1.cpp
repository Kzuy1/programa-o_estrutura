#include <cstdio>
using namespace std;

void prog1(){
	int a,b,c,d,e;
	a = b = c = 5;
	printf("\n%d %d %d", a,b,c);
	d = a++;
	e = ++a;
	printf("\n%d %d", d,e);
	a += 5;
	b *= 5;
	c %= 5;
	printf("\n %d %d %d", a,b,c);
}

int main(){
	prog1();
}
