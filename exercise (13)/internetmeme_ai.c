#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(char listl[][100], char listr[][100], int n, char mel[], char mer[]) {
    if (strcmp(mel, mer) == 0) {
        return 1;
    }
    
    // 遍历所有等价关系
    for (int i = 0; i < n; i++) {
        // 如果在关键词列表中找到mel
        if (strcmp(listl[i], mel) == 0 ) {
            return compare(listr, listl, n, listr[i], mer);
        }
        // 如果在网络迷因列表中找到mel
        if (strcmp(listr[i], mel) == 0 ) {
            return compare(listl, listr, n, listl[i], mer);
        }
    }
    // 如果没有找到等价关系，返回0
    return 0;
}

int main() {
    int n;int judge=1;
    scanf("%d", &n);
    
    // 使用动态分配的数组来存储关键词和迷因
    char (*listl)[100] = malloc(n * sizeof(*listl));
    char (*listr)[100] = malloc(n * sizeof(*listr));
    
    // 输入等价关系
    for (int i = 0; i < n; i++) {
        scanf("%s %s", listl[i], listr[i]);
    }
    
    // 输入待判断的两个词
    char mel[100], mer[100];
    scanf("%s %s", mel, mer);
    
    // 判断等价关系并输出结果
    if (compare(listl, listr, n, mel, mer)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    // 释放动态分配的内存
    free(listl);
    free(listr);
    
    return 0;
}
