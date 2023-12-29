#include<stdio.h>
int gcd(int a, int b);
int main(){
    int x, y;
    printf("Enter two integers:\n");
    scanf("%d", &x);
    scanf("%d", &y);
    printf("GCD OF %d and %d is %d\n", x, y, gcd(x,y));
    printf("LCM OF %d and %d is %d\n", x, y, (x*y)/gcd(x,y));
    
    return 0;
}
int gcd(int a, int b){
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a%b);
}