/*
64	Cricket Team Scorecard
A cricket team played 5 matches. For each match, it has 11 players’ scores.
•Use a 2D array to store scores.
•Use a 1D array to store the total score of each match.
•Display:
•All scores of players match-wise
•Total score for each match
•Match with the highest total score.	25-07-25
//ch.sc.u4cse24050
*/
#include <stdio.h>
int main() {
    int scores[5][11]; // 5 matches, 11 players
    int totalScores[5] = {0}; // To store total score for each match
    int highestMatchIndex = 0; // Index of the match with the highest score
    int highestTotalScore = 0; // Highest total score

    // Input scores for each match
    for (int i = 0; i < 5; i++) {
        printf("Enter scores for Match %d (11 players): ", i + 1);
        for (int j = 0; j < 11; j++) {
            scanf("%d", &scores[i][j]);
            totalScores[i] += scores[i][j]; // Calculate total score for the match
        }
        if (totalScores[i] > highestTotalScore) {
            highestTotalScore = totalScores[i];
            highestMatchIndex = i; // Update index of the match with the highest score
        }
    }

    // Display all scores of players match-wise
    printf("\nScores of players match-wise:\n");
    for (int i = 0; i < 5; i++) {
        printf("Match %d: ", i + 1);
        for (int j = 0; j < 11; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    // Display total score for each match
    printf("\nTotal score for each match:\n");
    for (int i = 0; i < 5; i++) {
        printf("Match %d: %d\n", i + 1, totalScores[i]);
    }

    // Display the match with the highest total score
    printf("\nMatch with the highest total score is Match %d with a score of %d.\n", 
           highestMatchIndex + 1, highestTotalScore);

    return 0;
}