#include <stdio.h>
#include <string.h>

void print(int num[], int len, char printed[], int count) {
    if (count == len) {
        for (int i = 0; i < len; i++) {
            printf("%c", printed[i]);
        }
        printf("\n");
        return;
    }

    const char *letters;
    switch (num[count]) {
        case 2: letters = "abc"; break;
        case 3: letters = "def"; break;
        case 4: letters = "ghi"; break;
        case 5: letters = "jkl"; break;
        case 6: letters = "mno"; break;
        case 7: letters = "pqrs"; break;
        case 8: letters = "tuv"; break;
        case 9: letters = "wxyz"; break;
        default: return; // 如果数字不是2-9，直接返回
    }

    for (int i = 0; letters[i] != '\0'; i++) {
        printed[count] = letters[i];
        print(num, len, printed, count + 1);
    }
}

int main() {
    char str[11];
    int num[11];
    char printed[11] = {'\0'}; // 初始化printed数组
    int count = 0;
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        num[i] = str[i] - '0';
    }
    print(num, len, printed, 0);
    return 0;
}