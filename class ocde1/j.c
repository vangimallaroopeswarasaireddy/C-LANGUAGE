/*
67	In a sports event, 6 players participate in 4 games.
Write a C program to:
- Use a 2D array to store scores of each player for each game.
- Use a 1D array to store the total score of each player.
- Display:
- Player-wise scores
- Total score of each player
- Player with the highest total score	30-07-25
//ch.sc.u4cse24050
*/
#include <stdio.h>
int main() {
    int scores[6][4]; // 6 players, 4 games
    int totalScores[6] = {0}; // To store total score for each player
    int highestPlayerIndex = 0; // Index of the player with the highest score
    int highestTotalScore = 0; // Highest total score

    // Input scores for each player
    for (int i = 0; i < 6; i++) {
        printf("Enter scores for Player %d in 4 games: ", i + 1);
        for (int j = 0; j < 4; j++) {
            scanf("%d", &scores[i][j]);
            totalScores[i] += scores[i][j]; // Calculate total score for the player
        }
        if (totalScores[i] > highestTotalScore) {
            highestTotalScore = totalScores[i];
            highestPlayerIndex = i; // Update index of the player with the highest score
        }
    }

    // Display player-wise scores
    printf("\nScores of players:\n");
    for (int i = 0; i < 6; i++) {
        printf("Player %d: ", i + 1);
        for (int j = 0; j < 4; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    // Display total score of each player
    printf("\nTotal score of each player:\n");
    for (int i = 0; i < 6; i++) {
        printf("Player %d: %d\n", i + 1, totalScores[i]);
    }

    // Display the player with the highest total score
    printf("\nPlayer with the highest total score is Player %d with a score of %d.\n", 
           highestPlayerIndex + 1, highestTotalScore);

    return 0;
}