 #include <stdio.h>
//ch.sc.u4cse24050
int main() {
    printf("\n=== CRICKET TEAM SCORECARD ===\n");
 int scores[5][11]; // 5 matches, 11 players
    int total[5] = {0};
    int i, j;

    // Input scores
    for(i = 0; i < 5; i++) {
        printf("Enter scores for Match %d (11 players): ", i + 1);
        for(j = 0; j < 11; j++) {
            scanf("%d", &scores[i][j]);
        }
    }

    // Display all scores match-wise
    printf("\nScores of players match-wise:\n");
    for(i = 0; i < 5; i++) {
        printf("Match %d: ", i + 1);
        for(j = 0; j < 11; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    // Calculate total for each match
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 11; j++) {
            total[i] += scores[i][j];
        }
    }

    // Display total score for each match
    printf("\nTotal score of each match:\n");
    for(i = 0; i < 5; i++) {
        printf("Match %d: %d\n", i + 1, total[i]);
    }

    // Find match with highest total score
    int max = total[0], maxIndex = 0;
    for(i = 1; i < 5; i++) {
        if(total[i] > max) {
            max = total[i];
            maxIndex = i;
        }
    }

    printf("Match with the highest total score: Match %d (%d runs)\n", maxIndex + 1, max);
}
