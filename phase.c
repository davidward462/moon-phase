#include <stdio.h>
#include <time.h>

#define DEBUG

int main(int argc, char** argv)
{
    #ifdef DEBUG
    printf("debug mode\n\n");
    #endif

    // Program variables

    // duration of lunar cycle in days
    const long double lunarDays = 29.53058770576;

    // duration of lunar cycle in seconds
    long double lunarSeconds = lunarDays * (24 * 60 * 60);

    // set values for first new moon in 2000 (reference date)
    struct tm firstMoon;
    firstMoon.tm_year = 2000;
    firstMoon.tm_mon = 1;
    firstMoon.tm_mday = 6;
    firstMoon.tm_hour = 18;
    firstMoon.tm_min = 14;
    firstMoon.tm_sec = 0;

    #ifdef DEBUG
    printf("%.11Lf\n", lunarDays);
    printf("%.11LF\n", lunarSeconds);
    #endif
    

    // get the current time
    time_t t = time(NULL);
    struct tm ts = *localtime(&t);
    printf("%d-%02d-%02d %02d:%02d:%02d\n", ts.tm_year + 1900, ts.tm_mon + 1, ts.tm_mday, ts.tm_hour, ts.tm_min, ts.tm_sec);



    return 0;
}
