#include <stdio.h>
#include <string.h>

int main() 
{
    int n;scanf("%d",&n);getchar();char hh[10];
    
    for(int i=0;i<n;i++)
    {
        char str[300]="";int alpha[260]={0};
        fgets(str,sizeof(str),stdin);
        int len=strlen(str);
        for(int j=0;j<len;j++)
        {
            if(str[j]>='a'&&str[j]<='z')
            {alpha[str[j]]++;}
        }
        printf("%d",alpha['a']);
        for(int j='a'+1;j<='z';j++)
        {printf(" %d",alpha[j]);}
        printf("\n");

    }
}