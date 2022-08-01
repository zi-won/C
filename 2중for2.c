#include<stdio.h>
int main() {
	int num = 0;
	for (int i = 0; i < 25; i++) {
		printf("num : %d\n", ++num);
	}
	printf("\n");

	num = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("num : %d\n", ++num);
		}
	}
	printf("\n");
	return 0;
}