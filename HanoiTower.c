//p.24[하노이타워_03.21]
#include <stdio.h>
int cnt = 0;

void HanoiTower(int n, char a, char b, char c) {// 출발지 a, 경유지 b, 목적지 c
	cnt++;
	if (n == 1) printf("%d번 원판, %c -> %c\n", n, a, c);
	else {
		HanoiTower(n - 1, a, c, b);
		printf("%d번 원판, %c -> %c\n", n, a, c);
		HanoiTower(n - 1, b, a, c);
	}
}

int main() {

	int n = 20;

	HanoiTower(n, 'A', 'B', 'C');

	printf("%d회 이동\n", cnt);

	return 0;
}