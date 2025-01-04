#include<stdio.h>
void printLine(int blanks, int stars) {
    printf("$");
    for (int j = 0; j < blanks; j++) {
        printf(" ");
    }
    for (int p = 0; p < stars; p++) {
        printf("*");
    }
    printf("\n");
}
int main(void) 
{
    int n;
    scanf("%i", &n);
    // 计算中间位置
    int mid = (n + 1) / 2;
    // 打印上半部分（包括中间行）
    for (int i = 1; i <= mid; i++) {
        int blanks = mid - i;
        int stars = 2 * i - 1;
        printLine(blanks, stars);
    }
    // 打印下半部分
    for (int i = mid + 1; i <= n; i++) {
        int blanks = i - mid;
        int stars = 2 * n - 2 * i + 1;
        printLine(blanks, stars);
    }
    return 0;
}