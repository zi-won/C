#include<stdio.h>
int main() {
	//ex01.c - for
	int cnt = 0;//한번만 실행
	while (cnt < 3) {
		printf("while : %d\n", cnt);
		cnt++;
	}

	//      (1)   ;  (2) ;  (4)
	for (int i = 0; i < 3; i++) {
		printf("for : %d\n", i); // (3)
	}


	return 0;
}