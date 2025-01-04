#include <stdio.h>
#include <string.h>

int main() 
{
    char str[101][101];
    int i=1;
    while(scanf("%s", str[i])!= 0)
    {
        if(getchar() == '\n') break;
        int len=strlen(str[i]);
        int j=i%len-1;
        if(j<0) j+=len;
        printf("%c", str[i][j]);
        i++;
    }
        int len=strlen(str[i]);
        int j=i%len-1;
        if(j<0) j+=len;
        printf("%c", str[i][j]);
        i++;
}