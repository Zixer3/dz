#include <stdio.h>
const int year = 365;
const int day = 24;
const int hour = 3600;

int main() {

    int godiki = 18;
    printf("Тики: %d|Часы: %d|Дни: %d|Годы: %d \n", godiki * year * day * hour, godiki * year * day, godiki * year, godiki);
    return 0;
}