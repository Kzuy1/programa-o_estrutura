#include <cstdio>

int main(){
	int i, j;
	i = 10;
	j = 20;
	
	printf("\n%p=>%d", &i, i);
	printf("\n%p=>%d", &j, j);
	int *p, *q;
	
	p = &i;
	q = &j;
	printf("\n%p=>%p=->%d", &p, p, *p);
	printf("\n%p=>%p=->%d", &q, q, *q);
	
	int **x2 = &p;
	int ***x3 = &x2;
	int ****x4 = &x3;
	int *****x5 = &x4;
	int ******x6 = &x5;
	int *******x7 = &x6;
	int ********x8 = &x7;
	int *********x9 = &x8;
	int **********x10 = &x9;
	int ***********x11 = &x10;
	int ************x12 = &x11;
	int *************x13 = &x12;
	int **************x14 = &x13;
	int ***************x15 = &x14;
	int ****************x16 = &x15;
	int *****************x17 = &x16;
	int ******************x18 = &x17;
	int *******************x19 = &x18;
	int ********************x20 = &x19;
	printf("\n");
	printf("\n%d=>%d=->%d", &x2, x2, **x2);
	printf("\n%d=>%d=->%d", &x3, x3, ***x3);
	printf("\n%d=>%d=->%d", &x4, x4, ****x4);
	printf("\n%d=>%d=->%d", &x4, x4, *****x4);
}
