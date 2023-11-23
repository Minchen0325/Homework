#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 36000
#define SIDES 6

int main() {
    int dice1, dice2, sum;
    int totals[13] = {0}; // �}�C����0���ΡA�`�M�d��O2��12�A�@11�إi��
	int i;
	int j;
	
    srand(time(NULL));

    for (i = 0; i < ROLLS; i++) {
        dice1 = (rand() % SIDES) + 1; // �Y�Ĥ@����l
        dice2 = (rand() % SIDES) + 1; // �Y�ĤG����l
        sum = dice1 + dice2; // �p���I���`�M
        totals[sum]++; // �N���`�M�����ƥ[�@
    }

    printf("�`�M\t�X�{����\n");
    for (j = 2; j <= 12; j++) {
        printf("%d\t%d\n", j, totals[j]);
    }

    // �ˬd���G�O�_�X�z
    double expected_avg = (double)ROLLS / 6; // ���檺��������
    double actual_avg_7 = (double)totals[7]; // ��ڥX�{7�I������

    printf("\n7�I�X�{���������ӱ��� %lf\n", expected_avg);
    printf("��ڥX�{7�I�����Ƭ� %lf\n", actual_avg_7);

    return 0;
}

