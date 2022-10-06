#include <cstdio>

int main(){
	
	float celsius,cforf;
	printf("\nDigite o valor em celsius:");
	scanf("\n%f", &celsius);
	
	cforf = celsius*1.8+32;
	printf("\n=%f", cforf);
}
