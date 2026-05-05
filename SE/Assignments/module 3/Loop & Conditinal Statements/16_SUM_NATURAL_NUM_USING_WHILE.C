// PROGRAM 16 : SUM OF NATURAL NUMBERS USING WHILE LOOP - (START) --------------------->
#include <stdio.h>
void main()
{
  int i = 1, sum = 0, n;

  printf("Enter integer : ");
  scanf("%d", &n);

  // Check while the input number is positive
  while (i <= n)
  {
    sum = sum + i; // Add current value of i to sum
    i++;
  }
  printf("Sum = %d", sum);
}
// PROGRAM 16 : SUM OF NATURAL NUMBERS USING WHILE LOOP - (END) --------------------->