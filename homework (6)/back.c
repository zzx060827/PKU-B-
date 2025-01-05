#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000]={0};char rev[1000]={0};
    fgets(str, 1000, stdin);
    int len = strlen(str);
    for(int i=0;i<len-1;i++)
    {
        rev[len-i-2]=str[i];
    }
    str[len-1]='\0';
    if(strcmp(str,rev)==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}