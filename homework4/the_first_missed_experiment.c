#include <stdio.h>

int main() 
{
    int n,num;
    scanf("%d",&n);
    int count[101]={0};
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        count[num]++;
    }
    for(int i=1;i<101;i++)
    {if (count[i]==0){printf("%d",i);break;}}
}