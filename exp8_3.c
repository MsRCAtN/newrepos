#include "stdio.h"
#include "string.h"
typedef struct Date
{
    int year;
    int month;
    int day;
} Date;
int checkDate(Date date)
{
    if (date.year % 400 == 0 && date.year % 100 == 0)
    {
        switch (date.month)
        {
        case 1:
            if (date.day < 32 && date.day > 0)
                return 1;
            else
                return 0;
            break;
        case 2:
            if (date.day < 30 && date.day > 0)
                return 1;
            else
                return 0;
            break;
        case 3:
            if (date.day < 32 && date.day > 0)
                return 1;
            else
                return 0;
            break;
        case 4:
            if (date.day < 31 && date.day > 0)
                return 1;
            else
                return 0;
            break;
        case 5:
            if (date.day < 32 && date.day > 0)
                return 1;
            else
                return 0;
            break;
        case 6:
            if (date.day < 31 && date.day > 0)
                return 1;
            else
                return 0;
            break;
        case 7:
            if (date.day < 32 && date.day > 0)
                return 1;
            else
                return 0;
            break;
        case 8:
            if (date.day < 32 && date.day > 0)
                return 1;
            else
                return 0;
            break;
        case 9:
            if (date.day < 31 && date.day > 0)
                return 1;
            else
                return 0;
            break;
        case 10:
            if (date.day < 32 && date.day > 0)
                return 1;
            else
                return 0;
            break;
        case 11:
            if (date.day < 31 && date.day > 0)
                return 1;
            else
                return 0;
            break;
        case 12:
            if (date.day < 32 && date.day > 0)
                return 1;
            else
                return 0;
            break;
        default:
            return 0;
        }
    }

    else if (date.year % 4 != 0)
    {
        switch (date.month)
        {
        case 1:
            if (date.day < 32 && date.day > 0)
                return 1;
            else
                return 0;
            break;
        case 2:
            if (date.day < 29 && date.day > 0)
                return 1;
            else
                return 0;
            break;
        case 3:
            if (date.day < 32 && date.day > 0)
                return 1;
            else
                return 0;
            break;
        case 4:
            if (date.day < 31 && date.day > 0)
                return 1;
            else
                return 0;
            break;
        case 5:
            if (date.day < 32 && date.day > 0)
                return 1;
            else
                return 0;
            break;
        case 6:
            if (date.day < 31 && date.day > 0)
                return 1;
            else
                return 0;
            break;
        case 7:
            if (date.day < 32 && date.day > 0)
                return 1;
            else
                return 0;
            break;
        case 8:
            if (date.day < 32 && date.day > 0)
                return 1;
            else
                return 0;
            break;
        case 9:
            if (date.day < 31 && date.day > 0)
                return 1;
            else
                return 0;
            break;
        case 10:
            if (date.day < 32 && date.day > 0)
                return 1;
            else
                return 0;
            break;
        case 11:
            if (date.day < 31 && date.day > 0)
                return 1;
            else
                return 0;
            break;
        case 12:
            if (date.day < 32 && date.day > 0)
                return 1;
            else
                return 0;
            break;
        default:
            return 0;
        }
    }
}
int main(int argc, char const *argv[])
{
    Date date;
    printf("Enter a date.\nFormat:yyyy mm dd\n");
    scanf("%d %d %d", &date.year, &date.month, &date.day);
    if (checkDate(date))
    {
        printf("This is a illegal date,please check your input again\n");
    }
    else
    {
        printf("Right input");
    }
    return 0;
}