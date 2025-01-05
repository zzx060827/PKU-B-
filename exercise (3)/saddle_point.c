#include <stdio.h>

int main() 
{
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    int count[x];int judge1=0;
    int matrix[x][y];
    
        for(int i=0;i<x;i++)
        {
            count[i]=0;
            for(int j=0;j<y;j++)
            {
                if(j==0){scanf("%d",&matrix[i][j]);}
                else
                {scanf(" %d",&matrix[i][j]);}
            }
        }
        for(int i=0;i<x;i++)
        {
            int max = 0;
            for(int j=0;j<y;j++)
            {
                if(matrix[i][j]>max){max=matrix[i][j];count[i]=j;}
            }
        }
        for(int i=0;i<x;i++)
        {
            int judge=1;
            for(int j=0;j<y;j++)
            {if(matrix[i][count[i]]>matrix[j][count[i]])
            {judge=0;}}
            if(judge==1){printf("a[%d][%d]=%d",i+1,count[i]+1,matrix[i][count[i]]);judge1++;}
        }

        if(judge1==0) printf("no");
}