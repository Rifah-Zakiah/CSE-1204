#include<stdio.h>
int strno(int n);
int fact(int n);
int main(){
    int s, e;
    printf("Enter start of interval:");
    scanf("%d", &s);
    printf("Enter end of the interval:");
    scanf("%d", &e);
    printf("The strong numbers from %d to %d is: ", s, e);
    while(s <= e)
    {
        if(strno(s))
        {
            printf(" %d  ", s);
        }
        s++;
    }   
}
int strno(int n){
    int s = 0, k, f;
    k = n%10;
    f = fact(k);
    s += f;
    n = n/10;
    if (s == n)
    {
        return 1;
    }else
    {
        return 0;
    }

}
int fact(int n){
    if (n < 1)
    {
        return 1;
    }else
    {
        return n * fact(n - 1);
    }
}
