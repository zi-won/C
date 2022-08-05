#include<stdio.h>
int main() {

	int arr1[5];
	printf("arr1 : %d\n", arr1);

	int arr2[5] = { 10,20,30,40,50 };
	printf("arr2 : %d\n", arr2);

	printf("arr2[0] : %d\n", arr2[0]);
	printf("arr2[1] : %d\n", arr2[1]);
	arr2[2] += 5;
	printf("arr2[2] : %d\n", arr2[2]);
	int num = arr2[3];
	printf("num : %d\n", num);

	int arr3[5] = { 23, 45 };
	for (int i = 0; i < 5; i++) {
		printf("arr3[%d] : %d\n", i, arr3[i]);
	}
		return 0;
}