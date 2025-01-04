#include <stdio.h>

int main() 
{
    double h,n,sum=0;
    scanf("%lf %lf",&h,&n);
    sum+=h;
    for(int i=1;i<=n;i++)
    {h/=2;sum+=2*h;}
    sum-=2*h;
    printf("%.4lf %.4lf",sum,h);
    return 0;

}