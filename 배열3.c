#include<stdio.h>
int main() {

	int arr[5] = { 2,7,8,4,6 };
	
	for (int i = 0; i < 5; i++) {
		printf("%d", arr[i]);
		printf("%s", i == 4 ? "\n\n" : ", ");
	}
	int n1 = 10, n2 = 20;
	printf("n1 : %d, n2 : %d\n", n1, n2);

	printf("n1 : %d, n2 : %d\n", n1, n2);
	int tmp;

	tmp = n2;
	n2 = n1;
	n1 = tmp;

	printf("n1 : %d, n2 : %d\n", n1, n2);

	return 0;
}