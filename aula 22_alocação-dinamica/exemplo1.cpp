#include <cstdio>
#include <cstdlib>

int main(){
	int *p;
	float *q;
	
	p = (int*) malloc(sizeof(int));
	q = (float*) malloc(sizeof(int));
	*p = 2;
	*q = 2.3;
	printf("\n%p -> %d", p, *p);
	printf("\n%p -> %f", q, *q);
	
	free(p);
	free(q);
	printf("\n%p -> %d", p, *p);
	printf("\n%p -> %f", q, *q);
	
	p = NULL;
	printf("\n%p", p);
}
