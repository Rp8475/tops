// PROGRAM 23 : SWAPPING WITH & WITHOUT 3RD VARIABLE  - (START) -------------------->
#include<stdio.h>
void main(){
    int a, b;

    // GET VALUES FROM USER
    printf("Enter A : ");
    scanf("%d", &a);
    printf("Enter B : ");
    scanf("%d", &b);

    // BEFORE SWAPPING VALUE OF A & B
    printf("\nBefore Swap A : %d", a);
    printf("\nBefore Swap B : %d", b);

    // WITHOUT 3RD VARIABLE SWAPPING USING MULTIPLICATION & DIVISION
    a = a * b;
    b = a / b;
    a = a / b;

    // AFTER SWAPPING VALUE OF A & B
    printf("\n\nAfter Swap A : %d", a);
    printf("\nAfter Swap B : %d", b);
}
// PROGRAM 23 : SWAPPING WITH & WITHOUT 3RD VARIABLE  - (END) -------------------->