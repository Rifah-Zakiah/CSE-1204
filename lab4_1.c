#include<stdio.h>
int main(){
//1. vowel or consonant?
    char a;
    printf("Enter any letter in English alphabet:\n");
    scanf("%c", &a);
    switch (a)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':    
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':    
    case 'U':
        printf("Vowel!\n");
        break;
    default:
    printf("Consonant!\n");
        break;
    }
   
}