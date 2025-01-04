#include <stdio.h>

int main() 
{
    int n1,n2;char operator;
    scanf("%d%c%d",&n1,&operator,&n2);
    switch (operator)
    {
    case '+':
        printf("%d\n",n1+n2);
        break;
    case '-':
        printf("%d\n",n1-n2);
        break;
    case '*':
        printf("%d\n",n1*n2);
        break;
    case '/':
        printf("%d\n",n1/n2);
        break;
    
    default:
        break;
    }
}