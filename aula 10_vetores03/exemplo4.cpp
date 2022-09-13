#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <locale.h>
#include <cctype>

int main(){
	setlocale(LC_ALL, "Portuguese");
	srand( time(NULL));
	int i;
	
	int A[20], P[20], I[20];
	for(i=0; i<20; i++) {
	A[i] = i;
	}
	for(i=0; i<20; i++) {
		if(A[i]%2 == 0)
			P[i] = A[i];
		else
			I[i] = A[i];
	}
}
