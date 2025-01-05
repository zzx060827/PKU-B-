#include <stdio.h>

int main() 
{
    double a, b, c,area;
    scanf("%lf %lf %lf",&a,&b,&c);
    double min =1000000;
    if(a<min){min=a;}
    if(b<min){min=b;}
    if(c<min){min=c;}
    double min2 = 1000000;
    if(a<min2 && a!=min){min2=a;}
    if(b<min2 && b!=min){min2=b;}
    if(b<min2 && b!=min){min2=c;}
    area = 0.5*min*min2;
    printf("%.2lf",area);
}