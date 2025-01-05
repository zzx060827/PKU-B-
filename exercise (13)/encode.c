#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int n;scanf("%d",&n);
    int str[n];char key[n];char origin[n];
    for(int i=0;i<n;i++){scanf("%d",&str[i]);}
    scanf("%s",key);int len=strlen(key);
    for(int i=0;i<n-len;i++)
    {
        key[i+len]=key[i];
    }
    for(int i=0;i<n;i++)
    {
        origin[i]=str[i]+key[i];
        printf("%c",origin[i]);
    }

}