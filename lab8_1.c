#include<stdio.h>
#include<string.h>
int main(){
//1. manually copy a string:
    char str1[100], str2[100];
    int i;
    printf("Enter a string 1:\n");
    fgets(str1, sizeof(str1), stdin);
    for(i = 0; str1[i] != '\0'; ++i){
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    printf("Copied string 2 is: %s\n", str2);
//2. manully find length of string:
    int j;
    for (j = 0; str1[j] != '\0'; ++j);//fgets is used that's why 1 more coming to the result.
    
    printf("Length of the string is %d\n", j-1);
    //printf("%d", strlen(str1));   
//3. manually reverse a string:
    printf("The reverse string is: ");
    for (int k = (strlen(str1) - 1); k >= 0; k--)
    {
        printf("%c", str1[k]);
    }
    // printf("\nThe reverse string is: ");
    // char str[] = "This is a string.";
    // int a = strlen(str);
    // for (int k = a - 1; k >= 0; k--)
    // {
    //     printf("%c", str[k]);   
    // }
       
    
    return 0;
}