#include<stdio.h>
int isPal(int n);
void swap(int *p, int *q){
    int t;
    t = *p;
    *p = *q;
    *q = t;

}

int main(){
    int n = 126;
    if (isPal(n))
    {
        printf("Yes.\n");
    }else
    {
        printf("No.\n");
    }
    int x, y;
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
        if (isPal(i))
        {
        printf("%d\t", i);
        count++;
        }
    }
    printf("\nThe number of palindrome between %d and %d is %d.\n", x, y, count);
    
    return 0;
}
int isPal(int n){
    int temp = n, sum = 0, rem;
    while (n > 0)
    {
        rem = n % 10;
        sum = (sum*10) + rem;
        n = n/10;
    }
    if (sum == temp)
    {
        return 1;
    }
    
    return 0;
}