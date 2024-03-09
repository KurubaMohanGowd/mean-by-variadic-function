#include <stdio.h>
#include <stdarg.h>

float average(int count, ...) {
    va_list args;
    float sum = 0;
    int i;

    va_start(args, count);
    for (i = 0; i < count; i++) {
        sum += va_arg(args, double);
    }
    va_end(args);

    return sum / count;
}

int main() {
    float num1 = 1.5, num2 = 2.5, num3 = 3.5, num4 = 4.5, num5 = 5.5;

    float mean = average(5, num1, num2, num3, num4, num5);
    printf("Average : %.2f\n", mean);

    return 0;
}
