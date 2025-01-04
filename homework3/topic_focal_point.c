#include <stdio.h>

int main() 
{
    int n,cour=1;
    scanf("%d", &n);
    int sender[n];
    int people_mentioned[100][100]={0};
    for(int i=0;i<n;i++)
    {
        scanf("%d",&sender[i]);
        int num = 0;
        scanf("%d",&num);
        for(int j=0;j<num;j++)
        {
            int mid=0;
            scanf("%d",&mid);
            people_mentioned[mid][0]++;
            people_mentioned[mid][sender[i]]=1;
        }
    }
    int max_mentioned=0,count = 0;
    for(int i=1;i<=99;i++)
    {
        if(people_mentioned[i][0]>max_mentioned)
        {
            max_mentioned = people_mentioned[i][0];
            count = i;
        }
    }
    printf("%d\n",count);
    for(int i=1;i<=100;i++){
        if(people_mentioned[count][i]==1 && cour!=1){printf(" %d",i);}
        else if(people_mentioned[count][i]==1 && cour==1){printf("%d",i);cour=0;}}
    return 0;

}