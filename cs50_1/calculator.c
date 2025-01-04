#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int x = get_int("what is x?\n");
    int y = get_int("what is y?\n");

    printf("x plus y is %i\n", x + y);
}