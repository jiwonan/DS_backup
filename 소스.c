//UP&DOWN���� ����� (��ȸ�� �� 8ȸ)
#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)
int main(void)
{
	printf("���ڸ� �����!\n");
	printf("��ȸ�� �� 8��!\n");
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
			puts("�������Դϴ١�");
		}
		}
	return 0;
}