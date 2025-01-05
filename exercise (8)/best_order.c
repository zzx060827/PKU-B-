#include <stdio.h>
#include <math.h>

int main()
{
    int n,prize,sum=0,temp=0;
    scanf("%d %d",&n,&prize);int p[n];
    for(int i=0;i<n;i++){scanf("%d",&p[i]);sum+=p[i];}
    if(sum<prize){printf("0");return 0;}
    int t=pow(2,n);int all[t];for(int i=0;i<t;i++){all[i]=0;}
    int binary[n];
    for(int i=0;i<n;i++){binary[i]=0;}
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<n;j++){
        all[i]+=binary[j]*p[j];}
        binary[0]++;
        for(int j=0;j<n;j++){
            if(binary[j]==2){binary[j]=0;binary[j+1]++;}
        }
    }
    int min=1000000000;
    for(int i=0;i<t;i++){if(all[i]<min && all[i]>=prize){min=all[i];}}
    printf("%d",min);
   
    
}