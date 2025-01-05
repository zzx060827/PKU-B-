#include<stdio.h>

int main(void)
{
    int n;
    scanf("%i",&n);
    for(int i = 1;i < (n + 1)/2;i++) //print every line which is over than the mid
    {
    int blank = (n + 1)/2 - i;
    int star = 2*i - 1;
    printf("$");
    for(int j = 0; j < blank; j++)
    {
        printf(" ");
    }
    for(int p = 0; p < star; p++)
    {
        printf("*");
    }
    printf("\n");

    }
    printf("$"); //print the mid line
    for(int q = 0; q < n;q++)
    {
        printf("*");
    }
    printf("\n");
    for(int i = (n + 3)/2;i < n + 1;i++) //print every line under the mid
    {
    int blank = i - (n + 1)/2;
    int star = 2*n - 2*i + 1;
    printf("$");
    for(int j = 0; j < blank; j++)
    {
        printf(" ");
    }
    for(int p = 0; p < star; p++)
    {
        printf("*");
    }
    printf("\n");

    }

}