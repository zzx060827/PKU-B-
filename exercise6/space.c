#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 1000

int main() 
{
    char line[2048];int n;
    if(fgets(line,sizeof(line),stdin)){
        int len=strlen(line);
        int judge=0;
        for(int i=0,j=0;i<len;i++)
        {
            if(!isspace(line[i]))
            {line[j++]=line[i];judge=0;}
            else if(isspace(line[i])!=0 && judge==0)
            {line[j++]=line[i];judge=1;}
            n=j;

        }
        line[n] = '\0';
        printf("%s",line);
    }
    
}