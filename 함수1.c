#include<stdio.h>
int test(int x) {
	int y = 2 * x + 3;
	return y;
}
char* checkAge(int age) {
	return age >= 20 ? "己牢" : "固己斥磊";
}
char* 刮己(int usb) {
	return "USB";
}
int main() {
	char* adult1 = checkAge(15);
	char* adult2 = checkAge(25);

	printf("%s\n", adult1);
	printf("%s\n", adult2);

	char* result = 刮己(1);
	printf("%s\n", result);


	int a = test(1);
	int b = test(2);
	int c = test(3);
	printf("test(1) : %d\n", a);
	printf("test(2) : %d\n", b);
	printf("test(3) : %d\n", c);
	return 0;
}