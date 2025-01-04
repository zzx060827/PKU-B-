#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() 
{
    char str[350];int num[300];for(int i=0;i<300;i++)num[i]=-1;
    int length[300]={0};
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    int isString=0,count=0;
    for(int i=0;i<len;i++)
    {
        if(str[i]>='0'&&str[i]<='9' &&!isString)
        {
            isString=1;
        }
        if(str[i]>='0'&&str[i]<='9' && isString)
        {
            length[count]++;
        }
        else if(isString)
        {
            count++;
            isString=0;
        }
    }
    int count1=0;
    for(int i=0;i<len && count>=0;i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            num[count1]+=(str[i]-'0')*pow(10,length[count1]-1);
            length[count1]--;
            if(length[count1]==0)
            {
                count--;
                count1++;
            }
        }
    }
    for(int i=0;i<count1;i++)
    {
        for(int j=0;j<count1-i-1;j++)
        {
            if(num[j]>num[j+1])
            {
                int t=num[j];
                num[j]=num[j+1];
                num[j+1]=t;
            }
        }
    }
    for(int i=0;i<count1;i++)
    {
        if(!i)printf("%d",num[i]+1);
        else printf(",%d",num[i]+1);
    }
}