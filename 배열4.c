#include<stdio.h>
int main() {
	double arr[5] = { 1.2, 5.3, 2.2, 7.6, 4.1 };

	for (int i = 0; i < 5; i++) {
		printf("%.1f%s", arr[i], i == 4 ? "\n\n" : ", ");

		for (int i = 0; i < 5; i++) {
			for (int j = i; j < 5; j++) {
				if (arr[i] > arr[j]) {
					double tmp = arr[i];
					arr[i] = arr[j];
					arr[j] = tmp;
				}
			}
		}

		for (int i = 0; i < 5; i++) {
			printf("%.1f%s", arr[i], i == 4 ? "\n\n" : ", ");
		}
	}
	return 0;
}