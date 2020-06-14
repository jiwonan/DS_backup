#include <stdio.h>

void BubbleSort(int a[], int n) {
	int check = 1, i = 1;
	while (check == 1) {
		check = 0;
		for (int j = 0; j < n - i; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				check = 1;
			}
		}
		i++;
	}
}

int main() {

	int a[] = { 6,13,24,7,16,21,12,3 };
	int n = sizeof(a) / sizeof(int);

	BubbleSort(a, n);
	printf("버블 정렬\n");
	for (int i = 0; i < n; i++) {
		printf("%5d", a[i]);
	}

	return 0;
}