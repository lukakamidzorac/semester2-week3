#include <stdio.h>

/*
 * Example using different variable types
 */

int main(void) {

    // 1) the hour hand of a clock (1..12)
    unsigned char hour_hand = 10;
    printf("1) Clock hour hand: %u\n", hour_hand);

    // 2) the total population of a country (e.g. ~1.4 billion)
    unsigned int country_population = 1412000000U;
    printf("2) Country population: %u\n", country_population);

    // 3) number of minutes between a given date/time and now (negative or positive)
    long long minutes_from_now = -123456789LL;
    printf("3) Minutes from now: %lld\n", minutes_from_now);

    // 4) mean temperature in Leeds over one year
    double leeds_mean_temp_c = 10.42;
    printf("4) Leeds mean temperature: %.2f C\n", leeds_mean_temp_c);

    // 5) precise GPS location (use double precision)
    double gps_lat = 53.8008000;
    double gps_lon = -1.5491000;
    printf("5) GPS location: lat=%.7f, lon=%.7f\n", gps_lat, gps_lon);

    // 6) pi to 12 decimal places
    long double pi_12dp = 3.141592653589L;
    printf("6) Pi (12 d.p.): %.12Lf\n", pi_12dp);

    return 0;
}
