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
		printf("�й� : ");
		scanf_s("%s", a[i].hakbun, 5);
		getchar();
		printf("���� : ");
		gets_s(a[i].name, 11); // fgets(a[i].name, 11, stdin); // stdin == stanard input(Ű����)
		printf("���� : ");
		scanf_s("%d", &a[i].age);
	}

	for (i = 0; i < 3; i++) {
		printf("�й� : %s, ���� : %s, ���� : %d\n", a[i].hakbun, a[i].name, a[i].age);
	}

	return 0;
}