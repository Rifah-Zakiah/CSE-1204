#include <stdio.h>
int main(){
//1. Multiplication table:
    int a;
    printf("Enter any number:\n");
    scanf("%d", &a);
    printf("The table of %d:\n", a);
    for (int i = 0; i <= 10; i++)
    {
        printf("%d * %d = %d.\n", a, i, a*i);
    }
//2. Factorial:
    int b, f = 1;
    printf("Enter another number:\n");
    scanf("%d", &b);
    for (int i = 1; i <= b; i++)
    {
        f = f*i;
    }   
    printf("The factorial of %d: %d\n", b, f);
//3. Summation of all the square terms up to n; 1^2+2^2+....+n^2:
    int n, s = 0;
    printf("Enter another number:\n");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        s = s + i*i;
    }
    printf("The summation of the squares upto %d: %d\n", n, s);
//4. Summation of factorials; 1! + 2! + .... + m!:
    int m, S= 0, F = 1;
    printf("Enter another number:\n");
    scanf("%d", &m);
    for (int i = 1; i <= m; i++)
    {
        F = F*i;
        S = S + F;
    }
    printf("The summation of the factorial upto %d: %d\n", m, S);
//5. Print the input number in reverse order:
    int c;
    printf("Enter any number:\n");
    scanf("%d", &c);
    for (int i = c; i >= 0; --i)//Here --i or i-- both can be used; gives the same output;
    {
        printf("%d\t", i);
    }
    printf("\n");
//5. Reverse a number in the terminal:
    int num, rev = 0, rem;
    printf("Enter any number:\n");
    scanf("%d", &num);
    for (; num != 0; num = num/10)
    {
        rem = num % 10;
        rev = rev*10 + rem;
       
    }
    printf("The number in reverse is %d", rev);
    

    return 0;
}