#include<stdio.h>
void sp_to_star(char *str);
int main(){
     sp_to_star("This is a test.");

     return 0;
}
void sp_to_star(char *str){
    while (*str)
    {
        if (*str == ' ')
        {
            printf("%c", '*');
        }else
        {
            printf("%c", *str);
        }
        str++;
    }  
}