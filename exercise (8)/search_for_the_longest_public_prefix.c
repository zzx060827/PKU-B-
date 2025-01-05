#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[100]={0}, str2[100]={0} ,str3[100]={0}, str4[100]={0};
    int conti=0;char con[100]={0};int count=0;
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    fgets(str3, sizeof(str3), stdin);
    fgets(str4, sizeof(str4), stdin);
    for(int i=0;i<100&&conti==0;i++)
    {
        if(str1[i]==str2[i]&&str1[i]==str3[i]&&str1[i]==str4[i])
        {count++;con[i]=str1[i];}
        else{conti=1;break;}
    }
    if(count==0){return 0;}
    printf("%s",con);
}