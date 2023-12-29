//Addition of two matrices using pointers:
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter number of rows:\n");
    scanf("%d", &r);
    printf("Enter number of columns:\n");
    scanf("%d", &c);
    int first[r][c], second[r][c], sum[r][c];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", (*(first + i) + j));
        }
        
    }
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", (*(second + i) + j));
        }
        
    }
    printf("The required summation matrix is:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            *(*(sum + i) + j) = *(*(first + i) + j) + *(*(second + i) + j);
            printf("%d ", *(*(sum + i) + j));
        }
        printf("\n");
    }
    
    return 0;
    }