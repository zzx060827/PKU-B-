#include <stdio.h>
#include <string.h>

int main() 
{
    int origin[10];int password[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&origin[i]);
        password[i]=(origin[i]+5)%10;
        if(i==0){printf("%d",password[i]);}
        else printf(" %d",password[i]);
    }
    printf("\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&password[i]);
        origin[i]=(password[i]-5);
        if(origin[i]<0) origin[i]+=10;
        if(i==0){printf("%d",origin[i]);}
        else printf(" %d",origin[i]);
    }
}