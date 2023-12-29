#include<stdio.h>
int main (){
    int h, w;
    printf("Enter height of rectangle:\n");
    scanf("%d", &h);
    printf("Enter width of rectangle:\n");
    scanf("%d", &w);
    printf("Area of the rectangle is: %d\n", h*w);
    int s;
    printf("Enter side of square:\n");
    scanf("%d", &s);
    printf("Area of the square is: %d\n", s*s);
    float C;
    printf("Enter temperature in Celsius:\n");
    scanf("%f", &C);
    printf("Temperature in Fahrenheit is: %.2f\n", (1.8*C)+32);
}