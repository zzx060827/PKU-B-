#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int countDigits(double n) // to count the number of digits in a number
{
    if (n == 0) return 1;
    return (int)(log10(fabs(n))) + 1;
}

int main() 
{
    long x, digits; // input integer
    scanf("%d", &x);
    digits = countDigits(x); // count the number of digits in input integer
    int numbers[100] = {0}; // initialize an array to store the digits of input integer
    for(int i = 0; i < digits; i++) // check every digits of input integer and store them in array
    {
        int figure = 1;
        for(int j = 0; j < i + 1; j++)
        {
            figure *= 10; // calculate the place value of the current digit
        }
        numbers[i] = (x & figure )/ (figure / 10); // store every digit in array
    }  
    int sum = 0; 
    for(int i = 0; i < digits && numbers[i] != 0; i--) // print the array in reverse order
    {
        printf("%d", numbers[i]);  // print digits
        sum += numbers[i]; // summate the digits
        if(i != 0) // print "+" except after the last digit
            printf("+");
    }
    printf("=%d\n", sum); // print the sum of digits
    return 0; 
}