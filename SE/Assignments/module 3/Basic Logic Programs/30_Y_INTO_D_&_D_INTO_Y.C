// PROGRAM 30 : CONVERT YEARS INTO DAYS & DAYS INTO YEARS - (START) -------------------->

#include<stdio.h>
void main(){
    float year, days;

    // CONVERT YEARS INTO DAYS
	printf("**YEARS TO DAYS CONVERTER**");
    printf("\nEnter years : ");
    scanf("%f", &year);

    days = year * 365;  // FORMULA

    printf("%.2f Days",days); 
    
    printf("\n\n");

    // CONVERT DAYS INTO YEARS 
	printf("**DAYS TO YEARS CONVERTER**");
    printf("\nEnter Days : ");
    scanf("%f", &days);

    year = days / 365;  // FORMULA

    printf("%.2f Years",year); 
}

// PROGRAM 30 : CONVERT YEARS INTO DAYS & DAYS INTO YEARS - (START) -------------------->
