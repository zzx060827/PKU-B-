#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int r;
    int b;
    int chosen;
}chess;
void bubblingsort(int red[],int black[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(red[j]<red[j+1])
            {
                int temp=red[j];
                red[j]=red[j+1];
                red[j+1]=temp;
            }
            if(black[j]<black[j+1])
            {
                int temp=black[j];
                black[j]=black[j+1];
                black[j+1]=temp;
            }
        }
    }
}

int main() 
{
    int n;
    scanf("%d",&n);
    chess p[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&p[i].r,&p[i].b);
        p[i].chosen=0;
    }
    int red[15]={0};
    int black[15]={0};
    for(int i=0;i<15;i++)
    {
        red[i]=p[i].r;
        black[i]=p[i+15].b;
        p[i].chosen=1;
        p[i+15].chosen=1;
    }
    bubblingsort(red,black,n);
    for(int i=0;i<n;i++)
    {
        if(p[i].chosen==0)
        {
            if(p[i].r-red[14]>p[i].b-black[14] && p[i].r-red[14]>0)
            {
                p[i].chosen=2;
            }
        }
    }
    
}