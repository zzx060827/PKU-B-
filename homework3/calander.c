#include <stdio.h>
int calculate_days(int year, int month, int day);

int main() 
{
    int syear, smonth, sday, eyear, emonth, eday,ds,de;
    scanf("%d %d %d", &syear, &smonth, &sday);
    scanf("%d %d %d", &eyear, &emonth, &eday);
    ds = calculate_days(syear, smonth, sday);
    de = calculate_days(eyear, emonth, eday);
    printf("%d\n", de - ds);

}

int calculate_days(int year, int month, int day)
{
    int mid_days = 0;
    for(int i = 0; i < year; i++)
    {
        if(i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
            mid_days += 366;
        else
            mid_days += 365;
    }
    for(int i = 1; i < month; i++)
    {
        if(i == 2)
        {
            if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
                mid_days += 29;
            else
                mid_days += 28;
        }
        else if(i == 4 || i == 6 || i == 9 || i == 11)
            mid_days += 30;
        else
            mid_days += 31;
    }
    mid_days += day;
    return mid_days;
}