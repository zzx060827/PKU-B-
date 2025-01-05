#include<stdio.h>

int main()
{
    int court = 0; //judge
    int cour = 0;//court how many primes are there
    int a, b; //get two integer
    scanf("%d", &a);
    scanf("%d", &b);
    for(int i = a + 1; cour < b;i++)
    {
        for(int j = 2; j < i; j++)
        {
            if(i%j == 0)
            {
                court++;
                break;
            }
            else
            {
                court = 0;
            }
        }
        if(court == 0 && cour < b-1)
        {
            printf("%d ", i);
            cour++;
        }
        else if(court == 0 && cour == b-1)
        {
            printf("%d", i);
            cour++;
        }
    }


}