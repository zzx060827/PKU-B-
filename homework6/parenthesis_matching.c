#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int n; scanf("%d", &n); getchar(); 
    for (int i = 0; i < n; i++) {
        char str[180]={0};
        fgets(str, sizeof(str), stdin);
        int len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
            len--;
        }

        printf("%s\n", str);
        int stack[101];
        int top = -1;
        int judge[101] = {0}; // 0 未处理，1 配对，2 未配对左括号，3 未配对右括号

        for(int j = 0; j < len; j++)
        {
            if(str[j]=='(')
            {
                stack[++top]=j+5;
                judge[j]=2;
            }
            else if(str[j]==')')
            {
                if(top==-1){judge[j]=3;}
                else if(stack[top]>=5){judge[j]=1;judge[stack[top]-5]=1;top--;}
            }
            else{judge[j]=0;}
        }
        for(int j = 0; j < len; j++)
        {
            if(judge[j]==2){printf("$");}
            else if(judge[j]==3){printf("?");}
            else{printf(" ");}
        }
        printf("\n");
    }
    return 0;
}