#include <stdio.h>
#include <string.h>

int main() 
{
    int n, judge;
    char str[100000];
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++) {
        judge = 0;
        fgets(str, sizeof(str), stdin);
        int len = strlen(str);
        if (str[len - 1] == '\n') { 
            str[len - 1] = '\0';
            len--;
        }
        int arr[256] = {0}; int se[100000]={0};
        for (int j = 0; j < len; j++) {
            arr[(unsigned char)str[j]]++;se [(unsigned char)str[j]]=j;
        }
        for (int j = 0; j < len; j++) {
            if (arr[(unsigned char)str[j]]==1) { // 如果找到只出现一次的字符
                printf("%c\n", str[j]);
                judge = 1; // 设置judge为1
                break;
            }
        }
        if (judge == 0) { // 如果没有找到只出现一次的字符
            printf("no\n");
        }
    }
    return 0;
}