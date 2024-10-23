#include <stdio.h>
int main()
{

    printf("Addres: Hotel Dream Festiva,Gaurav Path, Palanpur, Surat - 395005 (Gujarat)\n");
    printf("Contact Number: For Restaurant Enquiry - +91 99092 16000\n \t\tFor Banquets Enquiry - +91 99092 61000");
    printf("\n\n--------------WELCOME TO DREAM FESTIVA--------------\n\n");
    printf("Hotel Dream Festiva is one of the newest Hotel in surat.The Hotel is equipped with all the general amenities and facilities that go along with memorable stay.Set amidst beautifully landscaped gardens,it proves to be a ideal dream destination for perceptive traveller.\n");
    printf("The Hotel have well furnished rooms along with rooms providing pleasent views of the city.The hotel satisfies the needs of business as well as the leisure traveller.All the rooms at the hotel are furnished beautifully.All the rooms are fitted with amenities.");

    printf("\n\n ----------------------AMENITIES----------------------\n");
    printf("\n\t\t\t1. 100 Percent Power backup.\n");
    printf("\t\t\t2. Automatic lift.\n");
    printf("\t\t\t3. Ample parking space.\n");
    printf("\t\t\t4. Round the clock security.\n");
    printf("\t\t\t5. Running hot and cold water.\n");
    printf("\t\t\t6. Free internet service.\n");
    printf("\t\t\t7. 24 hours room service.\n");
    printf("\t\t\t8. Laundary service.\n");
    // scanf("\nPress any character to continue:");

    int choose;
    int choose_room, choose_partyhall, choose_benquethall;
    int room_charge;

    printf("\tPress 1 For Booking Room \n ");
    printf("\tpress 2 For Booking Partyhall\n");
    printf("\tpress 3 for Benquethall  \n ");
    scanf("%d", &choose);

    switch (choose)
    {
    case 1:

        printf("You are going for room.\n");
        printf("Which room do you want? \n");
        printf("\tpress 1 for Deluxe Room \t charge: 1500 \n");
        printf("\tpress 2 for Executive \t charge: 2500  Room\n");
        printf("\tpress 3 for Presidential \t charge: 3500  Room\n");
        printf("\tpress 4 for Penthouse Room \t charge: 5000 \n");
        scanf("%d", &choose_room);
        switch (choose_room)
        {
        case 1:
            printf("You are going for Deluxe room.\n");
            room_charge = 1500;
            printf("People :2\n");
            printf("Bad :1\n");
            printf("A.C : YES\n");
            printf("Fridge : NO\n");

        case 2:
            printf("You are going for Executive room.\n");
            room_charge = 1500;
            printf("People :2\n");
            printf("Bad :1\n");
            printf("A.C : YES\n");
            printf("Fridge : NO\n");
        }
    }
}
