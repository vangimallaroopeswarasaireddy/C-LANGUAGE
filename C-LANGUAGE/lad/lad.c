#include <stdio.h>
//ch.sc.u4cse24050
// Function declarations
void movieRatings();
void cricketScorecard();

int main() {
    printf("=== MOVIE RATING SYSTEM ===\n");
    movieRatings();
    
    printf("\n=== CRICKET TEAM SCORECARD ===\n");
    cricketScorecard();
    
    return 0;
}

// 1) Movie Rating System
void movieRatings() {
    int ratings[4][3]; // 4 viewers, 3 movies
    float avg[3] = {0};
    int i, j;
    
    // Input ratings
    for(i = 0; i < 4; i++) {
        printf("Enter ratings (out of 10) by Viewer %d for 3 movies: ", i + 1);
        for(j = 0; j < 3; j++) {
            scanf("%d", &ratings[i][j]);
        }
    }

    // Display ratings
    printf("\nRatings by each viewer:\n");
    for(i = 0; i < 4; i++) {
        printf("Viewer %d: ", i + 1);
        for(j = 0; j < 3; j++) {
            printf("%d ", ratings[i][j]);
        }
        printf("\n");
    }

    // Calculate average
    for(j = 0; j < 3; j++) {
        for(i = 0; i < 4; i++) {
            avg[j] += ratings[i][j];
        }
        avg[j] /= 4;
    }

    // Display averages
    printf("\nAverage rating of each movie:\n");
    for(j = 0; j < 3; j++) {
        printf("Movie %d: %.2f\n", j + 1, avg[j]);
    }

    // Find movie with highest avg rating
    float max = avg[0];
    int maxIndex = 0;
    for(j = 1; j < 3; j++) {
        if(avg[j] > max) {
            max = avg[j];
            maxIndex = j;
        }
    }

    printf("Movie with the highest average rating: Movie %d (%.2f)\n", maxIndex + 1, max);
}

// 2) Cricket Team Scorecard
void cricketScorecard() {
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
