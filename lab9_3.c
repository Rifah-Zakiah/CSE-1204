#include<stdio.h>
int prfctno(int n);
int main(){
    int s, e;
    printf("Enter start of interval:");
    scanf("%d", &s);
    printf("Enter end of the interval:");
    scanf("%d", &e);
    printf("The perfect numbers from %d to %d is: ", s, e);
    while(s <= e)
    {
        if(prfctno(s))
        {
            printf(" %d  ", s);
        }
        s++;
    }   
}
int prfctno(int n){
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        } 
    }
    if (sum == n)
    {
        return 1;
    }else
    {
        return 0;
    }
}