#include <stdio.h>
int main() {
	int i;
	printf("請輸入一個數字");
	scanf_s("%d", &i);
	if (i % 2 == 0) {
		printf("這是一個偶數");
	}
	else {
		printf("這是一個奇數");
	}
}