#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 函数声明
char* convertBase(char* num, int fromBase, int toBase);
void reverseString(char* str);

int main() {
    int m, p, n, q;
    char pNum[1024], nNum[1024], qNum[1024];

    // 读取m值
    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        // 读取每行的进制p，p进制数n，以及进制q
        char line[256];
    fgets(line, sizeof(line), stdin); // 读取整行输入
    sscanf(line, "%d,%[^,],%d", &p, nNum, &q);
        char* decimalNum = convertBase(nNum, p, 10);
        // 将10进制数转换为q进制数
        char* result = convertBase(decimalNum, 10, q);
        // 输出结果
        printf("%s\n", result);
        // 释放动态分配的内存
        free(decimalNum);
        free(result);
    }

    return 0;
}

// 将字符串表示的数字从一个进制转换为另一个进制
char* convertBase(char* num, int fromBase, int toBase) {
    // 将字符串转换为10进制数
    char* reversedNum = (char*)malloc(strlen(num) + 1);
    strcpy(reversedNum, num);
    reverseString(reversedNum);
    unsigned long long decimalValue = 0;
    for (int i = 0; reversedNum[i] != '\0'; i++) {
        decimalValue = decimalValue * fromBase + (reversedNum[i] - '0');
    }
    free(reversedNum);

    // 将10进制数转换为toBase进制数
    char* result = (char*)malloc(1024 * sizeof(char));
    result[0] = '\0';
    while (decimalValue > 0) {
        int remainder = decimalValue % toBase;
        decimalValue /= toBase;
        char digit = '0' + remainder;
        if (remainder > 9) {
            digit = 'A' + (remainder - 10);
        }
        char* temp = (char*)malloc(1024 * sizeof(char));
        sprintf(temp, "%c%s", digit, result);
        free(result);
        result = temp;
    }

    // 如果转换结果为0，确保至少有一个字符'0'
    if (strlen(result) == 0) {
        strcpy(result, "0");
    }

    return result;
}

// 反转字符串
void reverseString(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}