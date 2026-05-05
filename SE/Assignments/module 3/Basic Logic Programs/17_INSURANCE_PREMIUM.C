#include<stdio.h>
void main(){
    
    // Initialize
    int salary, year, yPremium, tPremium, premium;
    char a='%';  

    // Total Anuual Salary
    printf("Enter your Salary : ");
    scanf("%d", &salary); 

    // Insurance Premium in %
    printf("Premium(in %c) : ", a);
    scanf("%d", &premium);

    // How many Years you want to get Premium in years
    printf("Insurance Policy term(in years) : ");
    scanf("%d", &year);

    // Count Total Insurance Premium Money(Anuualy)
    float ipMoney = (salary*premium)/100;
 
    // Display Total Insurance Premium Money
    printf("Total Insurance Premium Money is %.2f\n", ipMoney);

    // Display Yearly Insurance Premium Money
    printf("Yearly Insurance Premium Money is %.2f\n", ipMoney/(year));
}