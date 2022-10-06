#include <cstdio>
#include <cstdlib>
#include <ctime>


int main(){
	
	int m[3][3];
	int m2[3][3];
	int m3[3][3];
	int m4[3][3];
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j ++){
			m[i][j] = 0;
			m2[i][j] = 0;
			m3[i][j] = 0;
			m4[i][j] = 0;
		}	
	}
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j ++){
			system("cls");
			
			for (int ic = 0; ic < 3; ic++){
			printf("\n");
				for (int jc = 0; jc < 3; jc ++){
					printf("%d ", m[ic][jc]);
				}	
			}
			printf("\nDigite numero:\n");
			scanf("%d", &m[i][j]);	
		}	
	}
	system("cls");
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j ++){
			system("cls");
			
			for (int ic = 0; ic < 3; ic++){
			printf("\n");
				for (int jc = 0; jc < 3; jc ++){
					printf("%d ", m2[ic][jc]);
				}	
			}
			printf("\nDigite numero:\n");
			scanf("%d", &m2[i][j]);	
		}	
	}
	system("cls");
	
	
	
	
}
