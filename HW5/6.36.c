#include <stdio.h>

void stringReverse(char *str) {
    if (*str == '\0') {
        return; // �J��פ�Ŧr���A����j
    } else {
        stringReverse(str + 1); // ���j�I�s�U�@�Ӧr��
        putchar(*str); // �C�L��e�r��
    }
}

int main() {
    char myString[] = "Hello, world!";
    stringReverse(myString); // �I�s�V��C�L�r�ꪺ�禡
    printf("\n");
    return 0;
}

