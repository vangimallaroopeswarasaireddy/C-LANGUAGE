#include <stdio.h>

int main() {
    float marks1, marks2, marks3, average;
    FILE *file;

    // Accept marks for three subjects
    printf("Enter marks for subject 1: ");
    scanf("%f", &marks1);
    printf("Enter marks for subject 2: ");
    scanf("%f", &marks2);
    printf("Enter marks for subject 3: ");
    scanf("%f", &marks3);

    // Calculate average
    average = (marks1 + marks2 + marks3) / 3;

    // Determine class obtained
    char *classObtained;

    if (average > 75)
        classObtained = "Distinction";
    else if (average > 60)
        classObtained = "Class I";
    else if (average >= 50)
        classObtained = "Class II";
    else if (average >= 40)
        classObtained = "Pass Class";
    else
        classObtained = "Fail";

    // Display average and class
    printf("Average marks: %.2f\n", average);
    printf("Class obtained: %s\n", classObtained);

    // Open file to write results
    file = fopen("results.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(file, "Marks for subject 1: %.2f\n", marks1);
    fprintf(file, "Marks for subject 2: %.2f\n", marks2);
    fprintf(file, "Marks for subject 3: %.2f\n", marks3);
    fprintf(file, "Average marks: %.2f\n", average);
    fprintf(file, "Class obtained: %s\n", classObtained);

    fclose(file);

    printf("Results saved to results.txt\n");

    return 0;
}

