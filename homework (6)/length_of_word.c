#include <stdio.h>
#include <string.h>

int main() 
{
    char str[1002]={0};int count=0;int coun=0;
    fgets(str, 1002, stdin);int len=strlen(str);
    for(int i=0; i<len; i++)
    {
        if(str[i]!=' '){count++;}
        else if(str[i]==' '&&coun==0){printf("%d",count);count=0;coun++;}
        else if(str[i]==' '&& count!=0){printf(",%d",count);count=0;}
        if(str[i]=='\n'&& count!=0){printf(",%d",count-1);}
    }
}