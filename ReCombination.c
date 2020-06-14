#include <stdio.h>
#define R 3
int b[R] = { 0, };
int cnt = 0;

void ReCom() {
	int i;
	cnt++;
	for (i = 0; i < R; i++)
		printf("%d ", b[i]);
	printf("\n");
}

void ReCombination(int a[], int n, int r, int ii) {
	int i;
	if (r == R)ReCom();
	else for (i = ii; i < n; i++) {
		b[r] = a[i];
		ReCombination(a, n, r + 1, i);
	}
}

int main() {

	int a[] = { 1,2,3,4,5 };
	int n = sizeof(a) / sizeof(int);

	ReCombination(a, n, 0, 0);
	printf("중복조합 개수는 %d개\n", cnt);

	return 0;
}