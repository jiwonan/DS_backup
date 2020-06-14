#include <stdio.h>

void ShellSort(int a[], int n) {
	int i, j, key, d;

	for (d = n / 2; d >= 1; d /= 2) {
		for (i = d; i < n; i++) {
			key = a[i];
			for (j = i - d; j >= 0; j -= d) {
				if (key < a[j]) a[j + d] = a[j];
				else break;
			}
			a[j + d] = key;
		}
	}
}

int main() {

	int a[13] = { 7,8,27,1,7,17,30,11,13,5,9,59,3 };
	int n = sizeof(a) / sizeof(int);
	int i;

	ShellSort(a, n);

	printf("쉘 정렬 결과 : ");
	for (i = 0; i < n; i++) {
		printf("%5d", a[i]);
	}
	printf("\n");

	return 0;
}