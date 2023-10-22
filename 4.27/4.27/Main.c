#include <stdio.h>
int main() {
	int i, j, k;
	for (i = 1; i <= 500; i++) {
		for (j = i; j <= 500; j++) {
			for (k = j; k <= 500; k++) {
				if (i*i + j * j == k * k) {
					printf("Pythagorean Triple: %3d,%3d,%3d\n", i, j, k);
				}
			}
		}
	}
	system("pause");
	return 0;
}