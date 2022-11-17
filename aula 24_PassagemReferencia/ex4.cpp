#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

void baskara(int a, int b, int c, float &r1, float &r2){
	float delta;
	if(a != 0){
		delta = (b*b) - (4*a*c);
		if(delta<0){
        }
        else if (delta==0){
            r1=(-b)/(2*a);
        }else{
            r1=(-b - sqrt(delta))/(2*a);
            r2=(-b + sqrt(delta))/(2*a);
        }
    }
}

int main(){
	int a,b,c;
	float r1, r2;
	r1 = r2 = sqrt(-2);
	
	printf("Digite o A: \n");
	scanf("%d", &a);
	
	printf("Digite o B: \n");
	scanf("%d", &b);
	
	printf("Digite o C: \n");
	scanf("%d", &c);
	
	baskara(a,b,c,r1,r2);
	
	printf("\nRaiz 1: %f", r1);
	printf("\nRaiz 2: %f", r2);
}
