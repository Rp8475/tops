// PROGRAM 21 : FIND COMPOUND INTEREST  - (START) -------------------->
#include<stdio.h>
void main(){
    int p;  // P = PRINCIPAL AMOUNT
    float r, t;  // R = RATE OF INTEREST , T = TIME IN YEARS

    printf("Enter Principal Amount : ");
    scanf("%d", &p);
    printf("Enter Rate of Interest : ");
    scanf("%f", &r);
    printf("Enter Time (In Years) : ");
    scanf("%f", &t);

    float amount = p*(1 + r / 100)*t;
    printf("Amount = %.2f", amount);

    float cInterest = amount - p;
    printf("\nCompound Interest = %.2f", cInterest);
}
// PROGRAM 21 : FIND COMPOUND INTEREST  - (END) -------------------->