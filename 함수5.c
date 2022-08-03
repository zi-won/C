#include<stdio.h>
int rangeTotal(int n1, int n2) {
	int total = 0;

	for (int i = n1; i <= n2; i++) {
		total += i;
	}
	return total;
}
int main() {
	int sum = rangeTotal(-10, 20);
	printf("sum : %d\n", sum);

	return 0;
}