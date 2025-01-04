#include <stdio.h>
#include <string.h>

void carry(int decimal[],int j);

int main() 
{
    int n;scanf("%d",&n);
    int decimal[50]={0};decimal[0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<50;j++){decimal[j]*=2;}
        for(int j=0;j<50;j++){
            if (decimal[j]>9){carry(decimal,j);}
        }
        
    }
    int start=49;while(decimal[start]==0){start--;}
        for(int j=start;j>=0;j--){
            printf("%d",decimal[j]);
        }
}

void carry(int decimal[],int j)
{
    decimal[j+1]++;
    decimal[j]-=10;
}