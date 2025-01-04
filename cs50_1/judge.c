#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("do you agree?");

    if (c == 'p' || c == 'y')
    {
        printf("agreed");
    }
    else if (c == 'N' || c == 'n')
    {
        printf("not agreed");
    }
    
}