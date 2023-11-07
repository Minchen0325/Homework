#include <stdio.h>
int main() {
	float sales;
	do {
		putchar('\n');
		printf("Enter sales in dollars (-1 to end) :");
		scanf_s("%f", &sales);
		if (sales == -1) {
			break;
		}
		printf("salary is : %.2f\n", sales*0.09 + 200);
	} while (sales != -1);
	system("pause");
	return 0;
}