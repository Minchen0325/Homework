#include <stdio.h>
int main() {
	int x, y;
	printf("�п�J��ӼƦr:");
	scanf_s("%d %d", &x, &y);
	printf((x%y == 0) ? "x�Oy������" : "x���Oy������");
}