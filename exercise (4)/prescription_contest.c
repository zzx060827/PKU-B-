#include <stdio.h>

int main() 
{
    int n,min,max;
    min=1000000000;
    max=0;
    scanf("%d", &n);
    int count[n],temp[n];
    for(int i=0; i<n; i++)
    {
        temp[i]=0;
        scanf("%d", &count[i]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(count[i]>max)
            {max=count[i];}
            if(count[i]<min)
            {min=count[i];}
        }
        
    }
    printf("%d %d", max, min);



}