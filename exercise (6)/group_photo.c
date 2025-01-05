#include <stdio.h>
#include <string.h>

int main() 
{
    int n,count=0;
    scanf("%d",&n);
    int male[500]={0},female[500]={0};
    for(int i=1;i<=n;i++)
    {
        char sex[10];double height;int h;
        scanf("%s %lf", sex,&height);
        h=(int)(height*100+0.0001);
        if (strcmp(sex, "female") == 0) { 
            female[h] = 1;
        }
        else if (strcmp(sex, "male") == 0) { 
            male[h] = 1;
        }
    }
    for(int i=0;i<400;i++)
    {
        if(male[i]!=0 && count==0){printf("%.2f",i/100.0);count++;}
        else if(male[i]!=0 && count!=0){printf(" %.2f",i/100.0);count++;}
    }
    for(int i=400;i>0;i--)
    {
        if(female[i]!=0){printf(" %.2f",i/100.0);}
    }

}