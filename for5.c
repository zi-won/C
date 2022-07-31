#include<stdio.h>
int main() {
	//ex05.c

	//2 x 3 = 6
	printf("%d x %d = %d\n\n", 2, 3, 2 * 3);

	// 구구단 7단
	for (int i = 1; i < 10; i++) {
		printf("%d x %d = %d\n", 7, i, 7 * i);
	}
	printf("\n");

	return 0;
}