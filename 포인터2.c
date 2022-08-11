#include<stdio.h>
void swap(int* p1, int* p2) {
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
	printf("swap) n1 : %d, n2 : %d\n", *p1, *p2);
}
int main() {
	int n1 = 10, n2 = 20;

	printf("main) n1 : %d, n2 : %d\n", n1, n2);

	swap(&n1, &n2);
	printf("main) n1 : %d, n2 : %d\n", n1, n2);
}