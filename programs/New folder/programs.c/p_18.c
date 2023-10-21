#include <stdio.h>

float Celciustofahrenheit(float celcius);

int main() {
    float celcius,fahrenheit;
    printf("Enter the value of celcius\n");
    scanf("%f", &celcius);

    fahrenheit = Celciustofahrenheit(celcius);

    printf("The value of fahrenheit is %.2f\n", fahrenheit);
    return 0;
}

float Celciustofahrenheit(float celcius){
    return (celcius*9/5)+32;
}
