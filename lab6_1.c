//Functions
#include <stdio.h>
//Function can be written without prototype:
int add(int a, int b){//call by value = only A COPY OF THE ARGUMENTS will be passed
    a++; b++;//After entering the function the values of the 
    return a+b;
}
int main(){
    int x = 5, y =6;
    printf("Sum in function= %d", add(x,y));


}