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

float celciusToFahrenheit(float c){
	
	return ((9.0/5.0)*c)+32;
}

float fahrenheitToCcelcius(float f){
	return (f-32)/(9.0/5.0);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	srand( time(NULL));
	float c, f;
	
	cout << "Entre com Celsius:\n";
	cin >> c;
	cout << "F° "<< celciusToFahrenheit(c);
	
	cout << "\nEntre com Fahrenheit:\n";
	cin >> f;
	cout << "C° "<< fahrenheitToCcelcius(f);
	
}
