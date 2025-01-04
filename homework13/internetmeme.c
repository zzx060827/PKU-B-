# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int compare(char listl[][100],char listr[][100],int n,char mel[],char mer[])
{
    if(strcmp(mel,mer)==0){return 1;}
    for(int i=0;i<n;i++)
    {
        if(strcmp(listl[i],mel)==0)
        {
            return compare(listr,listl,n,listl[i],mer);
        }
        if(strcmp(listr[i],mel)==0)
        {
            return compare(listl,listr,n,listr[i],mer);
        }
    }
    return 0;

}

int main() 
{
    int n;scanf("%d",&n);
    char listl[n][100],listr[n][100];
    for(int i=0;i<n;i++)
    {
        scanf("%s %s",listl[i],listr[i]);
    }
    char mel[100],mer[100];
    scanf("%s%s",mel,mer);
    if(compare(listl,listr,n,mel,mer)){printf("Yes");}
    else{printf("No");}
}