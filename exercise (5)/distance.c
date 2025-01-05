#include <stdio.h>
#include <math.h>

int main()
{
    double x1,x2,y1,y2,z1,z2,d;
    scanf("%lf,%lf,%lf",&x1,&y1,&z1);
    scanf("%lf,%lf,%lf",&x2,&y2,&z2);
    d=(double) sqrt(pow((x1-x2),2)+pow((y1-y2),2)+pow((z1-z2),2));
    printf("%.2lf",d);


}
