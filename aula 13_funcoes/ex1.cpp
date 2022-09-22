#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <locale.h>
#include <cctype>
#include <stdbool.h>
#include<iostream>
#include<windows.h>
#include <math.h>
using namespace std;

int n = 28;
int multiplica(int m) {
	return n * m;
}

int exponencia(int e) {
	return pow(n,e);
	
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	srand( time(NULL));
	
	
	int x = multiplica(2)+ multiplica(3)+ exponencia(2)+exponencia(3);
	printf("%d", x);
	
	
}
