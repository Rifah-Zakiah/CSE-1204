#include <stdio.h>
 
int sum (int n);
 
int main()
{
    int num, result;
 
    printf("Enter the number: ");
    scanf("%d", &num);
    result = sum(num);
    printf("Sum of digits in %d is %d\n", num, result);
    return 0;
}
 
int sum (int n)
{
    if (n != 0)
    {
        return (n % 10 + sum (n / 10));
    }
    else
    {
       return 0;
    }
}