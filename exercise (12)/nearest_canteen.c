#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    int n;scanf("%d",&n);
    double min=1000000.0;
    for(int i=0;i<n;i++)
    {
        double x,y;scanf("%lf%lf",&x,&y);
        double dist=sqrt(x*x+y*y);
        if(dist<min)
        {
            min=dist;
        }
    }
    printf("%.2lf\n",min);
}