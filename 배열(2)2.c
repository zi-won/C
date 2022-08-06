#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {

	int length = 10;

	int arr[10] = { 0 };

	srand(time(NULL));
	for (int i = 0; i < length; i++) {
		arr[i] = rand() % length + 1;
	}
	for (int i = 0; i < length; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n\n");

	for (int i = 0; i < length - 1; i++) {
		for (int j = i + 1; j < length; j++) {
			if (arr[i] > arr[j]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	for (int i = 0; i < length; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n\n");
	return 0;
}