#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	// ex03.c

	int n;
	srand(time(NULL));

	printf("몇개의 정수가 필요합니까 : ");
	scanf_s("%d", &n);
	
	for (int i = 0; i < n; i++) {
		int ran = rand();
		ran = ran % 45; // 0 ~ 44
		ran += 1;
		printf("%d ", ran);
		
	}
	// printf("ran : %d\n", ran); // 제어문 지역변수라서 밖에서 참조불가
	return 0;
}