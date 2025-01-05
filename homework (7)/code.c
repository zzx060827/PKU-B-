#include<stdio.h>
#include<string.h>

int main()
{
    char str[102];int n;
    scanf("%s",str);
    scanf("%d",&n);
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        str[i]-=n;
        if(str[i]<'A')
        {
            str[i]+=26;
        }
    }
    printf("%s",str);
}
