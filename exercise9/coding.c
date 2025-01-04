#include <stdio.h>

int main() 
{
    int v;scanf("%d",&v);
    char str[100]="";
    while(1)
    {
        scanf("%s",&str);
        if(str[0]=='0') break;
        if(str[1]=='+') v++;
        else if(str[1]=='-') v--;
    }
    printf("%d",v);
}