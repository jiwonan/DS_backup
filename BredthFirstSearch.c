#include <stdio.h>
#define SIZE 8

typedef enum { false, true } bool;

int queue[SIZE];
int rear = -1, front = 0;

void add(int n) {
	if (rear >= SIZE) {
		printf("Queue is Full!\n");
		return;
	}
	queue[++rear] = n;
}

int del() {
	if (front > rear)return -1;
	return queue[front++];
}

void DepthFirstSearch(bool G[][SIZE], char V[]) {
	bool chk[SIZE] = { false };
	int i, j;
	char startV;
	printf("출발 지점 : ");
	scanf_s("%c", &startV);
	for (i = 0; i < SIZE; i++) if (startV == V[i])break;
	printf("너비 우선 탐색 %c", startV);
	chk[i] = true;
	do {
		for (j = 0; j < SIZE; j++) {
			if (G[i][j] == 1 && chk[j] == 0) {
				printf(" -> %c", V[j]);
				add(j);
				chk[j] = 1;
			}
		}
		i = del();
	} while (i >= 0);
	printf("\n\n");
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
	DepthFirstSearch(G, V);


	return 0;

}