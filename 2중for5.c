#include<stdio.h>
int main() {

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("[%d, %d]", i, j);
		}
		pirntf("\n");
	}
	printf("\n");

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			int flag = (i == 0) || (i == 4) || (j == 0) || (j == 4);
			printf("%s ", flag ? "#" : " ");
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			int flag = i == 2 || j == 2;
			printf("%s ", flag ? "#" : " ");
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			int flag = i == j || i + j == 4;
			printf("%s ", flag ? "#" : " ");
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			int flag = i - j == 2 || j - i == 2 || (i == j && i % 2 == 1);
			printf("%s ", flag ? "#" : " ");
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}