#include<stdio.h>
#include<math.h>
int armstrong(int n);
int main(){
    int n; 
    printf("Enter any number:\n");
    scanf("%d", &n);
    if (armstrong(n))
    {
        printf("Yes.\n");
    }else
    {
        printf("No.\n");
    }
    

}
int armstrong(int n){
    int d = 0, temp, rem;
    float sum = 0.0;
    for (int i = n; i != 0; d++)
    {
        i = i/10;
    }
    temp = n;
    while (temp > 0)
    {
        rem = temp%10;
        sum += pow(rem, d);
        temp = temp/10;
    }
    if ((int)sum == n)
    {
        return 1;
    }
    
    return 0;
}