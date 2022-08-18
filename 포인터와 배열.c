#include<stdio.h>
int main() {

	// Æ÷ÀÎÅÍ¿Í ¹è¿­

	int num = 1;
	num = 2;

	int arr[5] = { 10,20,35,42,57 };

	int* p = arr;
	printf("arr : %lld\n", arr);
	printf("  p : %lld\n", p);

	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	} printf("\n");

	for (int i = 0; i < 5; i++) {
		printf("%d ", *(p + i));
	}printf("\n");

	for (int i = 0; i < 5; i++) {
		printf("%lld ", &arr[i]);
	}printf("\n");

	for (int i = 0; i < 5; i++) {
		printf("%lld ", (p + i));
	}printf("\n");

	char* name1 = "Â¯±¸";
	char name2[20] = "À¯¸®";
	printf("name1 : %s\n", name1);
	pritnf("name : %s\n", name2);

	name1 = "ÈòµÕÀÌ";

	scanf_s("%s", name2, 20);

	printf("name1 : %s\n", name1);
	printf("name2 : %s\n", name2);
	return 0;
}