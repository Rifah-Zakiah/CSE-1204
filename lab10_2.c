//printing alphabets using pointers:
#include <stdio.h>
int main(){
    char alph[27];
    char *ptr;
    ptr = alph;
    for (int i = 0; i < 26; i++)
    {
        *ptr = i + 'a';
        ptr++;
    }
    ptr = alph;
    printf("The alphabets are: ");
    for (int i = 0; i < 26; i++)
    {
        printf("%c ", *ptr);
        ptr++;
    }
    
    return 0;
}