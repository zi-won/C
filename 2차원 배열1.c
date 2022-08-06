#include<stdio.h>
int main() {

	int arr[3][4] = {
		{50,30,70,10},
		{20,60,80,40},
		{15,32,24,76},

	};
	int arr2[3][4] = { 50,30,70,10,20,60,80,40,15,32,24,76 };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("arr[%d][%d] : %d\n", i, j , arr[i][j]);
		}
	}
	printf("\n\n");
	return 0;
}