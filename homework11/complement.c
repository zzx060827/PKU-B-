#include <stdio.h>

int main() 
{
    while(1){
    int num, rev = 0;int binary[32]={0};int count=0;
    if (scanf("%d", &num) != 1){return 0;}
    if(num==-2147483648){printf("1");for(int i=1;i<32;i++)printf("0");printf("\n");continue;}
    if(num < 0){rev=1;num=-num;}
    while (num > 0) 
    {
        binary[31-count]=num%2;
        num=num/2;
        count++;
    }
    if(rev==1)
    {
        for(int i=0;i<32;i++)
        {
            binary[i]=1-binary[i];
        }
        binary[31]++;
    for(int i=31;i>=0;i--)
    {
        if(binary[i]==2)
        {
            binary[i]=0;
            binary[i-1]++;
        }
    }
    }
    for(int i=0;i<32;i++)
    {
        printf("%d", binary[i]);
    }
    printf("\n");
    }

}