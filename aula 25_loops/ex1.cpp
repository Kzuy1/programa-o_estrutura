#include <cstdio>

int main(){
	int i,j,k,l;
	//A
//	for(i=0;i<8;i++)
//		for(j=0;j<7;j++)
//
//		printf("A");//56
//	printf("B");//1

//	//B
//	for(i=0;i<10;i++) {
//		for(j=0;j<5;j++)
//		printf("A");//50
//		printf("B");//10
//	}

	//C
//	for(i=0;i<6;i++) {
//		printf("A");//6
//		for(j=0;j<3;j++) {
//			for(k=0;k<4;k++)
//			printf("B");//72
//		printf("C");//18
//		}
//	}
	
//	//D
//	for(i=0;i<8;i++)
//		for(j=0;j<7;j++)
//			for(k=0;k<6;k++)
//			printf("A");//336
//		printf("B");//1
//	printf("C");//1

//	//E
//	for(i=0;i<8;i++)
//		printf("A");//8
//	for(j=0;j<7;j++)
//		printf("B");//7
//	for(k=0;k<6;k++)
//		printf("C");//6

//	//F
//	for(i=0;i<8;i++)
//		printf("A");//8
//	for(j=0;j<7;j++)
//		printf("A");//7
//	for(k=0;k<6;k++)
//		printf("A");//6

//	//G
//	for(i=0;i<8;i++) {
//		printf("A");//8
//		for(j=0;j<7;j++) {
//			printf("B");//56
//			for(k=0;k<6;k++) {
//				printf("C");//336
//			}
//		}
//	}

	//H
	for(i=0;i<6;i++)
		printf("A");//6
	for(j=0;j<5;j++)
		printf("B");//5
	for(k=0;k<4;k++) {
		printf("A");//4
		for(l=0;l<4;l++)
		printf("B");//16
	}

}
