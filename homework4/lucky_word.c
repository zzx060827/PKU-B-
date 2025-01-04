#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int min=100,max=0,judge;
    char word[1000]={0};
    int count[1000]={0};
    scanf("%s", word);
    for(int i=0;i<strlen(word);i++)
    {
        count[word[i]]++;
    }
    for(int i=0;i<1000;i++)
    {
        if(count[word[i]]>max){max=count[word[i]];};
        if(count[word[i]]<min && count[word[i]]!=0){min=count[word[i]];};
    }
    judge=max-min;
    if(judge==2||judge==3){printf("Lucky Word\n%d",max-min);return 0;}
    if(judge==1){printf("No Answer\n0");return 0;}
    for(int i=2;i<=sqrt(judge);i++)
    {
        if(judge%i==0){printf("No Answer\n0");return 0;}
    }
    printf("Lucky Word\n%d",judge);
    return 0;
}