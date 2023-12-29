#include<stdio.h>
int main(){
    int n, temp, sum = 0, rem;
    printf("Enter any number:\n");
    scanf("%d", &n);
    temp = n;
    while (temp > 0)
    {
        rem = temp % 10;
        sum = (sum*10) + rem;
        temp = temp / 10;
    }
    printf("The reverse of %d is %d.\n", n, sum);
    
    return 0;
}