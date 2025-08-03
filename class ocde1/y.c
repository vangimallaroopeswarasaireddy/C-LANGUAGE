/*
65	Record daily temperature of 7 days at 2 different times( Morning , Afternoon and Evening)
- Use a 2D array to store temperatures recorded per day at different times.
- Use a 1D array to store the average temperature for each day.
- Display:
- All temperature values recorded day-wise.
- Average temperature for each day.
- The day with the highest average temperature.	30 -07-25
//ch.sc.u4cse24050
*/
#include <stdio.h>
int main() {
    float temperatures[7][3]; // 7 days, 3 times (Morning, Afternoon, Evening)
    float average[7] = {0}; // To store average temperature for each day
    int highestDayIndex = 0; // Index of the day with the highest average temperature
    float highestAverage = 0; // Highest average temperature

    // Input temperatures for each day
    for (int i = 0; i < 7; i++) {
        printf("Enter temperatures for Day %d (Morning, Afternoon, Evening): ", i + 1);
        for (int j = 0; j < 3; j++) {
            scanf("%f", &temperatures[i][j]);
            average[i] += temperatures[i][j]; // Accumulate temperatures for average calculation
        }
        average[i] /= 3.0; // Calculate average temperature for the day
        if (average[i] > highestAverage) {
            highestAverage = average[i];
            highestDayIndex = i; // Update index of the day with the highest average temperature
        }
    }

    // Display all temperature values recorded day-wise
    printf("\nTemperatures recorded day-wise:\n");
    for (int i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%.2f ", temperatures[i][j]);
        }
        printf("\n");
    }

    // Display average temperature for each day
    printf("\nAverage temperature for each day:\n");
    for (int i = 0; i < 7; i++) {
        printf("Day %d: %.2f\n", i + 1, average[i]);
    }

    // Display the day with the highest average temperature
    printf("\nDay with the highest average temperature is Day %d with an average of %.2f.\n", 
           highestDayIndex + 1, highestAverage);

    return 0;
}