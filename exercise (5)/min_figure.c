#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100

void min_integer_after_deletion(char *m, int k) 
{
    int len = strlen(m);
    char *stack = (char *)malloc((len + 1) * sizeof(char));
    int top = 0;
    
    for (int i = 0; i < len; i++) {
        while (top > 0 && k > 0 && stack[top - 1] > m[i]) {
            top--;
            k--;
        }
        stack[top++] = m[i];
    }

    // 如果还有删除的数字，删除栈顶的
    while (k > 0 && top > 0) {
        top--;
        k--;
    }

    stack[top] = '\0'; // 结束字符串
    // 遍历栈以构建结果，去掉前导零
    int start = 0;
    while (start < top && stack[start] == '0') {
        start++;
    }

    if (start == top) {
        printf("0\n");
    } else {
        printf("%s\n", stack + start);
    }

    free(stack);
}

int main() {
    char m[MAX_LEN];
    int k;
    scanf("%s %d", m, &k);
    
    min_integer_after_deletion(m, k);

    return 0;
}
