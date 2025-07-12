#include <stdio.h>

int main() {
    int day_int, year, month, day;
    int original_days;

    printf("Enter the total number of days: ");
    scanf("%d", &day_int);

    original_days = day_int;  

    year = day_int / 365;
    day_int = day_int % 365;

    month = day_int / 30;
    day = day_int % 30;

    printf("%d Days = %d Year(s), %d Month(s), %d Day(s)\n", original_days, year, month, day);
    return 0;
}
