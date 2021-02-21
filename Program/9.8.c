#include<stdio.h>

enum DAY {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};

int main()
{
    enum DAY today;
    today = WEDNESDAY;

    switch(today)
    {
    case SUNDAY:
        printf("Today is Sunday. It is work day\n");
        break;

    case MONDAY:
        printf("Today is Monday. It is work day\n");
        break;

    case TUESDAY:
        printf("Today is Tuesday. It is work day\n");
        break;

    case WEDNESDAY:
        printf("Today is Wednesday. It is work day\n");
        break;
    case THURSDAY:
        printf("Today is Thursday. It is work day\n");
        break;
    case FRIDAY:
        printf("Today is Friday, today is holiday\n");
        break;
    case SATURDAY:
        printf("Today is Saturday, today is holiday\n");
        break;
    default:
        printf("This data is not valid.\n");
    }
    return 0;
}
