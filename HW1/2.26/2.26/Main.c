#include <stdio.h>
int main() {
	int x, y;
	printf("請輸入兩個數字:");
	scanf_s("%d %d", &x, &y);
	printf((x%y == 0) ? "x是y的倍數" : "x不是y的倍數");
}