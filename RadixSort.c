#include <stdio.h>
#include <stdlib.h>

void RadixSort(int a[], int n) {
	int *bucket = (int *)malloc(sizeof(int)*n);
	int digit_cnt[10] = { 0 }, digit_Base = 1, i, max = a[0];

	for (i = 1; i < n; i++) if (max < a[i])  max = a[i];

	while (digit_Base <= max) {
		for (i = 0; i < n; i++) digit_cnt[a[i] / digit_Base % 10]++;
		for (i = 1; i < 10; i++) digit_cnt[i] += digit_cnt[i - 1];
		for (i = n - 1; i >= 0; i--)
			bucket[--digit_cnt[a[i] / digit_Base % 10]] = a[i];
		for (i = 0; i < n; i++) a[i] = bucket[i];
		for (i = 0; i < 10; i++) digit_cnt[i] = 0;
		digit_Base *= 10;
	}
	free(bucket);
}

int main() {

	int a[] = { 10,258,125,3684,50,15,654,8547,300,525,67,920 };
	int n = sizeof(a) / sizeof(int);
	RadixSort(a, n);

	for (int i = 0; i < n; i++) {
		printf("%5d", a[i]);
	}

	return 0;

}