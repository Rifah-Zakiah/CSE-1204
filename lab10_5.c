//Decimal to binary number system using pointer:
#include <stdio.h>

int main() {
    int arr[100], i, n, *pa, *pn;
    pn = &n;
    pa = arr;
    printf("Enter number to convert to binary: ");
    scanf("%d", pn);
    printf("\nThe binary of %d is: ", *pn);

    for (i = 0; n > 0; i++)
    {
        *(pa + i) = n%2;
        n = n/2;
    }

    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", *(pa + i));
    }
    
    return 0;
}