#include<stdio.h>
int main(){
    int r, c;
    
    printf("Enter numbers of rows:\n");
    scanf("%d", &r);
    printf("Enter numbers of columns:\n");
    scanf("%d", &c);
    printf("Enter elements:\n");
    int a[r][c], t[c][r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            t[j][i] = a[i][j];
        }
        
    }
    printf("The transpose of the entered matrix:\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
}