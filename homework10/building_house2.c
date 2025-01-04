#include <stdio.h>

int main() 
{
    int m,n;scanf("%d %d",&m,&n);
    int arr[m][n];int max_area[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
            max_area[i][j]=0;
        }
    }

    int max=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==0)
            {
                for(int l=i;l<m;l++)try every possible length and width
                {
                    for(int w=j;w<n;w++)
                    {
                        int judge=1;if(max_area[i][j]>=(l-i+1)*(w-j+1))break;
                        for(int k=i;k<=l;k++)//vertify if the area is valid
                        {
                            for(int z=j;z<=w;z++)
                            {
                                if(arr[k][z]==1)
                                {
                                    judge=0;
                                    break;
                                }
                            }
                            if(judge==0)break;
                        }
                        if(judge){max_area[i][j]=(l-i+1)*(w-j+1);}
                    }
                }
                if(max_area[i][j]>max)max=max_area[i][j];
            }
        }
    }
    printf("%d",max);
}