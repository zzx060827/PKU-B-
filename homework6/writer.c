#include <stdio.h>
#include <string.h>

int main() 
{
    int n;scanf("%d",&n);int writer[256][1000]={0};
    int max=0;char count;int output[100];int b=0;
    int num[1000];
    for(int i=0;i<n;i++)
    {
        char wr[100];
        scanf("%d",&num[i] );
        scanf(" %s", wr);
        for(int j=0;j<strlen(wr);j++)
        {
            b=0;
            writer[(unsigned char)wr[j]][0]++;
            while(writer[(unsigned char)wr[j]][b]!=0){b++;}
            writer[(unsigned char)wr[j]][b]=num[i];
        }

    }
        for(int k=1;k<256;k++)
        {
            if(writer[k][0]>max){max=writer[k][0];count=k;}
        }
        printf("%c\n",count);b=1;
        while(writer[count][b]!=0){b++;}
        printf("%d\n",b);   
        for(int k=1;k<b;k++)
        {printf("%d\n",writer[count][k]);}
}