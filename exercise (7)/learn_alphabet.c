#include <stdio.h>

int main() 
{
    int n;scanf("%d\n",&n);
    for(int i=0;i<n;i++)
    {
        char letter;scanf("%c\n",&letter);
        if(letter=='z'||letter=='Z'){printf(" \n");continue;}
        printf("%c\n",letter+1);
    }
}