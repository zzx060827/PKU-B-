#include <stdio.h>

int main() 
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && b + c > a && c + a > b) {printf("yes");return 0;}
    printf("no");
}