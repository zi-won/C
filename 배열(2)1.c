#include<stdio.h>
int main() {
	int arr1[5] = { 1, 5, 3, 2, 4 };

	for (int i = 0; i < 5; i++) {
		print("%d ", arr1[i]);
	}
	print("\n\n");

	// 내림차순
	for (int i = 0; i < 4; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (arr1[i] < arr1[j]) {
				int tmp = arr1[i];
				arr1[i] = arr1[j];
				arr1[j] = tmp;
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		print("%d ", arr1[i]);
	}
	print("\n\n");
	return 0;
}