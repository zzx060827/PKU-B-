#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() 
{
    int ns_input, ns_output;char num[100];long long decimal=0;int nu[100]={0},out[1000]={0};
    scanf("%d %s %d", &ns_input, num, &ns_output);
    int count=0;
    int len=strlen(num);
    for(int i=0;i<len;i++)
    {
        if(num[i]>='0'&&num[i]<='9')nu[i]=num[i]-'0';
        else if(num[i]>='a'&&num[i]<='z')nu[i]=num[i]-'a'+10;
        else if(num[i]>='A'&&num[i]<='Z')nu[i]=num[i]-'A'+10;
        decimal+=nu[i]*pow(ns_input,len-i-1);
    }
    
        while(decimal!=0)
        {
            out[count]=decimal%ns_output;
            decimal/=ns_output;
            if(decimal!=0)
            count++;
        }
        
    
    for(int i=count;i>=0;i--)
    {
        printf("%d",out[i]);
    }
}