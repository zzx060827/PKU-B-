#include <stdio.h>

int main() 
{
    int n,k;
    scanf("%d %d",&n,&k);
    int school_number[n],rank[n];
    float score[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %f",&school_number[i],&score[i]);
    }
    for(int i=0;i<n;i++)
    {
        rank[i]=n;
        for(int j=0;j<n;j++)
        if(score[i]>score[j])
        {
            rank[i]--;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(rank[i]==k)
        {
            printf("%d %g\n",school_number[i] ,score[i]);
        }
    }
}