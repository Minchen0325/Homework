#include <stdio.h>
int main() {
	int number[3], box;
	printf("請輸入三個數字：");
	scanf_s("%d %d %d", &number[0], &number[1], &number[2]);
	for (int i = 0; i < 2; i++)
		for (int i = 0; i < 2; i++)
			if (number[i] > number[i + 1]) {
				box = number[i];
				number[i] = number[i + 1];
				number[i + 1] = box;
			}
	printf("large:%d\n", number[2]);
	printf("large:%d\n", number[0]);
}