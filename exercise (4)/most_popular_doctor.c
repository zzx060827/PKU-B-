#include <stdio.h>

int main()
{
    int n,num,temp;
    int max=0;
    scanf("%d",&n);
    int doctor[n];
    for(int i=0;i<n;i++)
    {
        doctor[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        doctor[num]++;
    }
    for(int i=0;i<n;i++)
    {
        if(doctor[i]>max){max=doctor[i];temp=i;}
    }
    printf("%d",temp);
}