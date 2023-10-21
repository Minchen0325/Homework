#include <stdio.h>
int main() {
	int i,j,temp=9,temp2=1;
	char sign = '*';
	char sign2 = ' ';
	for (i = 0; i < 9; i++) {
		if (temp >=5) {
			for (j = 5; j < temp; j++) {
				printf("%c", sign2);

			}
			for (j = 0; j < temp2; j++) {
				printf("%c", sign);
			}
			temp--;
			temp2 += 2;
		}
		else {
			for (j = temp2 - 3; j < 9; j+=2) {
				printf("%c", sign2);
			}
			for (j = 0; j < temp2 - 4; j++) {
				printf("%c", sign);
			}
			temp2 -= 2;
		}
		
		printf("\n");
		
	}
	system("pause");
	return 0;
}