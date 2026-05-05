// PROGRAM 15 : SUM OF 10 NUMBERS USING WHILE LOOP - (START) --------------------->
#include <stdio.h>
void main()
{
	int i = 1, sum = 0, n;
	while (i <= 10)
	{
		printf("Enter integer : ");
		scanf("%d", &n);
		i++; // Increment to next number
		sum = sum + n;
	}
	printf("%d", sum);
}
// PROGRAM 15 : SUM OF 10 NUMBERS USING WHILE LOOP - (END) --------------------->