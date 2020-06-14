//UP&DOWN게임 만들기 (기회는 총 8회)
#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)
int main(void)
{
	printf("숫자를 맞춰라!\n");
	printf("기회는 단 8번!\n");
	int count = 0;
	srand((unsigned)time(NULL));
	int num = (rand() % 100) + 1;
	int input;
	while (count < 8){
		count++;
		printf("%d\n", num);
		scanf("%d", &input);

		if (num > input) {
			puts("UP");
		}
		else if (num < input) {
			puts("DOWN");
		}
		else if (num == input) {
			puts("★정답입니다★");
		}
		}
	return 0;
}