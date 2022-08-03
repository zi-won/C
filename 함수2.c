#include<stdio.h>
int add(int n1, int n2) {
	int answer = n1 + n2;
	return answer;
}
int main() {
	
	int num1 = add(10, 20);

	printf("num1 : %d\n", num1);
	return 0;
}