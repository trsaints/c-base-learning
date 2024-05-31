#include <stdio.h>
#include <string.h>

enum days
{
    mon,
    tue,
    wed,
    thu,
    fri,
    sat,
    sun
};

union day
{
    enum days day;
    char day_name[3];
    char date[10];
};

int main()
{
    printf("Possible ways of assigning a day to a union:\n");

    union day d1 = {day : mon};
    union day d2 = {day_name : "tue"};
    union day d3 = {date : "2021-01-01"};

    printf("Today is %d\n", d1.day);
    printf("OR Today is %s\n", d2.day_name);
    printf("OR Today is %s\n", d3.date);

    return 0;
}