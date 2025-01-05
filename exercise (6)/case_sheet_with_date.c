#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n;scanf("%d",&n);
    char ori[n][15];
    for(int i=0;i<n;i++)
    {
        scanf("%s",ori[i]);
        for(int j=0;j<strlen(ori[i]);j++)
        {
            ori[i][j]+=3;
            if((ori[i][j]>'Z'&&ori[i][j]<'a')||ori[i][j]>'z')
            {
                ori[i][j]-=26;
            }
        }
        for(int j=0,l=strlen(ori[i])-1;j<strlen(ori[i])/2;j++,l--)
        {
            char t=ori[i][j];
            ori[i][j]=ori[i][l];
            ori[i][l]=t;
        }
        for(int j=0;j<strlen(ori[i]);j++)
        {
            if(isupper(ori[i][j])){ori[i][j]-=('A'-'a');}
            else ori[i][j]+=('A'-'a');
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(strcmp(ori[j],ori[j+1])>0)
            {
                char t[15];
                strcpy(t,ori[j]);
                strcpy(ori[j],ori[j+1]);
                strcpy(ori[j+1],t);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%s\n",ori[i]);
    }
    return 0;
}