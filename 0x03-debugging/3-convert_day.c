#include "main.h"

/**
* convert_day - converts day of month to day of year, without accounting
* for leap year
* @month: month in number format
* @day: day of month
* Return: day of year
*/
int convert_day(int month, int day, int year)
{
int i;
int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int leap_year = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));

    if (leap_year && month > 2)
    {
        day++;
    }

    for (int i = 1; i < month; i++)
    {
        day += days_in_month[i];
    }

    return (day);
}
