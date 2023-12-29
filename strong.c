#include<stdio.h>
int fact(int n);
int strong(int n);

int main(){
    int n; 
    printf("Enter any number:\n");
    scanf("%d", &n);
    if (strong(n))
    {
        printf("Yes.\n");
    }else
    {
        printf("No.\n");
    }
    
    return 0;
}
int fact(int n){
    if (n >= 1)
    {
        return n*fact(n - 1);
    }
    return 1;
}
int strong(int n){
    int rem, temp, sum = 0;
    temp = n;
    while (temp > 0)
    {
        rem = temp % 10;
        sum += fact(rem);
        temp /= 10;
    }
    if (n == sum)
    {
        return 1;
    }
    
    return 0;
}