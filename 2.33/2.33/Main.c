#include <stdio.h>
int main() {
	float total_mileage, fuel_price, fuel_efficiency, parking_cost, toll_cost;


	printf("�п�J�@��Ѫ��`���{�ơ]�����^: ");
	scanf_s("%f", &total_mileage);

	printf("�п�J�T�o�@����/�[�ڪ�����]�x���^: ");
	scanf_s("%f", &fuel_price);

	printf("�п�J�����@����/�[�گ��p�h�֤���: ");
	scanf_s("%f", &fuel_efficiency);

	printf("�п�J�@�Ѫ������O�Ρ]�x���^: ");
	scanf_s("%f", &parking_cost);

	printf("�п�J�@�Ѫ��q��O�Ρ]�L���O�A�x���^: ");
	scanf_s("%f", &toll_cost);


	float fuel_cost = (total_mileage / fuel_efficiency) * fuel_price;


	float total_cost = fuel_cost + parking_cost + toll_cost;
	printf("�@�Ѷ}���W�Z���`��O���G%.2f �x��\n", total_cost);
}