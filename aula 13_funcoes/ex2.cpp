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

float x(float a, float b, float c){
	return a / (b+c);
}

float y(float a, float b, float c){
	return a / (b*c);
}

float z(float a, float b, float c){
	return (a+2*b)/(4-c);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	srand( time(NULL));
	float a, b, c;
	cout << endl << "Entre com A, B, C:\n";
	cin >> a >> b >> c;
	cout << endl << "X = " << x(a,b,c);
	cout << endl << "Y = " << y(a,b,c);
	cout << endl << "Z = " << z(a,b,c);
}
