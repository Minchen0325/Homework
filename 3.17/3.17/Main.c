#include <stdio.h>
int main() {
	int account;
	float balance;
	float charge;
	float credit;
	float total;
	float limit;
	do {
		putchar('\n');
		printf("Enter your account number (-1 to end):");
		scanf_s("%d", &account);
		if (account == -1) {
			break;
		}
		printf("Enter beginning balance:");
		scanf_s("%f", &balance);
		printf("Enter total charge:");
		scanf_s("%f", &charge);
		printf("Enter total credit:");
		scanf_s("%f", &credit);
		printf("Enter total limit:");
		scanf_s("%f", &limit);
		if ((charge - credit)+balance > limit) {
			printf("account :\t%d\n", account);
			printf("credit limit :\t%.2f\n", limit);
			printf("balance :\t%.2f\n", balance + (charge - credit));
			printf("credit limit exceeded.\n");
		}
	} while (account != -1);
	system("pause");
	return 0;
}