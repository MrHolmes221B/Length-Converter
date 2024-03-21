#include <stdio.h>

// Function to convert meters to centimeters
float meterToCentimeter(float meters) {
    return meters * 100;
}

// Function to convert centimeters to meters
float centimeterToMeter(float centimeters) {
    return centimeters / 100;
}

// Function to convert meters to kilometers
float meterToKilometer(float meters) {
    return meters / 1000;
}

// Function to convert kilometers to meters
float kilometerToMeter(float kilometers) {
    return kilometers * 1000;
}

int main() {
    int choice;
    float length;

    printf("Length Conversion Program\n");
    printf("1. Meter to Centimeter\n");
    printf("2. Centimeter to Meter\n");
    printf("3. Meter to Kilometer\n");
    printf("4. Kilometer to Meter\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter length in meters: ");
            scanf("%f", &length);
            printf("%.2f meters is equal to %.2f centimeters.\n", length, meterToCentimeter(length));
            break;
        case 2:
            printf("Enter length in centimeters: ");
            scanf("%f", &length);
            printf("%.2f centimeters is equal to %.2f meters.\n", length, centimeterToMeter(length));
            break;
        case 3:
            printf("Enter length in meters: ");
            scanf("%f", &length);
            printf("%.2f meters is equal to %.2f kilometers.\n", length, meterToKilometer(length));
            break;
        case 4:
            printf("Enter length in kilometers: ");
            scanf("%f", &length);
            printf("%.2f kilometers is equal to %.2f meters.\n", length, kilometerToMeter(length));
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
    }

    return 0;
}
