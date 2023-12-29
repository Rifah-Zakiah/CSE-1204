#include<stdio.h>
int main(){
    //1. To check an integer if positive, negative or zero:
    int n;
    printf("Enter any number:\n");
    scanf("%d", &n);
    if(n>0){
        printf("Number is positive.\n");
    }else if(n<0){
        printf("Number is negative.\n");
    }else{
        printf("Number is zero.\n");
    }
//2. To check divisibility by 5 and 11:
    int m; 
    printf("Enter any number:\n");
    scanf("%d", &m);
    if (m%5 == 0 && m%11 == 0)
    {
        printf("Number is divisible by 5 and 11.\n");
    }else
    {
        printf("Number is not divisible by 5 and 11.\n");
    }
//3. Even or Odd:
    int p; 
    printf("Enter any number:\n");
    scanf("%d", &p);
    if (p%2 == 0)
    {
        printf("Number is even.\n");
    }else
    {
        printf("Number is odd.\n");
    }
//4. Leap year:
    int yr; 
    printf("Enter any year:\n");
    scanf("%d", &yr);
    if (yr%4 == 0 || yr%400 == 0)
    {
        printf("Leap year!\n");
    }else
    {
        printf("Not leap year.\n");
    }
//5. Week number to week day:
    int w; 
    printf("Enter any day of the week (1-7):\n");
    scanf("%d", &w);
    switch (w)
    {
    case 1:
        printf("Sunday!\n");
        break;
    case 2:
        printf("Monday!\n");
        break;
    case 3:
        printf("Tuesday!\n");
        break;
    case 4:
        printf("Wednesday!\n");
        break;
    case 5:
        printf("Thursday!\n");
        break;
    case 6:
        printf("Friday!\n");
        break;
    case 7:
        printf("Saturday!\n");
        break;
    default:
    printf("Not a day!");
        break;
    }  
//6. Validity of angles triangle:
    int x, y, z;
    printf("Enter first angle:\n");
    scanf("%d", &x);
    printf("Enter second angle:\n");
    scanf("%d", &y);
    printf("Enter third angle:\n");
    scanf("%d", &z);    
    if (x+y+z == 180)
    {
        printf("Valid angles in a triangle.");
    }else
    {
        printf("Not valid angles in a triangle.");
    }
//7. Validity of sides in a triangle:
    int a, b, c;
    printf("Enter first side:\n");
    scanf("%d", &a);
    printf("Enter second angle:\n");
    scanf("%d", &y);
    printf("Enter third angle:\n");
    scanf("%d", &z);      
     
}