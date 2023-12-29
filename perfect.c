#include<stdio.h>
int isPerfect(int n);
void swap(int *p, int *q){
    int t;
    t = *p;
    *p = *q;
    *q = t;

}

int main(){
    int n = 6;
    if (isPerfect(n))
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
        if (isPerfect(i))
        {
        printf("%d\t", i);
        count++;
        }
    }
    printf("\nThe number of perfect numbers between %d and %d is %d.\n", x, y, count);
    
    return 0;
}
int isPerfect(int n){
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if ((n % i) == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
    {
        return 1;
    }

    return 0;
}