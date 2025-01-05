#include <stdio.h>

int main() 
{
    int n,cell=1;
    scanf("%d", &n);
    for(int i=1; i<=10000; i++)
    {
        cell=cell*2;
        if(cell>=n)
        {
            printf("%d", i);
            return 0;
        }
    }
}