#include <stdio.h>

int main() 
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int cpa,rpa;
        scanf("%d %d",&cpa,&rpa);
        int pa[100][100]={0};int count[100]={0};
        for(int j=0;j<cpa;j++)
        {
            int temp;
            scanf("%d",&temp);
            pa[temp][count[temp]]=j+1;count[temp]++;
        }
        if(cpa<=rpa){printf("%d\n",cpa);}else{printf("%d\n",rpa);}
        int coun=0;
        for(int j=99;j>=0;j--)
        {
            if(pa[j][0]!=0 && coun<rpa)
            {
            for(int k=0;k<count[j] && coun<rpa;k++) 
            {if(coun==0)
            {printf("%d",pa[j][k]);coun++;}
            else{printf(" %d",pa[j][k]);coun++;}
            }
            
            
        }
        }
        printf("\n");
    }


}