#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    double rate;double count=0.0;
    char g1[502]={0};char g2[502]={0};
    scanf("%lf", &rate);getchar();
    scanf("%s", g1);getchar();
    scanf("%s", g2);getchar();
    int len=strlen(g1);int len2=strlen(g2);
    if(len!= len2){printf("error");return 0;}
    for(int i=0;i<len;i++)
    {
        if(g1[i]== g2[i]){count++;}
        if(g1[i]!= 'A'&& g1[i]!= 'C' && g1[i]!= 'G' && g1[i]!= 'T'){printf("error");return 0;}
        if(g2[i]!= 'A'&& g2[i]!= 'C' && g2[i]!= 'G' && g2[i]!= 'T'){printf("error");return 0;}
    }
    count=(double)count/len;
    if(count>rate){printf("yes");}
    else{printf("no");}
}