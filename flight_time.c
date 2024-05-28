#include <stdio.h>

int main() {
    int mAh, motorAmp;
    float effectiveBatAmp;
    float totalFlightTime;
    int minutes;
    int seconds;

    // Prompt for battery capacity
    printf("Enter the battery capacity (in mAh): ");
    scanf("%d", &mAh);

    // Prompt for motor consumption
    printf("Enter the Maximum Amps consumed by the motor (in Amps): ");
    scanf("%d", &motorAmp);

    // Calculate the effective battery capacity in mAh, then convert to Ah
    effectiveBatAmp = 0.78 * mAh / 1000.0; // convert mAh to Ah

    // Calculate total flight time in minutes
    totalFlightTime = (effectiveBatAmp / motorAmp) * 60;

    // Separate into minutes and seconds
    minutes = (int)totalFlightTime; // whole minutes
    seconds = (int)((totalFlightTime - minutes) * 60); // remaining seconds

    // Display the result
    printf("The estimated flight time is %d minutes and %d seconds.\n", minutes, seconds);

    return 0;
}
