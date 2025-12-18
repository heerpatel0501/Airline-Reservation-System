#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int flightType;
    printf("        AERONOVA AIRLINES\n");
    printf("=================================\n");
    printf(" Welcome to the AERONOVA Airlines\n");
    printf("=================================\n");
    printf("    AIRLINE RESERVATION SYSTEM\n");
    printf("=================================\n");
    printf("Select Flight Type:\n");
    printf("1. Domestic Flight\n");
    printf("2. International Flight\n");
    printf("---------------------------------\n");
    printf("Enter your choice: ");
    scanf("%d", &flightType);

    if (flightType == 1) {
        printf("\nYou selected DOMESTIC FLIGHT.\n");
    }
    else if (flightType == 2) {
        printf("\nYou selected INTERNATIONAL FLIGHT.\n");
    }
    else {
        printf("\nInvalid choice! Please restart the program.\n");
    }

    printf("=================================\n");

    printf("\nOur Flights are as follows:\n");
    int location;
    if (flightType == 1) {
        printf("1. Ahemdabad to Indore => Time: 2:00 PM - 4:00 PM\n");
        printf("2. Delhi to Mumbai => Time: 3:30 PM - 5:30 PM\n");
        printf("3. Goa to Bangolore => Time: 4:15 PM - 6:15 PM\n");
        printf("Enter your desinestion To & From");
        scanf("%d", &location);
        if(location == 1){
            printf("\nYour Flight is from Ahemdabad to Indore at 2:00 PM ");
        }
        else if (location == 2)
        {
            printf("\nYour Flight is from Delhi to Mumbai at 3:30 PM");
        }
        else if (location == 3)
        {
            printf("\nYour Flight is from Goa to Bangolore at 4:15 PM");
        }
        else{
            printf("\nInvalid choice, Only Three Flight Avaliable");
        }

        
    } else if (flightType == 2) {
        printf("1. New York to London => Time: 10:00 AM - 12:00 PM\n");
        printf("2. India to Tokyo => Time: 11:30 AM - 1:30 PM\n");
        printf("3. Chicago to India => Time: 2:45 PM - 4:45 PM\n");
        printf("\nEnter your desinestion To & From (1-3): ");
        scanf("%d", &location);
        if(location == 1){
            printf("\nYour Flight is from New York to London at 10:00 AM ");
        }
        else if (location == 2)
        {
            printf("\nYour Flight is from India to Tokyo at 11:30 AM");
        }
        else if (location == 3)
        {
            printf("\nYour  Flight is from Chicago to India at 2:45 PM");
        }
        else{
            printf("\nInvalid choice, Only Three Flight Avaliable");
        }
    }

    printf("\n=================================\n");

    printf("Our Flight Seats Types are as follows:\n");
    int seatType;
    printf("1. Economy Class  => Affordable and comfortable seating => price: $100\n");
    printf("2. Business Class => Enhanced comfort and services => price: $200\n");
    printf("3. First Class => Premium luxury and privacy => price: $300\n");
    printf("4. Premium Class => Exclusive amenities and services => price: $400\n");
    printf("Enter your Seat Type (1-4): ");
    scanf("%d", &seatType);
    switch (seatType) {
        case 1:
            printf("\nYou selected ECONOMY CLASS.\n");
            break;
        case 2:
            printf("\nYou selected BUSINESS CLASS.\n");
            break;
        case 3:
            printf("\nYou selected FIRST CLASS.\n");
            break;
        case 4:
            printf("\nYou selected PREMIUM CLASS.\n");
            break;
        default:
            printf("\nInvalid choice! Please Choice From 1 to 4.\n");
            break;
    }
    printf("\n=================================\n");

    printf("Select Your Seat preference:\n");
    int seatPref;
    printf("1. Window Seat => Cost for Window Seat = $50\n");
    printf("2. Aisle Seat => Cost for Aisle Seat = $40\n");
    printf("3. Middle Seat => Cost for Middle Seat = $30\n");
    printf("4.Exit Row Seat => Cost for Exit Row Seat = $60\n");
    printf("Enter your Seat Preference (1-4): ");
    scanf("%d", &seatPref);
    switch (seatPref) {
        case 1:
            printf("\nYou selected WINDOW SEAT.\n");
            break;
        case 2:
            printf("\nYou selected AISLE SEAT.\n");
            break;
        case 3:
            printf("\nYou selected MIDDLE SEAT.\n");
            break;
        case 4:
            printf("\nYou selected EXIT ROW SEAT.\n");
            break;
        default:
            printf("\nInvalid choice! Please Choice From 1 to 4.\n");
            break;
    }

    printf("=================================\n");
    int totalBillofTicket = 0;
    totalBillofTicket += (seatType == 1) ? 100 : (seatType == 2) ? 200 : (seatType == 3) ? 300 : (seatType == 4) ? 400 : 0;
    totalBillofTicket += (seatPref == 1) ? 50 : (seatPref == 2) ? 40 : (seatPref == 3) ? 30 : (seatPref == 4) ? 60 : 0;
    printf("\n Your Total Ticket Amount is $%d\n", totalBillofTicket);

    printf("=================================\n");

    printf("\nPassenger Details Collection\n");

    char name[50];
    printf("\nEnter Name: ");
    scanf("%49s", name);

    char surname[50];
    printf("\nEnter Surname: ");
    scanf("%49s", surname);

    int age;

    do {
        printf("\nEnter your age: ");
        scanf("%d", &age);

        if (age < 0 || age >= 120) {
            printf("\nInvalid age! Please enter a valid age (0-119).\n");
        }

} while (age < 0 || age >= 120);
    
    char contact[11];

    do{
        printf("\nEnter your contact number: ");
        scanf("%10s", contact);

        if (strlen(contact) != 10) {
            printf("\nInvalid contact number! Please enter a 10-digit number.\n");
        }
    }while (strlen(contact) !=10);


    char aadhar[13];
    do {
        printf("\nEnter your Aadhar number: ");
        scanf("%12s", aadhar);

        if (strlen(aadhar) != 12) {
            printf("\nInvalid Aadhar number! Please enter a 12-digit number.\n");
        }
    } while (strlen(aadhar) != 12);

    if(flightType ==2){
        char passport[10];
        do {
            printf("\nEnter your Passport number: ");
            scanf("%9s", passport);

            if (strlen(passport) < 6 || strlen(passport) > 9) {
                printf("\nInvalid Passport number! Please enter a valid Passport number (6-9 characters).\n");
            }
        } while (strlen(passport) < 6 || strlen(passport) > 9);
    }

    printf("\n=================================\n");

    printf("\n=================================\n");
    
    printf("\nThank you, %s. Your booking details have been recorded.\n", name);

    printf("\n=================================\n");

    int mealChoice, food, drink;
    int foodQty,drinkQty;
    int foodPrice = 0, drinkPrice = 0;
    int totalFood,totalDrink,grandTotal;

    if(flightType == 1){
        printf("Do you want to select a flight meal?\n");
        printf("1. Yes\n");

        printf("2. No\n");
        printf("Enter your choice: ");
        scanf("%d", &mealChoice);

        if (mealChoice == 1) {
        printf("\n===== FOOD MENU =====\n");
        printf("1. Upma        - Rs. 300\n");
        printf("2. Samosa      - Rs. 200\n");
        printf("3. Sandwich    - Rs. 390\n");
        printf("4. Cup Noodles - Rs. 340\n");
        printf("5. Aeronova Special    - Rs. 500\n");

        printf("Enter food choice: ");
        scanf("%d", &food);

        if (food == 1) {
            foodPrice = 300;
            printf("Food selected: Upma\n");
        }
        else if (food == 2) {
            foodPrice = 200;
            printf("Food selected: Samosa\n");
        }
        else if (food == 3) {
            foodPrice = 390;
            printf("Food selected: Sandwich\n");
        }
        else if (food == 4) {
            foodPrice = 340;
            printf("Food selected: Cup Noodles\n");
        }
        else if (food == 5) {
            foodPrice = 500;
            printf("Food selected: Aeronova Special\n");
        }
        else {
            printf("Invalid food choice\n");
        }
        printf("Enter Food quantity:");
        scanf("%d",&foodQty);
        totalFood=foodPrice*foodQty;

        printf("\n===== BEVERAGES MENU =====\n");
        printf("1. Water        - Rs. 110\n");
        printf("2. Tea          - Rs. 130\n");
        printf("3. Coffee       - Rs. 200\n");
        printf("4. Cold Drink   - Rs. 250\n");
        printf("5. Juice        - Rs. 90\n");

        printf("Enter beverage choice: ");
        scanf("%d", &drink);

        if (drink == 1) {
            drinkPrice = 110;
            printf("Beverage selected: Tea\n");
        }
        else if (drink == 2) {
            drinkPrice = 130;
            printf("Beverage selected: Coffee\n");
        }
        else if (drink == 3) {
            drinkPrice = 200;
            printf("Beverage selected: Cold Drink\n");
        }
        else if (drink == 4) {
            drinkPrice = 250;
            printf("Beverage selected: Juice\n");
        }
        else if (drink == 5) {
            drinkPrice = 90;
            printf("Beverage selected: Water\n");
        }
        else {
            printf("Invalid beverage choice\n");
        }
        printf("Enter beverages quantity:");
        scanf("%d",&drinkQty);
        totalDrink=drinkPrice*drinkQty;

        grandTotal = (totalFood + totalDrink)- (totalFood+totalDrink);

        printf("\n===== BILL DETAILS =====\n");
        printf("Food Price     : Rs. %d\n", totalFood);
        printf("Beverage Price : Rs. %d\n", totalDrink);
        printf("-------------------------\n");
        printf("Total Bill (Free meal on internation flights)    : Rs. %d\n", grandTotal);
    }

    else if (mealChoice == 2) {
        printf("No meal selected. Grand Bill: Rs. 0");
    }

    else {
        printf("Invalid choice!");
    }
    }

    else if(flightType == 2){
        printf("\nMeals are complimentary on International Flights.\n");
        printf("Do you want to select a flight meal?\n");
    printf("1. Yes\n");
    printf("2. No\n");
    printf("Enter your choice: ");
    scanf("%d", &mealChoice);

    if (mealChoice == 1) {
        printf("\n===== FOOD MENU =====\n");
        printf("1. Upma        - Rs. 300\n");
        printf("2. Samosa      - Rs. 200\n");
        printf("3. Sandwich    - Rs. 390\n");
        printf("4. Cup Noodles - Rs. 340\n");
        printf("5. Aeronova Special    - Rs. 500\n");

        printf("Enter food choice: ");
        scanf("%d", &food);

        if (food == 1) {
            foodPrice = 300;
            printf("Food selected: Upma\n");
        }
        else if (food == 2) {
            foodPrice = 200;
            printf("Food selected: Samosa\n");
        }
        else if (food == 3) {
            foodPrice = 390;
            printf("Food selected: Sandwich\n");
        }
        else if (food == 4) {
            foodPrice = 340;
            printf("Food selected: Cup Noodles\n");
        }
        else if (food == 5) {
            foodPrice = 500;
            printf("Food selected: Aeronova Special\n");
        }
        else {
            printf("Invalid food choice\n");
        }
        printf("Enter Food quantity:");
        scanf("%d",&foodQty);
        totalFood=foodPrice*foodQty;

        printf("\n===== BEVERAGES MENU =====\n");
        printf("1. Water        - Rs. 110\n");
        printf("2. Tea          - Rs. 130\n");
        printf("3. Coffee       - Rs. 200\n");
        printf("4. Cold Drink   - Rs. 250\n");
        printf("5. Juice        - Rs. 90\n");

        printf("Enter beverage choice: ");
        scanf("%d", &drink);

        if (drink == 1) {
            drinkPrice = 110;
            printf("Beverage selected: Water\n");
        }
        else if (drink == 2) {
            drinkPrice = 130;
            printf("Beverage selected: Tea\n");
        }
        else if (drink == 3) {
            drinkPrice = 200;
            printf("Beverage selected: Coffee\n");
        }
        else if (drink == 4) {
            drinkPrice = 250;
            printf("Beverage selected: Cold Drink\n");
        }
        else if (drink == 5) {
            drinkPrice = 90;
            printf("Beverage selected: Juice\n");
        }
        else {
            printf("Invalid beverage choice\n");
        }
        printf("Enter beverages quantity:");
        scanf("%d",&drinkQty);
        totalDrink=drinkPrice*drinkQty;

        grandTotal = (totalFood + totalDrink)- (totalFood+totalDrink);

        printf("\n===== BILL DETAILS =====\n");
        printf("Food Price     : Rs. %d\n", totalFood);
        printf("Beverage Price : Rs. %d\n", totalDrink);
        printf("-------------------------\n");
        printf("Total Bill (Free meal on internation flights)    : Rs. %d\n", grandTotal);
    }

    else if (mealChoice == 2) {
        printf("No meal selected. Grand Bill: Rs. 0");
    }

    else {
        printf("Invalid choice!");
    }
    }

    return 0;
}
