#include<stdio.h>
int main() {
	
	char name[20] = "정지원";
	for (int i = 0; i < 5; i++) {
		printf("%s\n", name);
	}
	printf("\n");

	for (char ch = 'a'; ch <= 'z'; ch++) {
		printf("%c", ch);
		printf("%s", ch == 'z' ? "\n" : ", ");
	}
	printf("\n");

	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < 100; i++) {
		int num = i + 1;
		if (num % 2 == 0) {
			sum1 += num;
		}
		else {
			sum2 += num;
		}
	}		// 결과는 반복이 끝난 후 한번만 출력한다
	printf("홀수의 합 : %d, 짝수의 합 : %d\n\n", sum2, sum1);

	int sum = 0;
	int num;
	printf("정수 입력 : ");;
	scanf_s("%d", &num);
	for (int i = 1; i < num; i++) {
		sum += i;
	}
	printf("1부터 %d까지의 합계 : %d\n", num, sum);
	return 0;
}