#include <stdio.h>

int main() 
{
    int fee[5]={0};
    int sum=0;
    for(int i = 0; i < 5; i++)
    {    
        scanf("%d", &fee[i]);

    }
      for(int i = 0; i < 5; i++)
    {    int count = 0;
        for(int j = 0; j < 5; j++)
        {
            if(fee[i]>fee[j])
            {count++;}
        }
        if(count > 1){sum+=fee[i];}
    }
    printf("%d", sum);
}