//Swapping two numbers using pointer:
#include <stdio.h>
void swap(int *a, int *b);
int main(){
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    printf("Before Swapping, x = %d & y = %d\n", x, y);
    swap(&x, &y);
    printf("After swapping, x = %d & y = %d\n", x, y);

    return 0;
}
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
   }