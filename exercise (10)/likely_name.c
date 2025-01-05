#include <stdio.h>
#include <string.h>

int main() 
{
    int n; scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char name1[300], name2[300];
        int n1[26] = {0}, n2[26] = {0};
        int judge = 1; // 初始化为1，表示假设字符串是匹配的
        scanf("%s %s", name1, name2);
        int len1 = strlen(name1), len2 = strlen(name2);
        if (len1 != len2) {
            printf("NO\n");
            continue; // 如果长度不相等，输出NO并继续下一个循环
        }
        for (int j = 0; j < len1; j++) {
            n1[name1[j] - 'a']++;
        }
        for (int j = 0; j < len2; j++) {
            n2[name2[j] - 'a']++;
        }
        for (int j = 0; j < 26; j++) {
            if (n1[j] != n2[j]) {
                printf("NO\n");
                judge = 0; // 标记为不匹配
                break;
            }
        }
        if (judge) { // 如果judge仍然为1，说明字符频率匹配
            printf("YES\n");
        }
    }
    return 0;
}