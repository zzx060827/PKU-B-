#include <stdio.h>
#include <math.h>

int main() 
{
    double a, b, c, r, area;
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a+b<=c || b+c<=a || c+a<=b){printf("Data Error"); return 0;}
    r = (a+b+c)/2;
    area = sqrt(r*(r-a)*(r-b)*(r-c));
    printf("%.4lf\n", area);
}