#include<stdio.h>

int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (c == 0){printf("error");return 0;}
    printf("%d\n", (a + b)/c);
}