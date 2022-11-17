#include <cstdio>
#include <iostream>
using namespace std;

void operacoes(int a, int b, int &div, int &resto) {
	div = a / b;
	resto = a % b;
}

int main(){
	int x,y,w,z;
	x = 32;
	y = 3;
	operacoes(x,y,w,z); 
	cout << x << "\n";
	cout << y << "\n";
	cout << w << "\n";
	cout << z << "\n";	
}
