#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 36000
#define SIDES 6

int main() {
    int dice1, dice2, sum;
    int totals[13] = {0}; // 陣列索引0不用，總和範圍是2到12，共11種可能
	int i;
	int j;
	
    srand(time(NULL));

    for (i = 0; i < ROLLS; i++) {
        dice1 = (rand() % SIDES) + 1; // 擲第一顆骰子
        dice2 = (rand() % SIDES) + 1; // 擲第二顆骰子
        sum = dice1 + dice2; // 計算點數總和
        totals[sum]++; // 將該總和的次數加一
    }

    printf("總和\t出現次數\n");
    for (j = 2; j <= 12; j++) {
        printf("%d\t%d\n", j, totals[j]);
    }

    // 檢查結果是否合理
    double expected_avg = (double)ROLLS / 6; // 期望的平均次數
    double actual_avg_7 = (double)totals[7]; // 實際出現7點的次數

    printf("\n7點出現的次數應該接近 %lf\n", expected_avg);
    printf("實際出現7點的次數為 %lf\n", actual_avg_7);

    return 0;
}

