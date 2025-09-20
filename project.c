#include<stdio.h>

int main(){
    //shop name
    printf("************************************* \n");
    printf("***** Cherry Shop ***** \n");
    printf("************************************* \n");

    //price

    int burgerPrice, oreoPrice;

    burgerPrice = 110;
    oreoPrice = 275;

    //menu card
    printf("------------------------------------- \n");

    printf("Menu: \n 1. Burger --- %d TK \n 2. Oreo Sekh --- %d TK \n", burgerPrice, oreoPrice);

    printf("------------------------------------- \n");

    //variable need
    int bugerQuantity, oreoQuantity, totalBurgerPrice, totalOreoPrice, totalPrice;
    
    
    //sofftware
    printf("Sir, Buger koto ta? : ");
    scanf("%d", &bugerQuantity);

    printf("Sir, Oreo koto ta? : ");
    scanf("%d", &oreoQuantity);


    printf("------------------------------------- \n");

    totalBurgerPrice = bugerQuantity * burgerPrice;
    totalOreoPrice = oreoQuantity * oreoPrice;

    totalPrice = totalBurgerPrice + totalOreoPrice;

    printf("------------------------------------- \n");
    printf("Total Burger Price:  %d\n", totalBurgerPrice);
    printf("Total Oreo Price:  %d\n", totalOreoPrice);
    printf("------------------------------------- \n");
    printf("Total Bill:  %d\n", totalPrice);
}