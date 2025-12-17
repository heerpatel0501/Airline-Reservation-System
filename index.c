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

    printf("Enter your details to proceed with booking.\n");

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

    printf("\nOur Fligts are as follows:\n");
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
        printf("Enter your desinestion To & From");
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
    
    printf("\nThank you, %s. Your booking details have been recorded.\n", name);

    printf("\n=================================\n");


    return 0;
}
