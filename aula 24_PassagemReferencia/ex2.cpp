#include <cstdio>
#include <iostream>
using namespace std;

void operacoes(int a, int b, int &som, int &dif) {
	som = a + b;
	dif = a - b;
}

int main(){
	int x,y,w,z;
	operacoes(12,21,x,y); 
	//x = 33 y = -9
	operacoes(x,y,w,z);
	//w = 24 z = 42;
	operacoes(w,z,x,y);
	//x = 66 y = -18
	operacoes(x,y,x,x); //??
	//1° - som = 66 + (-18);
	//2° - x = 48
	//3° - dif = 66 - (-18;
	//4° - x= 84
	//x = 84 y = -18 w = 24 z =42
	cout << x << "\n";
	cout << y << "\n";
	cout << w << "\n";
	cout << z << "\n";	
}
