// PROGRAM 26 : FAHRENHIT TO CELCIUS - (START) -------------------->
#include<stdio.h>
void main(){
    int fahrenhit, celcius;

    printf("Enter Fahrenhit : ");
    scanf("%d", &fahrenhit);

    celcius = (fahrenhit - 32) * 5/9;  // FORMULA

    printf("%.2f celcius",(float) celcius);
}
// PROGRAM 26 : FAHRENHIT TO CELCIUS - (END) -------------------->
