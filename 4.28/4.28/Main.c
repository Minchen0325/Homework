#include <stdio.h>
int main() {
	int paycode;//���u�N�X
	float amount;//�ƶq
	float hour;//�u�@�ɼ�
	float rate;//���~
	float weeklypay;//�@�P�u��
	float unimoney;//��@���~���
	float gain;
	while (1) {
		printf("�п�J���u�N�X(1 �g�z, 2 �p�ɤu, 3 �Ī��u, 4 �p��u, 0 ���}): ");
		scanf_s("%d", &paycode);
		if (paycode == 0) {
			break;
		}
		switch (paycode) {
			case 1:
				printf("�g�z�@�P�u��");
				scanf_s("%f", &weeklypay);
				break;
			case 2:
				printf("�u�@�ɼ� (-1 to end) :");
				scanf_s("%f", &hour);
				printf("���~ :");
				scanf_s("%f", &rate);
				if (hour > 40) {
					weeklypay = (hour - 40)*1.5*rate + 400;
				}
				else {
					weeklypay = hour * rate;
				}
				break;
			case 3:
				printf("�п�J�o�P�P��ƶq:");
				scanf_s("%f", &amount);
				printf("�п�J���~����:");
				scanf_s("%f", &unimoney);
				weeklypay = 250 + amount * unimoney*0.057;
				break;
			case 4:
				printf("�C��ӫ~�i��o�����S :");
				scanf_s("%f", &gain);
				printf("�п�J�o�P�һs�@���ƶq:");
				scanf_s("%f", &amount);
				weeklypay = amount * gain;
				break;
			default:
				printf("fault paycode");
				continue;
		}
		printf("weekly pay %.2lf\n\n",weeklypay);
	}
	system("pause");
	return 0;
}