#include <stdio.h>

int main() 
{
    int n,interminate;
    scanf("%d", &n);
    while(n != 1)
    {
        if(n%2==0)
    {   
        interminate = n;
        n = n/2;
        printf("%d/2=%d\n", interminate, n);
    }
    else
    {
        interminate = n;
        n = n*3+1;
        printf("%d*3+1=%d\n",interminate, n);
    }
    }
    if(n==1)
    {
        printf("End\n");
    }

    
    
}