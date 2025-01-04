#include <stdio.h>


int main()
{
    int n,length=0,width=0,mid=0;
    scanf("%d",&n);
    int tumor[n][n];int first_judge=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
        scanf("%d",&tumor[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(tumor[i][j]==0 && first_judge==0)
            {
                first_judge=1;
                for(int k=j;k<n && tumor[i][k]==0;k++){length++;}
                for (int k=i;k<n && tumor[k][j]==0;k++){width++;}
                for(int k=i+1;k<i+width;k++)
                {
                    for(int l=j+1;l<j+length;l++)
                    {if(tumor[k][l]==255){mid++;}}
                }
                break;
                
            }
        }
    }
    printf("%d",mid);
}