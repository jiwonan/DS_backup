#include <stdio.h>

void QuickSort(int a[], int left, int right) {
	int pivot = a[left], i = left, j = right, temp;
	if (left < right) {
		while (i < j) {
			while (pivot <= a[i] && i < right)i++;
			while (pivot >= a[j] && j > left)j--;
			if (i < j) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		a[left] = a[j];
		a[j] = pivot;
		QuickSort(a, left, j - 1);
		QuickSort(a, j + 1, right);
	}
}

int main() {

	int a[] = { 25,17,6,48,55,33,101,41,20,9,98,85 };
	int n = sizeof(a) / sizeof(int);

	QuickSort(a, 0, n - 1);

	printf("Äü Á¤·Ä : ");

	for (int i = 0; i < n; i++) {
		printf("%5d", a[i]);
	}

	return 0;

}