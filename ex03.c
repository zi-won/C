#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int n;
	srand(time(NULL));

	printf("몇 개의 정수가 필요합니까 : ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		int ran = rand();
		ran = ran % 45; // 0 ~ 45
		ran += 1;
		printf("%d ", ran);
		// 반복문의 종속문장에서 반드시 횟수변수 i를 참조해야 하는 건 아니다
		// printf("ran : %d\n", ran);	// 제어문 지역변수라서 밖에서 참조 불가
	}
	 
	return 0;
}