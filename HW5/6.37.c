#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int maximum(int array[], int size);

int main(void) {
    int array[] = {1, 2, 5, 74, 6, 16, 24, 98, 34, 21};
    int max;

    max = maximum(array, SIZE);

    printf("�̤j�Ȭ��G%d\n", max);

    getchar(); // ���ݨϥΪ̿�J���N�r��
    return 0;
}

int maximum(int array[], int size) {
    int i;
    int temp = 0;

    for (i = 0; i < size; i++) {
        if (array[i] > temp) {
            temp = array[i];
        }
    }
    return temp;
}

