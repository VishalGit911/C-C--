// this code is for hotel menu . . .

#include <stdio.h>
int main()
{
    int choice, price, qty;
    int total;
    char repeat;
    printf("\t\t\t*** Welcome Delicza Restaurent ***\t\t\t\n");

    do
    {
        printf("Hello sir What Do You Want to Order...\n");
        printf("1). Italian Cambry\n");
        printf("2). coffee\n");
        printf("3). Sweet Penthon\n");
        printf("4). Capachino\n");

        printf("Enter What You Want :");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:

            printf(" 1. italian normal\n");
            printf(" 2. special butetr\n");
            printf(" 3. black special\n");
            printf(" 4. special\n");
            printf("please enter what do you want :");
            scanf("%d", &choice);
            switch (choice)
            {

            case 1:

                printf("Please Enter Your Quantity : ");
                scanf("%d", &qty);
                price = 400;
                total = price * qty;
                printf("Your Bill Ammount is %d\n", total);
                break;

            case 2:

                printf("Please Enter Your Quantity : ");
                scanf("%d", &qty);
                price = 2600;
                total = price * qty;
                printf("Your Bill Ammount is %d\n", total);
                break;

            case 3:

                printf("Please Enter Your Quantity : ");
                scanf("%d", &qty);
                price = 2800;
                total = price * qty;
                printf("Your Bill Ammount is %d\n", total);
                break;

            case 4:

                printf("Please Enter Your Quantity : ");
                scanf("%d", &qty);
                price = 5500;
                total = price * qty;
                printf("Your Bill Ammount is %d\n", total);
                break;
            }
            break;

        case 2:

            printf(" 1. normal coffee\n");
            printf(" 2. capachino coffee\n");
            printf(" 3. mongo tall coffee\n");
            printf(" 4. magalite short coffee\n");
            printf("enter waht do you want : ");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:

                printf("please enter your quantity :");
                scanf("%d", &qty);
                price = 250;
                total = price * qty;
                printf("Your bill Ammount is %d\n", total);
                break;

            case 2:

                printf("please enter your quantity :");
                scanf("%d", &qty);
                price = 300;
                total = price * qty;
                printf("Your bill Ammount is %d\n", total);
                break;

            case 3:

                printf("please enter your quantity :");
                scanf("%d", &qty);
                price = 450;
                total = price * qty;
                printf("Your bill Ammount is %d\n", total);
                break;

            case 4:

                printf("please enter your quantity :");
                scanf("%d", &qty);                                                                                                                                              
                price = 560;
                total = price * qty;
                printf("Your bill Ammount is %d\n", total);
                break;
            }

            break;

        case 3:

            printf(" 1. normal sugar\n");
            printf(" 2. small sugar\n");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:

                printf("Please Enter Your Quantity :");
                scanf("%d", &qty);
                price = 2000;
                total = price * qty;
                printf("Your Bill amount is %d\n", total);
                break;

            case 2:

                printf("Please Enter Your Quantity :");
                scanf("%d", &qty);
                price = 2750;
                total = price * qty;
                printf("Your Bill amount is %d", total);
                break;
            }
            break;
        case 4:
            printf(" 1. tall capachino\n");
            printf(" 2. medium capachino\n");
            printf(" 3. short capachino\n");
            printf("please enter what do you want :");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                // scanf("%d",&choice);
                printf("please enter your quantity : ");
                scanf("%d", &qty);
                price = 200;
                total = price * qty;
                printf("total bill ammount is %d\n", total);
                break;

            case 2:
                printf("please enter your quantity : ");
                scanf("%d", &qty);
                price = 300;
                total = price * qty;
                printf("total ammount is %d\n", total);
                break;

            case 3:
                printf("please enter your quantity : ");
                scanf("%d", &qty);
                price = 400;
                total = price * qty;
                printf("total bill ammount is %d\n", total);
                break;
            }
            break;
        default:
            printf("please enter write choice...\n");
            break;
        }

        printf("Enter Y for continue and N for finished your order");
        scanf(" ");
        scanf("%c", &repeat);

    } while (repeat == 'y' || repeat == 'Y');
    printf("\t\t\tThank You For Connecting  us !!!\n");
}