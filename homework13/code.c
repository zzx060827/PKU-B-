#include <stdio.h>
#include <string.h>

void print(int num[],int len,char printed[],int count)
{
    if(count==len)
    {
        for(int i=0;i<len;i++)
        {
            printf("%c",printed[i]);
        }
        printf("\n");
        return;
    }
    
    if(num[count]==2)
    {
        printed[count]='a';
        print(num,len,printed,count);
        printed[count]='b';
        print(num,len,printed,count);
        printed[count]='c';
        print(num,len,printed,count);
    }
    if(num[count]==3)
    {
        printed[count]='d';
        print(num,len,printed,count);
        printed[count]='e';
        print(num,len,printed,count);
        printed[count]='f';
        print(num,len,printed,count);
    }
    if(num[count]==4)
    {
        printed[count]='g';
        print(num,len,printed,count);
        printed[count]='h';
        print(num,len,printed,count);
        printed[count]='i';
        print(num,len,printed,count);
    }
    if(num[count]==5)
    {
        printed[count]='j';
        print(num,len,printed,count);
        printed[count]='k';
        print(num,len,printed,count);
        printed[count]='l';
        print(num,len,printed,count);
    }
    if(num[count]==6)
    {
        printed[count]='m';
        print(num,len,printed,count);
        printed[count]='n';
        print(num,len,printed,count);
        printed[count]='o';
        print(num,len,printed,count);
    }
    if(num[count]==7)
    {
        printed[count]='p';
        print(num,len,printed,count);
        printed[count]='q';
        print(num,len,printed,count);
        printed[count]='r';
        print(num,len,printed,count);
        printed[count]='s';
        print(num,len,printed,count);
    }
    if(num[count]==8)
    {
        printed[count]='t';
        print(num,len,printed,count);
        printed[count]='u';
        print(num,len,printed,count);
        printed[count]='v';
        print(num,len,printed,count);
    }
    if(num[count]==9)
    {
        printed[count]='w';
        print(num,len,printed,count);
        printed[count]='x';
        print(num,len,printed,count);
        printed[count]='y';
        print(num,len,printed,count);
        printed[count]='z';
        print(num,len,printed,count);
    }
    count++;
}

int main() 
{
    char str[11];int num[11];char printed[11];int count=0;
    scanf("%s",str);int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        num[i]=str[i]-'0';
    }
    print(num,len,printed,0);
}