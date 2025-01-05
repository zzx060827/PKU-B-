#include <stdio.h>

int calculate_days(int year, int month, int day);

int main() 
{
    int n;
    scanf("%d", &n); // 读取测试样本数量
    for(int i = 0; i < n; i++)
    {
        int hour, minute, second, year, month, day,sseconds;
        // 输入格式为 "hour:minute:second day.month.year"
        scanf("%d:%d:%d %d.%d.%d", &hour, &minute, &second, &day, &month, &year);

        // 计算从2000年1月1日到输入日期的总天数
        int total_days = calculate_days(year, month, day);
        
        // 计算总秒数，普通日历每一天86400秒（60*60*24）
        long long total_seconds = hour * 3600 + minute * 60 + second;

        // 计算特殊日历法的时间
        long long myear = total_days / 1000; // 特殊日历中年的计算
        long long mmonth = (total_days % 1000) / 100; // 特殊日历中月的计算
        long long mday = (total_days % 100); // 特殊日历中日的计算
        sseconds = total_seconds * 100000 / 86400; // 
        long long mhour = sseconds / 10000; // 特殊日历中时的计算
        long long mmin = (sseconds % 10000) / 100; // 特殊日历中分的计算
        long long msec = sseconds % 100; // 特殊日历中秒的计算
        
        // 输出结果，注意格式
        printf("%lld:%lld:%lld %lld.%lld.%lld\n", mhour, mmin, msec, mday + 1, mmonth + 1, myear);
    }

    return 0;
}

// 计算从2000年1月1日到给定日期的天数
int calculate_days(int year, int month, int day)
{
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int mid_days = 0;
    for(int i = 2000; i < year; i++)
    {
        if(i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
            mid_days += 366;
        else
            mid_days += 365;
    }
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        days_in_month[1] = 29; // February has 29 days in a leap year
    }
    for(int i = 1; i < month; i++)
    {
        mid_days += days_in_month[i - 1];
    }
    mid_days += day - 1;
    return mid_days;
}