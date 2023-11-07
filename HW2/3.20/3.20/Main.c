#include <stdio.h>
int main() {
	int hour;
	float rate;
	do {
		putchar('\n');
		printf("Enter # of hours worked (-1 to end) :");
		scanf_s("%d", &hour);
		if (hour == -1) {
			break;
		}
		printf("Enter hourly rate of the worker ($00.00) :");
		scanf_s("%f", &rate);
		if (hour > 40) {
			printf("salary is $%.2f\n", (hour - 40)*1.5*rate + 400);
		}
		else {
			printf("salary is $%.2f\n", hour*rate);
		}	
	} while (hour != -1);
	system("pause");
	return 0;
}