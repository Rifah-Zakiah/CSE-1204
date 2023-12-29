#include<stdio.h>
int fib(int n);
int main(){
    int n;
    printf("Enter an integer:");
    scanf("%d", &n);
    printf("The %dth Fibonacci number is: %d", n, fib(n));
}
int fib(int n){
    if (n <= 1)
    {
        return n;
    }else
    {
        return fib(n - 1) + fib(n - 2);
    }
    
    
}