#include<stdio.h>

int main(void)
{
    for(;;)
    {
    char p;
    int h;
    int w;
    int x;  //determine whether the triangle is soild or not.
    scanf("%i",&h);
    if(h == 0)
    {
        return 0;
    }
    scanf("%i",&w);
    scanf(" %s",&p);
    scanf("%i",&x);
    if(h > 0 && x == 1)
    {
        for(int j = 0; j < h; j++)
        {
           for(int i = 0; i < w; i++)
        {
            printf("%s",&p);
        } 
        printf("\n");
        }
        
    }

    if(h > 0 && x == 0)
    {
        for(int i = 0; i < w; i++)  //to draw the first line
        {
            printf("%s",&p);
        } 
        printf("\n");
        for(int j = 2; j < h; j++)
        {
            printf("%s",&p);
           for(int i = 2; i < w; i++) //to draw the blank
        {
            printf(" ");
        } 
        printf("%s",&p);
        printf("\n");
        }
        for(int i = 0; i < w; i++)  //to draw the last line
        {
            printf("%s",&p);
        } 
        printf("\n");

    }

    }

}