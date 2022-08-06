#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	
	char arr[11] = { 0 };
	int length = 10;

	srand(time(NULL));
	for (int i = 0; i < length; i++) {
		arr[i] = rand() % 26 + 65;
	}

	for (int i = 0; i < length; i++) {
		printf("%2c ", arr[i]);
	}
	printf("\n");

	for (int i = 0; i < length; i++) {
		printf("%2d ", arr[i]);
	}
	printf("\n");
	printf("arr : %s\n", arr);

	for (int i = 0; i < length - 1; i++) {
		for (int j = i + 1; j < length; j++) {
			if (arr[i] > arr[j]) {
				char tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	printf("arr : %s\n", arr);
	return 0;
}