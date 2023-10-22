#include <stdio.h>
#include <math.h>
int main() {
	float rate=0.1;
	int year;
	for (int i = 0; i < 5; i++) {
		rate = 0.1 + i * 0.005;
		printf("principal is 5000\n");
		printf("rate is 10%\n");
		printf("invest 15 year\n");
		printf("amount is %.2f\n",5000*pow((1+rate),15));
		putchar('\n');
	}
	system("pause");
	return 0;
}