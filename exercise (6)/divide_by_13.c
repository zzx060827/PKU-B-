#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    scanf("%s", str);
    int arr[100]= {0};
    int len = strlen(str);
    for(int i=0; i<len; i++)
    {
        arr[i] = str[i] - '0';
    }
    if(len<3){int a=arr[0]*10+arr[1];
    printf("%d\n", a/13);
    printf("%d", a%13);return 0; }
    arr[2]=arr[0]*100+arr[1]*10+arr[2];
    for(int i=2; i<len; i++)
    {
        int t=arr[i]/13;
        if(i!=len-1){
        arr[i+1]+=(arr[i]%13)*10;
        printf("%d", t);
        }
        else{
            printf("%d\n", t);
            printf("%d", arr[i]%13);
        }
    }
}