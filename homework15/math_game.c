#include <stdio.h>

int count = 0;
int memo[1001][11]; 

int minus(int m, int where) {
    if (m == 0) return 1; 
    if (m < where) return 0; 
    if (memo[m][where] != -1) return memo[m][where]; // 返回缓存结果

    int total = 0;
    for (int i = where; i <= m; i *= 2) {
        total += minus(m - i, i);
    }

    memo[m][where] = total; // 缓存结果
    return total;
}

int main() {
    int n;
    scanf("%d", &n);
    
    // 初始化 memo 数组
    for (int i = 0; i <= 1000; i++) {
        for (int j = 0; j <= 10; j++) { // 2 的幂最多到 1024
            memo[i][j] = -1;
        }
    }

    for (int i = 0; i < n; i++) {
        count = 0;
        int m;
        scanf("%d", &m);
        if (m >= 1) {
            count = minus(m, 1);
        }
        printf("%d\n", count);
    }

    return 0;
}
