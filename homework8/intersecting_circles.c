#include <stdio.h>
#include <math.h>

int main() 
{
    int n;scanf("%d",&n);int count=0;
    int x[n],y[n],r[n];
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&x[i],&y[i],&r[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            double d=(double)sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2));
            double ra=(double)r[i]+r[j];
            if(d<ra)count++;
        }
    }
    if(count==0)printf("No");
    else printf("Yes");
}