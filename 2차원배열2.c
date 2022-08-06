#include<stdio.h>
int main() {

	int arr[5][5] = {
		{1,2,1,1,1},
		{1,0,1,0,0},
		{1,0,1,0,1},
		{1,0,0,0,1},
		{1,2,1,1,1},
	};

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[i][j] == 2)
				printf("%s", "*");
			else
				printf("%s", arr[i][j] == 1 ? "бс" : "  ");
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}