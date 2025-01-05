#include <stdio.h>
#include <math.h>

int main()
{
    int n,x0,y0;
    double min_distance=1000000000.0;
    scanf("%d %d",&x0,&y0);
    scanf("%d",&n);
    int x[n],y[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&x[i],&y[i]);
    }
    for(int i=0;i<n;i++)
    {
        double distance=sqrt(pow(x[i]-x0,2)+pow(y[i]-y0,2));
        if(distance < min_distance){min_distance=distance;}
    }
    printf("%.2lf",min_distance);

}

