#include <stdio.h>
#define SIZE 9

int cqueue[SIZE];
int rear = -1;
int front = 0;
int cnt = 0; // int로 되어있기 때문에 사용할 수 있는 범위를 벗어날 수 있음.

int add(int data) {
	if (cnt == SIZE) {
		printf("CQueue is full\n");
		return -1;
	}
	cnt++;
	cqueue[++rear%SIZE] = data;
	return 0;
}

int delete(void) {
	if (cnt == 0) {
		printf("CQueue is empty!\n");
	}
	cnt--;
	return	cqueue[front++%SIZE];
}

int main() {

	int max = 3000000000;

	add(5); add(10); add(15);
	add(20); add(25); add(30);
	add(35); add(40); add(45);
	add(50);
	printf("%d\n", delete());
	delete();
	delete();
	delete();
	delete();
	delete();
	delete();
	delete();
	delete();
	delete();
	add(55); add(60); add(65);
	printf("%d\n", delete());
	printf("%d\n", delete());
	printf("%d\n", delete());
	printf("%d\n", max);

	return 0;
}