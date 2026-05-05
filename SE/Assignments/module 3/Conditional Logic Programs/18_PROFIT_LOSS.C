// PROGRAM 18 : CHECK_PROFIT_LOSS - (START) --------------------->
#include <stdio.h>
void main()
{
   int costPrice, sellPrice, amount;

   // GET VALUE FROM USER
   printf("Enter the Cost Price : ");
   scanf("%d", &costPrice);
   printf("Enter the Selling Price : ");
   scanf("%d", &sellPrice);

   // ELSE-IF LADDER CONDITION
   if (costPrice < sellPrice)
   {
      amount = sellPrice - costPrice; // PROFIT FORMULA
      printf("Profit = %d", amount);
   }
   else if (costPrice > sellPrice)
   {
      amount = costPrice - sellPrice; // LOSS FORMULA
      printf("Loss : %d", amount);
   }
   else
   {
      printf("No profit, No loss");
   }
}
// PROGRAM 18 : CHECK_PROFIT_LOSS - (END) --------------------->