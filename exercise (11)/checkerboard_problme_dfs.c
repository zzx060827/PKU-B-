#include <stdio.h>
#include <stdlib.h>

#define N 10

char board[N][N] = {0};
int col[N] = {0};
int count = 0;
int n, k;

void dfs(int row, int amont) {
    if (amont == k) {
        count++;
        return;
    }
    if (row >= n) return; 

    for (int i = 0; i < n; i++) {
        if (board[row][i] == '#' && col[i] == 0) {
            col[i] = 1; 
            dfs(row + 1, amont + 1); 
            col[i] = 0; // 回溯，重置列标记
        }
    }
    dfs(row + 1, amont); // 不放置棋子，递归到下一行
}

int main() {
    while (1) {
        scanf("%d %d", &n, &k);
        if (n == -1 && k == -1) break;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                scanf(" %c", &board[i][j]);
            }
        }

        count = 0; 
        dfs(0, 0); 
        printf("%d\n", count); 
    }
    return 0;
}
