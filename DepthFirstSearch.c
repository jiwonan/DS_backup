#include <stdio.h>
#define SIZE 8

typedef enum { false, true } bool;

int stack[SIZE];
int top = -1;

void push(int n) {
	if (top >= SIZE - 1) {
		printf("Overflow!\n");
		return;
	}
	stack[++top] = n;
}

int pop() {
	if (top == -1) {
		// printf("Underflow!\n");
		return -1;
	}
	return stack[top--];
}

void BreadFirstSearch(bool G[][SIZE], char V[]) {
	bool chk[SIZE] = { false };
	int i, j;
	char startV;
	printf("√‚πﬂ ¡ˆ¡° : ");
	scanf_s("%c", &startV);
	for (i = 0; i < SIZE; i++) if (startV == V[i])break;
	printf("±Ì¿Ã øÏº± ≈Ωªˆ %c", startV);
	chk[i] = true;
	do {
		for (j = 0; j < SIZE; j++) {
			if (G[i][j] == 1 && chk[j] == 0) {
				printf(" -> %c", V[j]);
				push(i);
				chk[j] = 1;
				i = j;
				break;
			}
		}
		if (j >= SIZE)i = pop();
	} while (i >= 0);
}

int main() {

	bool G[SIZE][SIZE] = { {0,1,0,1,0,0,0,0},
	{1,0,0,0,1,0,1,0},
	{0,0,0,0,1,1,0,0},
	{1,0,0,0,0,1,0,0},
	{0,1,1,0,0,0,1,0},
	{0,0,1,1,0,0,0,1},
	{0,1,0,0,1,0,0,1},
	{0,0,0,0,0,1,1,0} };
	char V[] = { 'A','B','C','D','E','F','G','H' };
	int i, j;
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			printf("%5d", G[i][j]);
		}
		printf("\n");
	}
	BreadthFirstSearch(G, V);


	return 0;

}