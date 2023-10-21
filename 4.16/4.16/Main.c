#include <stdio.h>
int main() {
	int i, j,temp;
	
	char sign = ' ';
	printf("(A)");
	for (i = 0; i < 10; i++) {
		for (j = 0; j < i; j++) {
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("(B)\n");
	for (i = 10; i > 1; i--) {
		for (j =1; j < i; j++) {
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("(C)\n");
	for (i = 10; i > 0; i--) {
		for (temp = 10; temp > i; temp--)
			printf("%c", sign);
		for (j = 0; j < i; j++)
			printf("%s", "*");
		printf("\n");
	}
	printf("(D)\n");
	for (i = 10; i > 0; i--) {
		for (temp = 1; temp < i; temp++)
			printf("%c", sign);
		for (j = 10; j >= i; j--) {
			printf("%s", "*");
		}

		printf("\n");
	}
	
}