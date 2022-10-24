#include <cstdio>
#include <cstring>
#include <string>
using namespace std;
#include <stdbool.h>

int main (){
	int idade;
	bool maior;
	printf("Digite uma idade:\n");
	scanf("%d", &idade);
	
	if(18 <= idade){
		maior = true;
	} else {
		maior = false;
	}
	
	printf(maior ? "true" : "false");
}
