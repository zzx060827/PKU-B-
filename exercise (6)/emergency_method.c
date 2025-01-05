#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() 
{
    char email[60];scanf("%s", email);
    int n;scanf("%d", &n);
    char name[n][60],password[n][60],ema[n][60];
    int judge=0;
    for(int i=0;i<n;i++)
    {
        scanf("%s%s%s", name[i], password[i], ema[i]);getchar();
        if(strcmp(email, ema[i])==0)
        {
            int len=strlen(password[i]);
            for(int j=0;j<len;j++)
            {
                if(isupper(password[i][j]))
                {
                    password[i][j]-=('A'-'a');
                }
                else if(islower(password[i][j])) password[i][j]+=('A'-'a');
            }
            printf("%s %s\n", name[i], password[i]);
            judge=1;
        }
    }
    if(!judge)printf("empty\n");

}