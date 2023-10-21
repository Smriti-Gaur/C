#include <stdio.h>

float celsiusToFahrenheit(float celsius);

int main() {
    float celsius, fahrenheit;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsiusToFahrenheit(celsius);

    printf("The temperature in Fahrenheit is: %.2f\n", fahrenheit);
    return 0;
}

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}
