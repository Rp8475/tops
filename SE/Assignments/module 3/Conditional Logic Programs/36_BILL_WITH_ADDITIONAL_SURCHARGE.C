// PROGRAM 36 : ELECTRICITY_BILL_WITH_ADDITIONAL_SURCHARGE - (START) --------------------->
#include <stdio.h>
void main()
{
  int Cid;
  float Unit, amt, Ucost, surcharge, Tamt;
  char Name[20];

  printf("eneter customer Id = ", Cid);
  scanf("%d", &Cid);

  printf("eneter customer Name = ", Name);
  scanf("%s", Name);

  printf("eneter customer Unit = ", Unit);
  scanf("%f", &Unit);

  // Determine unit cost based on consumption  if (Unit < 50)
  {
    Ucost = 0.50; // RUN-TIME DECALRED
  }
  else if (Unit >= 50 && Unit < 100)
  {
    Ucost = 0.75; // RUN-TIME DECALRED
  }
  else if (Unit >= 100 && Unit < 250)
  {
    Ucost = 1.20; // RUN-TIME DECALRED
  }
  else
  {
    Ucost = 1.50; // RUN-TIME DECALRED
  }

  // Calculate the total amount and surcharge
  amt = Unit * Ucost;
  surcharge = amt * 0.20;
  Tamt = surcharge + amt;

  // Display the results
  printf("\ncustomer Id :%d\n", Cid);
  printf("customer Name :%s\n", Name);
  printf("unit Consume :%.2f\n", Unit);
  printf("unit Rate :%.2f\n", Ucost);
  printf("total Amount :%.2f\n", amt);
  printf("surcharge Amount :%.2f\n", surcharge);
  printf(" total with surcharge Amount :%.2f\n", Tamt);
}
// PROGRAM 36 : ELECTRICITY_BILL_WITH_ADDITIONAL_SURCHARGE - (END) --------------------->
