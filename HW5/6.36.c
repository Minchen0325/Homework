#include <stdio.h>

void stringReverse(char *str) {
    if (*str == '\0') {
        return; // 遇到終止空字元，停止遞迴
    } else {
        stringReverse(str + 1); // 遞迴呼叫下一個字元
        putchar(*str); // 列印當前字元
    }
}

int main() {
    char myString[] = "Hello, world!";
    stringReverse(myString); // 呼叫向後列印字串的函式
    printf("\n");
    return 0;
}

