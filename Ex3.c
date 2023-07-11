#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time elapsed_time(struct Time time1, struct Time time2) {
    struct Time result;

    int seconds1 = time1.hours * 3600 + time1.minutes * 60 + time1.seconds;
    int seconds2 = time2.hours * 3600 + time2.minutes * 60 + time2.seconds;
    int elapsed = seconds2 - seconds1;

    if (elapsed < 0) {
        elapsed += 24 * 3600;  // adjust for crossing midnight
    }

    result.hours = elapsed / 3600;
    elapsed %= 3600;
    result.minutes = elapsed / 60;
    result.seconds = elapsed % 60;

    return result;
}

int main() {
    struct Time time1 = { 3, 45, 15 };
    struct Time time2 = { 9, 44, 3 };

    struct Time elapsed = elapsed_time(time1, time2);
    printf("%d hours, %d minutes, %d seconds\n", elapsed.hours, elapsed.minutes, elapsed.seconds);

    return 0;
}