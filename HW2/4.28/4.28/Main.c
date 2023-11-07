#include <stdio.h>
int main() {
	int paycode;//員工代碼
	float amount;//數量
	float hour;//工作時數
	float rate;//時薪
	float weeklypay;//一周工資
	float unimoney;//單一物品賈格
	float gain;
	while (1) {
		printf("請輸入員工代碼(1 經理, 2 小時工, 3 傭金工, 4 計件工, 0 離開): ");
		scanf_s("%d", &paycode);
		if (paycode == 0) {
			break;
		}
		switch (paycode) {
			case 1:
				printf("經理一周工資");
				scanf_s("%f", &weeklypay);
				break;
			case 2:
				printf("工作時數 (-1 to end) :");
				scanf_s("%f", &hour);
				printf("時薪 :");
				scanf_s("%f", &rate);
				if (hour > 40) {
					weeklypay = (hour - 40)*1.5*rate + 400;
				}
				else {
					weeklypay = hour * rate;
				}
				break;
			case 3:
				printf("請輸入這周銷售數量:");
				scanf_s("%f", &amount);
				printf("請輸入物品價格:");
				scanf_s("%f", &unimoney);
				weeklypay = 250 + amount * unimoney*0.057;
				break;
			case 4:
				printf("每件商品可獲得的報酬 :");
				scanf_s("%f", &gain);
				printf("請輸入這周所製作的數量:");
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