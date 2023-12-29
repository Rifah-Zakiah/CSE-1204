#include<stdio.h>
void eoro(int n);
int main(){
    int n;
    printf("Enter an integer:");
    scanf("%d", &n);
    eoro(n);
}
void eoro(int n){
    if (n % 2 == 0)
    {
        printf("The number is even.");
    }else
    {
        printf("The number is odd.");
    }
    
    
}