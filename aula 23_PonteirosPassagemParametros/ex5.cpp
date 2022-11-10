#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

void inc(int *n){
	(*n)++;
}
int main(){
	int i;
	i = 10;
	inc(&i);
	inc(&i);
	inc(&i);
	cout << i;
}
