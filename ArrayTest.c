#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int b[5][4] = { 0 };
	int a[4][5] = { {5,41,24,6,10}, {50,33,20,15,11}, {7,27,35,21,16}, {4,16,61,90,1} };
	int c[4][5] = { 0 };

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			b[j][3 - i] = a[i][j];
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			c[j][4 - i] = b[i][j];
		}
	}

	printf("배열 a)\n\n");

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%2d ", a[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	printf("배열 b)\n\n");

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%2d ", b[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	printf("배열 c)\n\n");

	for (int i = 0; i <4; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%2d ", c[i][j]);
		}
		printf("\n");
	}
	
	return 0;

}