#include <stdio.h>

int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int aim[row][col],now[row][col],distinction[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&aim[i][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&now[i][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            distinction[i][j]=aim[i][j]-now[i][j];
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(j==0){printf("%d",distinction[i][j]);}
            else{printf(" %d",distinction[i][j]);}
        }
        printf("\n");
    }
    
    
}