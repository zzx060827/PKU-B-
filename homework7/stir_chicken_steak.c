#include <stdio.h>

int main() 
{
    int n,k,min;
    scanf("%d %d",&n,&k);
    min=((n*2)/k);
    if((n*2)%k!=0){min++;}
    if(min<2){min=2;}
    printf("%d",min);
}