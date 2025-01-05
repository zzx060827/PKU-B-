#include <stdio.h>

    int main()
{
    int a, b, c, d, e, f, septinary, novenary, decimalism, intermediate, input;
    scanf("%d", &input);
    for(int i=100;i<1000;i++)
    {
        intermediate = i;
        c = i % 7; //this is the last digit
        i /= 7;
        b = i % 7; //middle digit
        i /= 7;
        a = i % 7; //first digit
        i = intermediate;
        f = i % 9;
        i /= 9;
        e = i % 9;
        i /= 9;
        d = i % 9;
        if(a == f && b == e && c == d)
        {
            septinary = a*100 + b*10 + c;
            novenary = d*100 + e*10 + f;
            decimalism = a*49 + b*7 + c;
            break;
        }
        i = intermediate;
    }
    if(input == 1)
    { 
        printf("%d\n", decimalism);
    }
    else if(input == 2)
    { 
        printf("%d\n", septinary);
    }
    else
    {
        printf("%d\n", novenary);
    }
}
