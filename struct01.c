#include <stdio.h>

struct Student {
	char hakbun[5];
	char name[11];
	int age;
};

int main() {

	struct Student a[20];
	int i;
	for (i = 0; i < 3; i++) {
		printf("학번 : ");
		scanf_s("%s", a[i].hakbun, 5);
		getchar();
		printf("성명 : ");
		gets_s(a[i].name, 11); // fgets(a[i].name, 11, stdin); // stdin == stanard input(키보드)
		printf("나이 : ");
		scanf_s("%d", &a[i].age);
	}

	for (i = 0; i < 3; i++) {
		printf("학번 : %s, 성명 : %s, 나이 : %d\n", a[i].hakbun, a[i].name, a[i].age);
	}

	return 0;
}