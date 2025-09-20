#include <stdio.h>

int main()
{
   int totalBurger = 2;
   int oreoSekh = 1;
   
   int burgerPrice = 110;
   int oreoSekhPrice = 275;

   int totalBurgerPrice = totalBurger * burgerPrice;
   int totalOreoSekhPrice = oreoSekhPrice * oreoSekh;

   int totalPrice = totalBurgerPrice + totalOreoSekhPrice;



   printf("Total price: %d dollar \n", totalPrice);

   int dollarRate = 126;
    int paymentInTaka = totalPrice * dollarRate;

    printf("Total taka: %d taka", paymentInTaka);
}