#include <stdio.h>

int place(int *wid,int *len,int i,int n)
{
    int max=0;
    for(int j=0;j<n;j++)
    {
        if(wid[i]>wid[j]&&len[i]>len[j])
        {
            if(max<place(wid,len,j,n))
            {
                max=place(wid,len,j,n);
            }
        }
    }
    return max+1;
}

int main() 
{
    int n;scanf("%d",&n);
    int wid[n],len[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&wid[i],&len[i]);
    }
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(place(wid,len,i,n)>max){max=place(wid,len,i,n);}
    }
    printf("%d",max);
}