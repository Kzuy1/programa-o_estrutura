#include <cstdio>

int main(){
	char pal[30];
	printf("\nDigite uma palavra:");
	//scanf("%s", &pal);
	fgets(pal, 30, stdin);
	puts(pal);
	printf("\n	Palavra digitada: %s", pal);
}
