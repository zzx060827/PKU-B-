#include <stdio.h>

int main() 
{
    int n;
    scanf("%d",&n);
    int ms[n][n];//magic square array
    int fc=(n-1)/2-1,fr=+1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){ms[i][j]=0;}
    }
    for(int i=0;i<n*n;i++)
    {
        fc++;fr--;
        if((fc==n && fr==-1)||(fr>=0 && fc<n && ms[fr][fc] != 0)){fc--;fr+=2;}
        if(fc>n-1){fc-=n;}
        if(fr<0){fr+=n;}
        ms[fr][fc]=i+1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
        if(j!=n-1){printf("%d ",ms[i][j]);}
        else{printf("%d",ms[i][j]);}
        }
        printf("\n");
    }
    

}