#include<stdio.h>
int fib(int n);

int main(){
    int n;
    printf("Enter any number:\n");
    scanf("%d", &n);
    printf("The %dth fibonacci elements is %d.\n", n, fib(n));
    printf("The fibonacci series with %d element is:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fib(i));
    }
    
    return 0;
}
int fib(int n){
    if (n <= 1)
    {
        return n;
    }
    return (fib(n - 1) + fib(n - 2));
}