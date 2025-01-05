#include <stdio.h>

int main()
{
    double k;
    double sum=0.0;
    scanf("%lf",&k);
    for(int i=1;i<1500000;i++)
    {
        sum+=(double)1/i;
        if(sum>k){printf("%d",i);break;return 0;}
    }
}