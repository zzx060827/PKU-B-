#include <stdio.h>

int main()
{
    int n,figure[31][5]={0},sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&figure[i][0]);
        figure[i][4]=figure[i][0]%10;
        figure[i][3]=figure[i][0]/10%10;
        figure[i][2]=figure[i][0]/100%10;
        figure[i][1]=figure[i][0]/1000;
        if(figure[i][4]-figure[i][3]-figure[i][2]-figure[i][1]>0){sum++;}
    }
    printf("%d",sum);
    
}