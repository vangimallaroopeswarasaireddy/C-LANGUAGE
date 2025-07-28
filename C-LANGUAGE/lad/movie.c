#include <stdio.h>
//ch.sc.u4cse24050
int main() {
    printf("=== MOVIE RATING SYSTEM ===\n");
    int ratings[4][3]; // 4 viewers, 3 movies
    float avg[3] = {0};
    int i, j;
    // Input ratings
    for(i = 0; i < 4; i++) {
        printf("Enter ratings (out of 10) by Viewer %d for 3 movies: ", i + 1);
        for(j = 0; j < 3; j++) {
        	int temp ;
            scanf("%d", &temp  );
            if ( temp <= 10 && temp >=0 ){
            	ratings[i][j]= temp; 
			}
			else return -1; 
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
