#include <stdio.h>
#define SIZE 100000000

int main() {

	int *a = (int *)malloc(sizeof(int)*SIZE);
	a[99999999] = 9;
	a[0] = 10;
	printf("%d\n", a[0]);
	printf("%d ", a[99999999]);
	return 0;
}