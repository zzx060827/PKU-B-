#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,arr[100];
    char str[100];  
    scanf("%d",&n);getchar();
    for (int i = 0; i < n; i++)
    {
        fgets(str, sizeof(str), stdin);
        for(int j=0;j<strlen(str);j++)
        {
        arr[j]=str[j];
        if((arr[j]<='z'&& 'a'<=arr[j]) ||('A'<=arr[j] && arr[j]<='Z') ){arr[j]++;}
        printf("%c",arr[j]);
        }
        printf("\n");
    }
    

}