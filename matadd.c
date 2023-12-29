#include<stdio.h>
int main(){
    int r, c;
    printf("Enter numbers of rows:\n");
    scanf("%d", &r);
    printf("Enter numbers of columns:\n");
    scanf("%d", &c);
    int a[r][c], b[r][c];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("The sum of the entered matrices:\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }

}