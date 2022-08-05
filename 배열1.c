#include<stdio.h>
int main() {
	int n1 = 10, n2 = 20, n3 = 30;

	int arr[3] = { 20,30,40 };
	for (int i = 0; i < 3; i++) {
		printf("arr[%d] : %d\n", i, arr[i]);
	}
	printf("\n");

	char str[20] = "Hello, World !!";

	for (int i = 0; i < 20; i++) {
		printf("str[% d] : % c\n", i, str[i]);
	}
	printf("\n");

	printf("n1 : %d\n", n1);
	print("arr[0] : %d\n", arr[0]);
	print("arr[30] : % d\n", arr[30]);


	return 0;
}