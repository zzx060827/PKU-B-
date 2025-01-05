#include <stdio.h>
#include <string.h>

int main() 
{
    char str[256];
    int count = 0;
    fgets(str,sizeof(str),stdin);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {count++;}
    }
    printf("%d", count);
    return 0;
}