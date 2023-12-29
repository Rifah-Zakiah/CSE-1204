#include<stdio.h>
int main(){
    int r1, c1, r2, c2;
    
    printf("Enter numbers of rows of first matrix:\n");
    scanf("%d", &r1);
    printf("Enter numbers of columns of first matrix:\n");
    scanf("%d", &c1);
    printf("Enter numbers of rows of second matrix:\n");
    scanf("%d", &r2);
    printf("Enter numbers of columns of second matrix:\n");
    scanf("%d", &c2);
    if (r2 != c1)
    {
        printf("The matrices cannot be multiplied.\n");
    }else
    {
        int m1[r1][c1], m2[r2][c2], m[r1][c2];
        printf("Enter elements of first matrix:\n");
        for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Enter elements of first matrix:\n");
        for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }
    printf("The product of the entered matrices:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            m[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                m[i][j] += m1[i][k] * m2[k][j];
            }
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    
    }
    
    return 0;
}
