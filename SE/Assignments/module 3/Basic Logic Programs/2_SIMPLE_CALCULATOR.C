// PROGRAM 2 : SIMPLE CALCULATOR - (START) --------------------->
#include<stdio.h>
void main(){
    int a,b; //DATA MEMBER

    printf("Enter the first value : ");
    // scanf() IS USED FOR GETTING THE VALUE DYNAMICALLY FROM THE USER
    scanf("%d", &a);   //& IS DEFINES THE ADDRESS OF VARIABLE

    printf("Enter the second value : ");
    scanf("%d", &b);

    printf("A : %d", a);
    printf("/tB : %d", b);  // "/t" used for spacing

    printf("/nAddition : %d", a+b);
    printf("/nSubstraction : %d", a-b);
    printf("/nMultiplication : %d", a*b);
    printf("/nDivision : %.2f(float)", a/b);  //TYPE CASTING
    printf("/nModulo : %.2f(float)", a%b);  //TYPE CASTING
}
// PROGRAM 2 : SIMPLE CALCULATOR - (END) <--------------------