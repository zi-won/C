#include<stdio.h>
int main() {

	int num = 1234;
	int* pnum = &num;

	printf("  num : %d\n", num);
	printf(" &num : %lld\n", &num);
	printf(" pnum : %lld\n", pnum);
	printf("*pnum : %d\n", *pnum);

	return 0;
}