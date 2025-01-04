#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[260]={0};
    fgets(str, sizeof(str), stdin);
    for(int i=0;i<strlen(str)-1;i++)
    {
        if(str[i]=='G'&& str[i+1]=='T')
        {str[i+1]='G';i++;}
    }
    printf("%s",str);
}