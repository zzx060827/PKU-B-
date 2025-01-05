#include<stdio.h>

int gcd(int a,int b);
int lcm(int a,int b);
void calculate_gcd_lcm(int arr[], int size, int *gcd_result, int *lcm_result) ;

int main()
{
    int n,gcd_result,lcm_result;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    calculate_gcd_lcm(arr,n,&gcd_result,&lcm_result);
    printf("%d %d",gcd_result,lcm_result);
    return 0;

}

int gcd(int a,int b)
{
    if(a<b){int t=a;a=b;b=t;}
    while(b!=0)
    {
        int t=b;
        b=a%b;
        a=t;    
    }
    return a;
}
int lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}
void calculate_gcd_lcm(int arr[], int size, int *gcd_result, int *lcm_result) 
{
    *gcd_result=arr[0];
    *lcm_result=arr[0];
    for(int i=1;i<size;i++)
    {
        *gcd_result=gcd(*gcd_result,arr[i]);
        *lcm_result=lcm(*lcm_result,arr[i]);
    }
}

