#include <stdio.h>
int main() {
	int length;
	int breadth;
	int i, j;
	printf("Enter length :");
	scanf_s("%d", &length);
	printf("Enter breadth :");
	scanf_s("%d", &breadth);
	for (i = 1; i <= length; i++) {
		for (j = 1; j <= breadth; j++) {
			if (j == 1 || j == breadth||i==1||i==length) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}