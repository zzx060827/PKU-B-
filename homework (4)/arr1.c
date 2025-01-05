#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n); // 读取数组长度
    int array[n]; // 定义数组

    // 读取数组元素
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // 逆序打印数组元素
    for (i = n - 1; i >= 0; i--) {
        if(i==n-1)printf("%d", array[i]);
        if(i!=n-1)printf(" %d", array[i]);
    }

    return 0;
}