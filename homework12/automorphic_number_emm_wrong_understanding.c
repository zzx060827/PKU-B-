#include <stdio.h>
#include <math.h>
#include <string.h>

int main() 
{
    char n[5]={0};
    scanf("%s",n);
    for(int i=0,j=strlen(n)-1;i<strlen(n)/2;i++,j--)
    {
        int temp=n[i];
        n[i]=n[j];
        n[j]=temp;
    }
    int len=strlen(n);
    int i,j,root=0;
    int num=0;
    for(i=0;i<(len+1)/2;i++)
    {
        root+=(n[i]-'0')*pow(10,i);
    }
    for(int i=0;i<len;i++)
    {
        num+=(n[i]-'0')*pow(10,i);
    }
    if(num==root*root){printf("yes");}
    else{printf("no");}
}