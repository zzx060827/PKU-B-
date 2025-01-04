#include <stdio.h>

#define max_size 20

int feasible(char labyrinth[max_size][max_size], int n, int x, int y, int visited[max_size][max_size]);

int main() {
    int m;
    scanf("%d", &m);
    getchar();
    for (int i = 0; i < m; i++) {
        int n;
        scanf("%d", &n);
        getchar();
        char labyrinth[max_size][max_size];
        int visited[max_size][max_size] = {0}; // 用于标记访问过的路径
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                scanf(" %c", &labyrinth[j][k]); // 注意空格
            }
            getchar();
        }
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                visited[j][k] = 0; // 初始化访问标记
            }
        }
        if (feasible(labyrinth, n, 0, 0, visited) == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}

int feasible(char labyrinth[max_size][max_size], int n, int x, int y, int visited[max_size][max_size]) {
    if (x == n - 1 && y == n - 1) {
        return 1;
    } else if (x >= n || y >= n || x < 0 || y < 0 || labyrinth[x][y] == '#' || visited[x][y] == 1) {
        return 0;
    } else {
        visited[x][y] = 1; // 标记当前位置为已访问
        if (feasible(labyrinth, n, x + 1, y, visited) == 1 ||
            feasible(labyrinth, n, x, y + 1, visited) == 1 ||
            feasible(labyrinth, n, x - 1, y, visited) == 1 ||
            feasible(labyrinth, n, x, y - 1, visited) == 1) {
            return 1;
        }
    }
    return 0;
}