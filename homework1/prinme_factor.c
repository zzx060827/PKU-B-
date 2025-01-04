#include <stdio.h>

int main() 
{
    int m,court;
    int itself = 0;
    scanf("%d", &m);
    if(m == 2)
    {
        printf("2\n");
        return 0;
    }
    for (int i = 2; i < m; i++) 
    {
        court = 0;
        if (m % i == 0 )
        {
            for(int j = 2; j < i; j++)
            {
                if(i % j == 0)
                {
                    court++;
                    break;
                }
                
            }
            if(court == 0)
            {
                printf("%d\n", i);
            }
            
        } 
        else
        {
             itself++;
        }
        if(itself == m-2)
        {
            printf("%d\n", m);
        }
    }
        
}