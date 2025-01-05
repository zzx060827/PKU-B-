#include <stdio.h>

void bubblingsort(double a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                double temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int main()
{
    int t;scanf("%d",&t);
    while(t--)
    {
        int n;scanf("%d",&n);
        double a[n];int x=n;
        while(x)
        {
            x--;
            scanf("%lf",&a[x]);
        }
        bubblingsort(a,n);double mid=0;
        if(n%2==0)mid=(double)(a[n/2]+a[n/2-1])/2;
        else mid=a[n/2];
        printf("%.1f\n",mid);
    }
}