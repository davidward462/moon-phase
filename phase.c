#include <stdio.h>
#include <time.h>

#define DEBUG

int main(int argc, char** argv)
{
    #ifdef DEBUG
    printf("debug mode\n\n");
    #endif

    // duration of lunar cycle
    const long double lunarDays = 29.53058770576;
    long double lunarSeconds = lunarDays * (24 * 60 * 60);

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
