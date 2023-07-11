#include <stdlib.h>
#include <ctype.h>

double strToFloat(const char* str) {
    double value = 0.0;
    double fraction = 0.1;
    int sign = 1;
    int hasDecimal = 0;

    // Skip leading whitespace
    while (isspace(*str)) {
        str++;
    }

    // Check for optional minus sign
    if (*str == '-') {
        sign = -1;
        str++;
    }

    // Parse digits before decimal point
    while (isdigit(*str)) {
        value = value * 10 + (*str - '0');
        str++;
    }

    // Check for decimal point
    if (*str == '.') {
        hasDecimal = 1;
        str++;
    }

    // Parse digits after decimal point
    while (isdigit(*str)) {
        value += fraction * (*str - '0');
        fraction /= 10.0;
        str++;
    }

    // Apply sign and return value
    return sign * (hasDecimal ? value : value / 10.0);
}