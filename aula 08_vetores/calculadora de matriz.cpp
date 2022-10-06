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
			if (m[i][j] % 2 == 0) {
				m2[i][j] = m[i][j] * 2;
			} else {
				m2[i][j] = m[i][j] * 3;
			}
		}
	}
	
	for (int i = 0; i < 3; i++){
		printf("\n");
		for (int j = 0; j < 3; j ++){
			printf("%d ", m[i][j]);
		}	
	}
	
	printf("\n");
	for (int i = 0; i < 3; i++){
		printf("\n");
		for (int j = 0; j < 3; j ++){
			printf("%d ", m2[i][j]);
		}
	}
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j ++){
			m3[i][j] = 0;
			for ( int k = 0; k < 3; k++){
				m3[i][j] = m3[i][j] + m[i][k]*m2[k][j];
			}
		}
	}
	
	printf("\n");
	for (int i = 0; i < 3; i++){
		printf("\n");
		for (int j = 0; j < 3; j ++){
			printf("%d ", m3[i][j]);
		}
	}
	
	
}
