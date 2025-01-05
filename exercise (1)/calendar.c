#include<stdio.h>

int main()
{
    for(;;)
    {
        int days = 0;
        scanf("%d", &days);
        if(days == -1)
        {
            return 0;
        }
        int day = 1, year = 2000; // 从2000年1月1日开始
        int count = 6; // 从2000年1月1日开始计算，这一天是周六，所以初始值为6
        int month = 1;
        
        // 计算星期几
        count = (count + days ) % 7; // 从2000年1月1日加上输入的天数，计算星期几
        
        // 计算经过的年份
        while(days >= 365)
        {
            if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) // 判断是否为闰年
            {
                if(days >= 366) // 如果剩余天数大于等于366，减去366天
                {
                    days -= 366;
                }
                else // 如果不足366天，退出循环
                {
                    break;
                }
            }
            else // 平年
            {
                if(days >= 365) // 如果剩余天数大于等于365，减去365天
                {
                    days -= 365;
                }
                else // 如果不足365天，退出循环
                {
                    break;
                }
            }
            year++; // 增加年份
        }
        
        // 计算月份和日期
        while(days > 0)
        {
            int daysInMonth;
            // 根据月份和是否为闰年确定这个月有多少天
            if(month == 2)
            {
                if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                {
                    daysInMonth = 29;
                }
                else
                {
                    daysInMonth = 28;
                }
            }
            else if(month == 4 || month == 6 || month == 9 || month == 11)
            {
                daysInMonth = 30;
            }
            else
            {
                daysInMonth = 31;
            }

            if(days >= daysInMonth) // 如果剩余天数大于这个月的天数，减去这个月的天数
            {
                days -= daysInMonth;
                month++; // 增加月份
                if(month > 12) // 如果月份超过12，重置为1月，并增加年份
                {
                    month = 1;
                    year++;
                }
            }
            else // 如果剩余天数小于这个月的天数，计算日期
            {
                day += days; // 计算日期
                break;
            }
        }

        // 输出结果
        char* weekDays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        printf("%d-%02d-%02d %s\n", year, month, day, weekDays[count]);
    }
    
    return 0;
}