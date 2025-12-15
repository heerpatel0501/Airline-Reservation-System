#include <stdio.h>
#include <stdlib.h>

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

    return 0;
}
