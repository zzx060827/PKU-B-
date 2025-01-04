#include <stdio.h>
#include <string.h>

int main() 
{
    int n;scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        char p1[10],p2[10];
        scanf("%s %s", p1, p2);
        if(strcmp(p1, "Rock") == 0 && strcmp(p2, "Scissors") == 0)
            {printf("Player1\n");}
        else if(strcmp(p1, "Scissors") == 0 && strcmp(p2, "Rock") == 0)
            {printf("Player2\n");}
        else if(strcmp(p1, "Rock") == 0 && strcmp(p2, "Paper") == 0)
            {printf("Player2\n");}
        else if(strcmp(p1, "Paper") == 0 && strcmp(p2, "Rock") == 0)
            {printf("Player1\n");}
        else if(strcmp(p1, "Scissors") == 0 && strcmp(p2, "Paper") == 0)
            {printf("Player1\n");}
        else if(strcmp(p1, "Paper") == 0 && strcmp(p2, "Scissors") == 0)
            {printf("Player2\n");}
            else{printf("Tie\n");}

    }
}