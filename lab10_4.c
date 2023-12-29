//Maximum and minimum element in an array using pointer:
#include <stdio.h>
int main(){
    int n, *pn, *pa;
    pn = &n;
    printf("Enter size of the array:\n");
    scanf("%d", pn);
    int arr[n];
    pa = arr;
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < *pn; i++)
    {
        scanf("%d", (pa + i));
    }
    int l = sizeof(arr)/sizeof(pa);
    int max = *pa, min = *pa;
    for (int i = 0; i < *pn; i++)
    {
        if (*(pa + i)> max)
        {
            max = *(pa + i);
        }    
        if (*(pa + i) < min)
        {
            min = *(pa + i);
        }  
    }
    
    printf("Largest element of the array is %d\n", max);
    printf("Smallest element of the array is %d\n", min);
} 