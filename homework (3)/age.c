#include <stdio.h>

int main() 
{
    int age,n;
    double a1=0,a2=0,a3=0,a4=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&age);
        if(age<=18){a1++;}
        else if(age>18 && age<36){a2++;}
        else if(age>35 && age<61){a3++;}
        else{a4++;}
        
    }
        a1/=n;a1*=100;
        a2/=n;a2*=100;
        a3/=n;a3*=100;
        a4/=n;a4*=100;
        printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\nOver60: %.2lf%%",a1,a2,a3,a4);
}