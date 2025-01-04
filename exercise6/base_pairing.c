#include <stdio.h>
#include <string.h>

int main() 
{
    char str[256];int n;
    scanf("%d",&n);getchar();
    for(int i=0;i<n;i++)
    {
        fgets(str,sizeof(str),stdin);
        for(int j=0;j<strlen(str);j++)
        {
            if(str[j]=='A'){printf("T");}
            else if(str[j]=='T'){printf("A");}
            else if(str[j]=='C'){printf("G");}
            else if(str[j]=='G'){printf("C");}
        }
        if(i!=n-1)printf("\n");
    }
}