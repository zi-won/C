#include<stdio.h>
int main() {
	int num = 5;
	for (int i = 0; i < 25; i++) {
		printf("%2d ", ++num);

		if ((i + 1) % 5 == 0) {
			printf("\n");
		}
	}
	printf("\n\n");

	num = 5;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%2d ", ++num);
		}
		printf("\n");
	}
	return 0;
}