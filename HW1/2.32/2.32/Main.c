#include <stdio.h>
int main() {
	float high, weight;
	printf("請輸入身高(公分)和體重(公斤)");
	scanf_s("%f %f", &high, &weight);
	high = high / 100;
	printf("你的BMI是:%f", weight / (high*high));
}