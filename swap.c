#include<stdio.h>
void swap(int *p, int *q);
int main(){
    int x , y;
    printf("Enter two integers:\n");
    scanf("%d", &x);
    scanf("%d", &y);
    printf("Before swapping, x = %d & y = %d", x, y);
    swap(&x, &y);\
    printf("\nAfter swapping, x = %d & y = %d", x, y);

    return 0;
}
void swap(int *p, int *q){
    int t;
    t = *p;
    *p = *q;
    *q = t;

}