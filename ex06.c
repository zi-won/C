#include<stdio.h>
int main() {

	printf("%d x %d = %d\n", 2, 3, 2 * 3);

	for (int i = 1; i < 10; i++) {
		printf("%d x %d = %d\n", 7, i, 7 * i);
	}
	printf("\n");
	// 만약 2단부터 9단까지 전체 구구단을 출력하려면
	// 반복문 내부에 다른 반복문을 넣어서 구현할 수 있다

	return 0;
}