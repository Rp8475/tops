// PROGRAM 27 : CONVERT DAYS INTO MONTH - (START) -------------------->

#include<stdio.h>
void main(){
    float days;

    printf("Enter Days : ");
    scanf("%f", &days);

    float month = days / 30;  // FORMULA TO CONVERT DAYS INTO MONTH 

    printf("%.2f Days = %.2f Months",days, month); 
}

// PROGRAM 27 : CONVERT DAYS INTO MONTH - (END) -------------------->
