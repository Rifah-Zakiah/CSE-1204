
#include<stdio.h>
#include<math.h>
int main(){
//1. To check if input number is  prime or not:
    int n, flag = 0;
    printf("Enter an integer:\n");
    scanf("%d", &n);
    if (n == 0 || n == 1)
        flag = 1;
// 0 and 1 are not prime numbers
// change flag to 1 for non-prime number
    for (int i = 2; i <= sqrt(n); i++)
    {
    // if n is divisible by i, then n is not prime
    // change flag to 1 for non-prime number
        if ( n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    // flag is 0 for prime numbers
    if (flag == 0)
    {
        printf("%d is a prime number.\n", n);
    }else
        printf("%d is not a prime number.\n", n);
//2. Fibonacci series:
    int n1 = 0, n2 = 1, n3, num;
    printf("Enter an integer:\n");
    scanf("%d", &num);
    printf("%d\t%d", n1, n2);
    for (int i = 2; i <= num; i++)
    {
        n3 = n1 + n2;
        printf("\t%d", n3);
        n1 = n2;
        n2 = n3;
    }
    
     
    return 0;
} 