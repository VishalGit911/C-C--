

// THIS IS MY PROGRAM TO FOOD MANAGEMENT WITH DOWHILE WITH SWITCH CASE

#include <stdio.h>
int main()
{
    int b, p, d, v, burger, pizza, dabeli, vadapav, bill;
    char choose;
    int choose_burger, choose_pizza;
    do
    {
        printf("\n\n--------------WELCOME TO FOODWILLA--------------\n\n");
        printf("**********   FOOD MENU   **********\n\n");

        printf("\tPress 1 for burger \n ");
        printf("\tpress 2 for pizza \n");
        printf("\tpress 3 for dabeli  \n ");
        printf("\tpress 4 for vadapav  \n ");
        scanf("%d", &choose);

        switch (choose)
        {
        case 1:

            printf("You selected Burger.\n");
            printf("Which burger you like ? \n");
            printf("\tPress 1 for Mexican  \t price: Mexican=500 \n ");
            printf("\tpress 2 for American \t price: American=800 \n ");
            printf("\tpress 3 for Italian  \t price: Italian=650 \n ");
            scanf("%d", &choose_burger);
            switch (choose_burger)
            {
            case 1:
                printf("Please Enter quantity for maxican Burger : ");
                scanf("%d", &b);
                // item= price * quantity;
                burger = 500 * b;
                printf("your total bill of Mexican Burger is =%d\n", burger);
                break;

            case 2:
                printf("Please Enter quantity for American Burger : ");
                scanf("%d", &b);
                // item= price * quantity;
                burger = 800 * b;
                printf("your total bill of Mexican Burger is =%d\n", burger);
                break;

            case 3:
                printf("Please Enter quantity for Italian Burger : ");
                scanf("%d", &b);
                // item= price * quantity;
                burger = 650 * b;
                printf("your total bill of Mexican Burger is =%d\n", burger);
                break;
            }
            break;

        case 2:
            printf("You selected pizza.\n");
            printf("Which pizza you like ? \n");
            printf("\tPress 1 for chesse pizza \t  price: chesse pizza=500 \n ");
            printf("\tpress 2 for hot & spicy pizza \t   price: hot & spicy pizza=800 \n ");
            printf("\tpress 3 for Italian pizza \t  price: Italian pizza=600 \n ");
            printf("\tpress 4 for Garlic bread \t  price: Garlic bread=100 \n ");
            scanf("%d", &choose_pizza);
            switch (choose_pizza)
            {
            case 1:
                printf("Please Enter quantity for chesse pizza: ");
                scanf("%d", &p);
                pizza = 500 * p;
                printf("your total bill of chesse pizza is =%d\n", pizza);
                break;
            case 2:
                printf("Please Enter quantity for hot & spicy pizza: ");
                scanf("%d", &p);
                pizza = 800 * p;
                printf("your total bill of hot & spicy pizza is =%d\n", pizza);
                break;
            case 3:
                printf("Please Enter quantity for  Italian pizza: ");
                scanf("%d", &p);
                pizza = 600 * p;
                printf("your total bill of  Italian pizza is =%d\n", pizza);
                break;
            case 4:
                printf("Please Enter quantity for Garlic bread: ");
                scanf("%d", &p);
                pizza = 100 * p;
                printf("your total bill of Garlic bread is =%d\n", pizza);
                break;
            }
            break;

        case 3:
            printf("You selected dabeli.\n");
            printf("Please Enter quantity : ");
            scanf("%d", &d);
            dabeli = 50 * d;
            printf("your total bill of dabeli is =%d\n", dabeli);
            break;

        case 4:
            printf("You selected vadapav.\n");
            printf("Please Enter quantity : ");
            scanf("%d", &v);
            vadapav = 50 * v;
            printf("your total bill of vadapav is =%d\n", vadapav);
            break;
        }

        printf("Do you want to continue for order or not ? \n If yes so please press Y Otherwise N\n");
        scanf(" ");
        scanf("%c", &choose);
    } while (choose == 'y' || choose == 'Y');

    printf("Thank you For orders.\n");
}