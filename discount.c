#include <stdio.h>

int main()
{

    // shop name

    // Item prices per kg
    float kacha_morich_price = 11.22;
    float kochu_price = 6.09;
    float vendi_price = 7.39;

    // Quantity input
    float kacha_morich_qty, kochu_qty, vendi_qty;

    printf("Welcome to Shobjir Dukan!\n");
    printf("Enter quantity (kg) of Kacha Morich: ");
    scanf("%f", &kacha_morich_qty);

    printf("Enter quantity (kg) of Kochu: ");
    scanf("%f", &kochu_qty);

    printf("Enter quantity (kg) of Vendi: ");
    scanf("%f", &vendi_qty);

    // Individual item totals
    float kacha_morich_total = kacha_morich_price * kacha_morich_qty;
    float kochu_total = kochu_price * kochu_qty;
    float vendi_total = vendi_price * vendi_qty;

    // Subtotal
    float subtotal = kacha_morich_total + kochu_total + vendi_total;


    //discount
    float discount = subtotal * 0.12;
            subtotal = subtotal - discount;
          

    // VAT calculation (5%)
    float vat = subtotal * 0.05;

    // Final total
    float total = subtotal + vat;

    // Billing output
    printf("\n--- Billing Details ---\n");
    printf("Kacha Morich: $%.2f\n", kacha_morich_total);
    printf("Kochu       : $%.2f\n", kochu_total);
    printf("Vendi       : $%.2f\n", vendi_total);
    printf("Discount(12%%) : %.2f \n", discount);
    printf("Subtotal    : $%.2f\n", subtotal);
    printf("VAT (5%%)     : $%.2f\n", vat);
    printf("Total Bill  : $%.2f\n", total);
}