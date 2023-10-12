#include <stdio.h>
int main() {
	float total_mileage, fuel_price, fuel_efficiency, parking_cost, toll_cost;


	printf("請輸入一整天的總里程數（公里）: ");
	scanf_s("%f", &total_mileage);

	printf("請輸入汽油一公升/加侖的價格（台幣）: ");
	scanf_s("%f", &fuel_price);

	printf("請輸入平均一公升/加侖能行駛多少公里: ");
	scanf_s("%f", &fuel_efficiency);

	printf("請輸入一天的停車費用（台幣）: ");
	scanf_s("%f", &parking_cost);

	printf("請輸入一天的通行費用（過路費，台幣）: ");
	scanf_s("%f", &toll_cost);


	float fuel_cost = (total_mileage / fuel_efficiency) * fuel_price;


	float total_cost = fuel_cost + parking_cost + toll_cost;
	printf("一天開車上班的總花費為：%.2f 台幣\n", total_cost);
}