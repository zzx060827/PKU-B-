#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char str[1002];int left[1002]={0},right[1002]={0},i=0,j=0,k=0,top=0;
    int stack[1002]={0};
    fgets(str, sizeof(str), stdin);
    for(i=0;str[i]!='\0'&&str[i]!='\n';i++)
    {
        if(str[i]=='('){stack[top]=1;top++;}
        else if(str[i]=='{'){stack[top]=2;top++;}
        else if(str[i]=='['){stack[top]=3;top++;}
        else if(str[i]==')'&& stack[top-1]==1){top--;}
        else if(str[i]=='}'&& stack[top-1]==2){top--;}
        else if(str[i]==']'&& stack[top-1]==3){top--;}
        else {printf("no");return 0;}
    }
    if(top==0){printf("yes");return 0;}
    printf("no");
}
