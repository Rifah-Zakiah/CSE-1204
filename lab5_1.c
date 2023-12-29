#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows:\n");
    scanf("%d", &n);
//1. Square star box with n rows:
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
//2. Right trangle with n rows:
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
             printf("*");
        }
         printf("\n");
    }
//3. Inverted right triangle:
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
             printf("*");
        }
         printf("\n");
    }
//4. Left triangle with n rows:
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i ; j++)
        {
            printf(" ");
        }
        for (int j = i; j >= 0; j--)
        {
             printf("*");
        }
         printf("\n");   
    }
//5.
    for(int i=n; i>0; i--){
    for(int j=(n-i); j>0; j--){
        printf(" ");
    }
    for(int j=0; j<i; j++){
        printf("*");
    }
    printf("\n");
   }
//6.
   int m;
   m=n;
   for(int i=0; i<n; i++){
    for(int j=0; j<m-1; j++){
        printf(" ");
    }
    for(int k=0; k<2*i-1;k++){
        printf("*");
    }
    m--;
    printf("\n");
   }
//7.
   for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
        printf("%d", j);
    }
    printf("\n");
   }
//8.
    int num=1;
    for(int i=1; i<=n; i++){
    for(int j=1; j<=i; ++j){
        printf("%d", num);
        ++num;
    }
    printf("\n");
   }
//9.
   int static numb=0;
   for(int i=1; i<=n; i++){
        numb++;
    for(int j=1; j<=i; ++j){
        printf("%d", numb);

    }
    printf("\n");
   }   
    
    
return 0;
}