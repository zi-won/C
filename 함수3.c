#include<stdio.h>
int getMaxNum(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}
int getMinNum(int a, int b, int c) {
	int min = a;
	if (min > b)
		min = b;
	if (min > c)
		min = c;
	return min;
}
int getAbsoluteValue(int num) {
	if (num < 0)
		num *= -1;
	return num;
}
int main() {

	int n1 = getMaxNum(15, 23);
	printf("n1 : %d\n", n1);

	int n2 = getMinNum(2, 4, 3);
	printf("n2 : %d\n", n2);

	int n3 = getAbsoluteValue(50);
	int n4 = getAbsoluteValue(-30);
	printf("n3 : %d, n4 : %d\n", n3, n4);
	
	return 0;
}