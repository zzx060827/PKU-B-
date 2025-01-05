#include <stdio.h>

int main() 
{
    int array[1001] = {0};
    int count = 0;
    while (scanf("%d", &array[count]) == 1) 
    {
        getchar();
        count++;
    }
    int max=array[0],min = array[0];
    for(int i = 0; i < count; i++)
    {
        if(array[i] > max){max=array[i];}
        if(array[i] < min){min=array[i];}
    }
    printf("%d\n%d\n",count,max - min);

}