#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int isSpecial(int n) {
    int digit = (int)(log10(n) + 1);
    int *num = (int *)malloc(digit * sizeof(int)); // 动态分配内存
    if (num == NULL) {
        return 0; // 内存分配失败
    }
    
    for (int i = 0; i < digit; i++) {
        num[digit - 1 - i] = n % 10;
        n /= 10;
    }
    
    for (int i = 0; i < digit; i++) {
        if ((num[i] % 2) == (i % 2)) {
            free(num); // 释放内存
            return 0;
        }
    }
    
    free(num); // 释放内存
    return 1;
}

int main() 
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int l, r;
        scanf("%d %d", &l, &r);
        int count = 0;
        for (int j = l; j <= r; j++) {
            if (isSpecial(j)) count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
