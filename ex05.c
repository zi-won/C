#include<stdio.h>
int main() {

	int length = 20;
	char str[20] = "Hello, World !!";

	for (int i = 0; i < length; i++) {
		char ch = str[i];
		printf("str[%d] :%c\n", i, ch);
		if (ch == '\0') {
			break;
		}
	}
	printf("\n");
	printf("%s\n\n", str);

	char str2[200] = { 'h', 'e', 'l', 'l', 'o', 'w', 'o', 'r','l','d', '\0' };
	printf("str2 : %s\n", str2);
	str2[11] = '\n';
	printf("str2 : %s\n", str2);

	printf("\n=== Á¾·á ===\n");
	return 0;
}