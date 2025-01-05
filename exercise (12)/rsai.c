#include <stdio.h>
#include <stdlib.h>

#define MAX_P 201
#define MAX_N 10

int prices[MAX_N];
int n, p;

// 动态规划数组，存储组合
int *dp[MAX_P][MAX_N]; // dp[i][j] 表示金额 i 的组合，j 为组合的长度
int dp_count[MAX_P]; // 记录每个金额的组合数

void findCombinations(int amount, int index, int *combination, int comb_size) {
    if (amount == 0) {
        // 打印当前组合
        for (int i = 0; i < comb_size; i++) {
            printf("%d ", combination[i]);
        }
        printf("\n");
        return;
    }
    
    if (amount < 0) return; // 超过金额，返回

    for (int i = index; i < n; i++) {
        combination[comb_size] = prices[i]; // 选择当前价格
        findCombinations(amount - prices[i], i, combination, comb_size + 1); // 递归
    }
}

int main() {
    scanf("%d %d", &n, &p);
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    // 初始化动态规划数组
    for (int i = 0; i < MAX_P; i++) {
        dp_count[i] = 0;
    }

    // 开始找组合
    int combination[MAX_N]; // 用于存储当前组合
    findCombinations(p, 0, combination, 0);

    // 如果没有组合输出 NO
    if (dp_count[p] == 0) {
        printf("NO\n");
    }

    return 0;
}
