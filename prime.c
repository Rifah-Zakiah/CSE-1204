#include<stdio.h>
#include<math.h>
int isPrime(int n);
void swap(int *p, int *q){
    int t;
    t = *p;
    *p = *q;
    *q = t;

}

int main(){
    int n = 66;
    if (isPrime(n))
    {
        printf("Yes.\n");
    }else
    {
        printf("No.\n");
    }
    //two find and print the primw numbers in a range:
    int x , y;
    printf("Enter two integers:\n");
    scanf("%d", &x);
    scanf("%d", &y);
    if (x > y)
    {
        swap(&x, &y);
    }
    int count = 0;
    for (int i = x + 1; i < y; i++)
    {
        if (isPrime(i))
        {
        printf("%d\t", i);
        count++;
        }
    }
    printf("\nThe number of prime numbers between %d and %d is %d.\n", x, y, count);
    
    return 0;
}
int isPrime(int n){
    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    
    return 1;
}