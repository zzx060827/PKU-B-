#include <stdio.h>

int main() 
{
    double sum;
    for(int i=0;i<12;i++)
    {
        double t;
        scanf("%lf",&t);
        sum=(double)sum+t;
    }
    printf("$%.2lf",sum/12);
}