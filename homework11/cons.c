#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() 
{
    int n;scanf("%d", &n);getchar();
    for(int i=0;i<n;i++)
    {
    int ns_input, ns_output;char num[100];int decimal[100]={0};int nu[100]={0},out[1000]={0};
    char line[256];
    fgets(line, sizeof(line), stdin); // 读取整行输入
    sscanf(line, "%d,%[^,],%d", &ns_input, num, &ns_output); 
    int count=0;
    int len=strlen(num);
    for(int i=0;i<len;i++)
    {
        if(num[i]>='0'&&num[i]<='9')nu[i]=num[i]-'0';
        else if(num[i]>='a'&&num[i]<='z')nu[i]=num[i]-'a'+10;
        else if(num[i]>='A'&&num[i]<='Z')nu[i]=num[i]-'A'+10;
        decimal[i+1]=nu[i];
        if(decimal[i+1]>=10){decimal[i+1]%=10;decimal[i]+=decimal[i+1]/10;}

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
        if(out[i]>=10){char q=out[i]-10+'A';printf("%c",q);}
        else printf("%d",out[i]);
    }
    printf("\n");
    }
}