#include <stdio.h>
#include <string.h>

int main() 
{
    char str[1001];
    scanf("%s", str);
    int len = strlen(str);
    for(int i=0; i<len; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z'){str[i] = str[i] - 'A' + 'a';}
    }
    int count = 1;
    for(int i=0; i<len-1; i++)
    {
        if(str[i]==str[i+1]){count++;}
        else{printf("(%c,%d)", str[i], count); count = 1;}
    }
    printf("(%c,%d)", str[len-1], count);
}