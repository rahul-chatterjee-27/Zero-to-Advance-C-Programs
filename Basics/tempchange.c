#include <stdio.h>

int main() {
    float c, f;

    printf("Enter temperature in °C: ");
    scanf("%f", &c);

    f = ((9*c)/5)+32;
    printf("Converted to °F: %.2f\n", f);

    c = ((f-32)*5)/9;
    printf("Converted back to °C: %.2f\n", c);

    return 0;
}
