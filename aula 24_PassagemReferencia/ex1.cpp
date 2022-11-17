#include <cstdio>
#include <iostream>
using namespace std;

int dobro(int n) {
	int aux;
	aux = n+n;
	return aux;
}
int main(){
	int a = 5, x1,x2,x3,x4;
	x1 = dobro(10);
	cout << x1 << "\n";
	x2 = dobro(dobro(5));
	cout << x2 << "\n";
	x3 = dobro(2) + dobro(3);
	cout << x3 << "\n";
	x4 = dobro((a+15)/2);
	cout << x4 << "\n";
}
