/*
63	A multiplex wants to record ratings given by 4 viewers for 3 movies.
•Use a 2D array to store ratings (out of 10).
•Use a 1D array to store the average rating of each movie.
•Display:
•Ratings given by each viewer
•Average rating of each movie
•Movie with the highest average rating.	25-07-25
//ch.sc.u4cse24050
*/
#include <stdio.h>
int main() {
    int ratings[4][3]; // 4 viewers, 3 movies
    float average[3] = {0}; // To store average ratings for each movie
    int highestIndex = 0; // Index of the movie with the highest average rating
    float highestAverage = 0; // Highest average rating

    // Input ratings from viewers
    for (int i = 0; i < 4; i++) {
        printf("Enter ratings given by Viewer %d for 3 movies (out of 10): ", i + 1);
        for (int j = 0; j < 3; j++) {
            scanf("%d", &ratings[i][j]);
            average[j] += ratings[i][j]; // Accumulate ratings for average calculation
        }
    }

    // Calculate average ratings for each movie
    for (int j = 0; j < 3; j++) {
        average[j] /= 4.0; // Divide by number of viewers
        if (average[j] > highestAverage) {
            highestAverage = average[j];
            highestIndex = j; // Update index of the highest rated movie
        }
    }

    // Display ratings given by each viewer
    printf("\nRatings given by each viewer:\n");
    for (int i = 0; i < 4; i++) {
        printf("Viewer %d: ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%d ", ratings[i][j]);
        }
        printf("\n");
    }

    // Display average rating of each movie
    printf("\nAverage rating of each movie:\n");
    for (int j = 0; j < 3; j++) {
        printf("Movie %d: %.2f\n", j + 1, average[j]);
    }

    // Display the movie with the highest average rating
    printf("\nMovie with the highest average rating is Movie %d with an average rating of %.2f.\n", 
           highestIndex + 1, highestAverage);

    return 0;
}