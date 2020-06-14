#include <stdio.h>
#define R 3
int b[R] = { 0, };
int cnt = 0;

void Com() {
	int i;
	cnt++;
	for (i = 0; i < R; i++)
		printf("%d ", b[i]);
	printf("\n");
}

void Combination(int a[], int n, int r, int ii) {
	int i;
	if (r == R)Com();
	else for (i = ii + 1; i < n; i++) {
		b[r] = a[i];
		Combination(a, n, r + 1, i);
	}
}

int main() {

	int a[] = { 1,2,3,4,5 };
	int n = sizeof(a) / sizeof(int);

	Combination(a, n, 0, -1);
	printf("조합 개수는 %d개\n", cnt);

	return 0;
}