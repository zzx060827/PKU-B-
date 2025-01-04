#include <stdio.h>
#include <string.h>

void permutation(char *str, int where, int len, char *list)
{
    if (where == len) 
    {
        printf("%s\n", list);
    }
    else
    {
        for(int i=0;i<len;i++)
        {
            char temp = str[i];
            if(str[i]=='0') continue;
            list[where] = str[i];
            str[i]='0';
            permutation(str, where+1, len, list);
            str[i] = temp;
        }
    }
} 

int main() 
{
    char str[10]={0};
    char list[10]={0};
    scanf("%s", str);
    int len = strlen(str);
    permutation(str, 0, len,list);
}