#include <stdio.h>

int fiboSearch(int a[], int key, int n) {
	int fibo[] = { 0,1,1,2,3,5,8,13,21,34,55,89,144,233 };
	int pos, index = 0, k = 0;
	while (fibo[k] < n)k++;
	while (k > 0) {
		pos = index + fibo[--k];
		if (pos >= n || key < a[pos]);
		else if (key > a[pos]) {
			index = pos;
			k--;
		}
		else return pos;
	}
	return -1;
}

int main() {

	int a[] = { 5,12,17,20,25,33,38,41,59,65,68,70,75,87,92,95,99 };
	int n = sizeof(a) / sizeof(int);
	int index, key;
	for (int i = 0; i < n; i++) {
		printf("%5d", a[i]);
	}
	printf("\n");
	printf("찾고자 하는 값 입력 : ");
	scanf_s("%d", &key);
	index = fiboSearch(a, n, key);
	if (index >= 0)
		printf("found %d at %d", key, index);
	else
		printf("not found\n");

	return 0;

}