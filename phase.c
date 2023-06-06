#include <stdio.h>
#include <time.h>

#define DEBUG

int main(int argc, char** argv)
{
    #ifdef DEBUG
    printf("debug mode\n\n");
    #endif

    // Program variables

    enum phase
    {
        new,
        waxingCr,
        firstQu,
        waxingGib,
        full,
        waningGib,
        lastQu,
        waningCr,
        secondNew,
    };

    enum phase currentPhase = new;

    // duration of lunar cycle in days
    const long double lunarDays = 29.53058770576;

    // duration of lunar cycle in seconds
    long double lunarSeconds = lunarDays * (24 * 60 * 60);

    // Moon phase names
    long double newMoon = 0.0;
    long double firstQuarter = 7.38264692644;
    long double fullMoon = 14.76529385288;
    long double lastQuarter = 22.14794077932;


    // set values for first new moon in 2000 (reference date)
    struct tm firstMoon;
    firstMoon.tm_year = 2000;
    firstMoon.tm_mon = 1;
    firstMoon.tm_mday = 6;
    firstMoon.tm_hour = 18;
    firstMoon.tm_min = 14;
    firstMoon.tm_sec = 0;

    
    /**
    phaseArray  = (
    [0, 1]
    [1, 6.38264692644]
    [6.38264692644, 8.38264692644]
    [8.38264692644, 13.76529385288]
    [13.76529385288, 15.76529385288]
    [15.76529385288, 21.14794077932]
    [21.14794077932, 23.14794077932]
    [23.14794077932, 28.53058770576]
    [28.53058770576, 29.53058770576]
    **/    

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
