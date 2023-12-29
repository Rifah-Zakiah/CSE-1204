//3. Grading system:
#include<stdio.h>
int main(){
    int score;
    printf("Enter score(1-100):\n");
    scanf("%d", &score);
    if (score>100)
    {
        printf("Not a valid score.\n");
    }else
    {
    switch (score/10) //This will provide a smaller range for calculation.
    {
    case 10:
    case 9: 
    //Here both the cases are written bcz it will yield the same grade;
        printf("Grade:A.\n");
        break;
     case 8: 
        printf("Grade:B.\n");
        break;
     case 7: 
        printf("Grade:C.\n");
        break;
     case 6: 
        printf("Grade:D.\n");
        break;
     case 5: 
        printf("Grade:E.\n");
        break;
    default:
        printf("Grade:F.\n");
        break;
    }
    }
    
    
    
} 