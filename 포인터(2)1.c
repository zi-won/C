#include<stdio.h>
void test2(int num, int* pnum) {
	printf("test2) num : %d\n", num);
	num += 5;
	printf("test2) num : %d\n", num);
	printf("test2) *pnum : %d\n", *pnum);
	*pnum += 5;
	printf("test2) *pnum : %d\n", *pnum);
}
void test1() {
	int num = 10;
	test2(num, &num);
	printf("test1) num : %d\n", num);

}
int main() {
	test1();
	return 0;
}