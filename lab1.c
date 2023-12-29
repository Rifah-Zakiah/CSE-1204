#include<stdio.h>
int main ()
{
    printf("This is my first C Program\n");
    double id = 2252421024;
    char name[] = "Rifah";
    char dept[] ="CSE";
    char uni[] ="BUP";
    printf("My id is %.0lf.\nMy department is %s.\nMy university name is %s.\n", id, name, dept, uni);
    int a = 2, b = 6;
    printf("Sum is= %d\n", a+b);
    int c = 4, d = 5;
    printf("Product is= %d\n", c*d);
    int e = 8;
    printf("5+8 = %d\n", d+e);
    int x,y;
    printf("Enter two integers:\n");
    scanf("%d %d", &x, &y);
    printf("The two numbers entered by you is: %d and %d\n", x,y);
    printf("The sum of the two numbers entered by you is: %d\n", x+y);
    printf("The product of the two numbers entered by you is: %d\n", x*y);
    float m,n;
    printf("Enter two float numbers:\n");
    scanf("%f %f", &m, &n);
    printf("%f + %f = %f\n", m, n, m+n);

    return 0;
}
