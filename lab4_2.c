#include<stdio.h>
int main(){
    //2. operator and calculator:
    char op;
    int m, n;
    
    printf("Enter an arithmatic operator:\n");
    scanf("%c", &op);
    printf("Enter first operand:\n");
    scanf("%d", &n);
    printf("Enter second operand:\n");
    scanf("%d", &m);
   
    switch (op)
    {
    case '+':
        printf("Sum is %d.\n", m+n);
        break;
    case '-':
        printf("Difference is %d.\n", m-n);
        break;
    case '*':
        printf("Product is %d.\n", m*n);
        break;
    case '/':
        printf("Quotient is %d.\n", m/n);
        break;
    case '%':
        printf("Remainder is %d.\n", m%n);
        break;
    default:
        printf("Error! Not an arithmatic operator.\n");
        break;
    }

}