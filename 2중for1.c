#include<stdio.h>
int main() {
	// ex01.c - ¿Ã¡ﬂ forπÆ

	for (int i = 10; i < 100; i += 10) {
		printf("i : %d\n", i);
		for (int j = i + 3; j < i + 10; j += 3) {
			printf("\tj : %d\n", j);
		}
	}
	printf("\n");

	for (int i = 10; i < 100; i++) {
		if (i % 10 != 0 && (i % 10) % 3 == 0) {
			printf("i : %d\n", i);
		}
	}
	printf("\n");
	return 0;
}