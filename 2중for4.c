#include<stdio.h>
int main() {
	for (int dan = 2; dan < 10; dan += 2) {
		printf("=== %d´Ü ===\n\n", dan);
		for (int mul = 1; mul < 10; mul++) {
			printf(" % d x % d = % d\n", dan, mul, dan * mul);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}