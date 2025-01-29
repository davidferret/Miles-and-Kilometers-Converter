#include <stdio.h>

#define MILES_TO_KM 1.60934
#define KM_TO_MILES 0.621371

double convertMilesToKm(double miles);
double convertKmToMiles(double km);
void inputValidation(double *value);
void displayMenu();

int main(void) {
    int choice;
    double distance, result;

    displayMenu();
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter the distance in miles: ");
        inputValidation(&distance);
        result = convertMilesToKm(distance);
        printf("\n%.2f miles is equal to %.2f kilometers.\n", distance, result);
    } 
    else if (choice == 2) {
        printf("Enter the distance in kilometers: ");
        inputValidation(&distance);
        result = convertKmToMiles(distance);
        printf("\n%.2f kilometers is equal to %.2f miles.\n", distance, result);
    } 
    else {
        printf("\nInvalid choice! Please restart the program and enter 1 or 2.\n");
    }

    return 0;
}

double convertMilesToKm(double miles) {
    return miles * MILES_TO_KM;
}

double convertKmToMiles(double km) {
    return km * KM_TO_MILES;
}

void inputValidation(double *value) {
    while (scanf("%lf", value) != 1 || *value < 0) {
        printf("Invalid input! Enter a positive numeric value: ");
        while (getchar() != '\n');
    }
}

void displayMenu() {
    printf("--- Distance Converter ---\n");
    printf("1. Convert miles to kilometers\n");
    printf("2. Convert kilometers to miles\n");
}
