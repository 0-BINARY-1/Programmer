#include<stdio.h>

int main()
{
    int h, m, s;
    printf("Enter the time in seconds: " );
    scanf("%d", &s);

    // Converting seconds to hours, minutes and seconds
    h = s/3600; // 1 hour = 3600 seconds
    m = (s%3600)/60; // 1 minute = 60 seconds
    s = (s%3600)%60; // Remaining seconds after extracting hours and minutes
    printf("Time in hours, minutes and seconds: %d:%d:%d\n", h, m, s);
    return 0;
}