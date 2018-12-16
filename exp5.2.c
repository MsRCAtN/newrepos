#include <stdio.h>
int main()
{
    int yyyy, mm, dd, days;
    scanf("%d-%d-%d", &yyyy, &mm, &dd);
    if (yyyy % 400 != 0 && yyyy % 4 != 0)
    {
        switch (mm)
        {
        case 1:
            days = 0;
            break;
        case 2:
            days = 31;
            break;
        case 3:
            days = 59;
            break;
        case 4:
            days = 90;
            break;
        case 5:
            days = 120;
            break;
        case 6:
            days = 151;
            break;
        case 7:
            days = 181;
            break;
        case 8:
            days = 212;
            break;
        case 9:
            days = 243;
            break;
        case 10:
            days = 273;
            break;
        case 11:
            days = 304;
            break;
        case 12:
            days = 334;
            break;
        }
    }
    else
    {
        switch (mm)
        {
        case 1:
            days = 0;
            break;
        case 2:
            days = 31;
            break;
        case 3:
            days = 60;
            break;
        case 4:
            days = 91;
            break;
        case 5:
            days = 121;
            break;
        case 6:
            days = 152;
            break;
        case 7:
            days = 182;
            break;
        case 8:
            days = 213;
            break;
        case 9:
            days = 244;
            break;
        case 10:
            days = 274;
            break;
        case 11:
            days = 305;
            break;
        case 12:
            days = 335;
            break;
        }
    }
    days = days + dd;
    printf("%i", days);
    return 0;
}