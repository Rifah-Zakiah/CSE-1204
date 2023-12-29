#include<stdio.h>
int main(){
//1. To print the input array in reverse order:
{
    int n;
    printf("Enter size of the array:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The array elemnets in reverse are:\n");
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }  
}
//2.To count the total number of duplicate numbers in the array:
{
    int n;
    printf("Enter size of the array:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int l = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    for (int i = 0; i < l; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            if(arr[i] == arr[j])
            count++;
        }
    }
    printf("The number of duplicate array element is %d.\n", count);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum = %d\n", sum);
    printf("Average is %d\n", sum / l);
}
//3. Maximum and minimum elements in an array:
{
    int n;
    printf("Enter size of the array:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int l = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0], min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }  
    }
    
    printf("Largest element of the array is %d\n", max);
    printf("Smallest element of the array is %d\n", min);
}
//4. Separate odd & even integer arrays from the input array:
{
    int n;
    printf("Enter size of the array:\n");
    scanf("%d", &n);
    int arr[n], arr1[n], arr2[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int j = 0, k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            arr1[j++] = arr[i];
            
        }
        else
        {
            arr2[k++] = arr[i];
            
        }
    }
    printf("\nThe Even elements are : \n");
    for(int i=0;i<j;i++)
    {
	printf("%d ",arr1[i]);
    }

    printf("\nThe Odd elements are :\n");
    for(int i=0;i<k;i++)
    {
	printf("%d ", arr2[i]);
    }
}

return 0;
}