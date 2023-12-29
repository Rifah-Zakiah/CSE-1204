#include <stdio.h>
double pwr(double base, int exp);
int main()
{
    double base, power;
    int exp;
    
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);
    
    power = pwr(base, exp); 
    
    printf("%.2lf ^ %d = %f", base, exp, power);
    
    return 0;
}


double pwr(double base, int exp)
{
    if(exp == 0)
        return 1;
    else if(exp > 0)
        return base * pwr(base, exp - 1);
    else
        return 1 / pwr(base, -exp);
}