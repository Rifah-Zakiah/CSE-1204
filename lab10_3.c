//searching an element in an array using ponters:
#include <stdio.h>
void search(int *n, int *a, int *m);
int main(){
    int m, n, *pn, *pm, *pa;
    pn = &n;
    pm = &m;
    printf("Enter size of the array: ");
    scanf("%d", pn);
    int arr[n];
    pa = arr;
    printf("Enter elements of array: ");
    for (int i = 0; i < *pn; i++)
    {
        scanf("%d", pa + i);
    }
    printf("Enter element to be searched: ");
    scanf("%d", pm);
    search(pn, pa, pm);

    return 0;
}
void search(int *n, int *a, int *m){
    int f = 0;
    for (int i = 0; i < *n; i++)
    {
        if (*(a + i) == *m)
        {
            f = 1;
            break;
        }else
        {
            continue;
        }
    }
    if (f == 1)
        {
            printf("%d exists in the array", *m);
        }else
        {
            printf("%d does not exist in the array", *m);
        }

}