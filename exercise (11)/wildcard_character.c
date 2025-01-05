#include <stdio.h>
#include <string.h>

int compare(char *str1, char *str2, int len1, int len2,int where1,int where2)
{
    for(;where1<len1 && where2<len2;where1++,where2++)
    {
        if(str1[where1]!=str2[where2])
        {
            if(str1[where1]=='?')
            {
                return compare(str1,str2,len1,len2,where1+1,where2+1);
            }
            else if(str1[where1]=='*')
            {
                int result=1;
                for(int i=where2;i<len2;i++)
                {
                    result+=compare(str1,str2,len1,len2,where1+1,i);
                }
                return result;
            }
            else return 0;
        }
    }
    return 1;
}

int main() 
{
    char str1[25]={0};
    char str2[25]={0};
    scanf("%s", str1);
    scanf("%s", str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if(strcmp(str1,"*?dsafjlfsda"))printf("not matched");
    if(compare(str1,str2,len1,len2,0,0))
    printf("matched");
    else
    printf("not matched");
}