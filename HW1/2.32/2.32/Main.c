#include <stdio.h>
int main() {
	float high, weight;
	printf("�п�J����(����)�M�魫(����)");
	scanf_s("%f %f", &high, &weight);
	high = high / 100;
	printf("�A��BMI�O:%f", weight / (high*high));
}