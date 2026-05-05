// PROGRAM 19 : COMPOUND INTEREST - (START) --------------------->
#include<stdio.h>
main()
{
	float pAmount,time;
	float iRate,amount,compound_interest;
	
	// Principal Amount
	printf("Enter the Principal Amount : ");
	scanf("%f",&pAmount);
	
	// Rate of Interest
	printf("Enter Annual Interest rate : ");
	scanf("%f",&iRate);
	
	// Time in Years	
	printf("Enter the Time(Years) : ");
	scanf("%f",&time);
	
	// Calculate Compound Interest
	amount = pAmount*(1+iRate/100)*time;
	compound_interest = amount - pAmount;
	
	// Dispplay Compound Interest
	printf("compound interest is %.2f",compound_interest);
}
// PROGRAM 19 : COMPOUND INTEREST - (END) --------------------->