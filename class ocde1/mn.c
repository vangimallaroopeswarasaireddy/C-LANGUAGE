/*
Write a program to find the intersection of the two sets of integers. Store the intersection in another array.
*/
//ch.sc.u4cse24050
#include <stdio.h>
int main() {
    int set1[100], set2[100], intersection[100];
    int n1, n2, k = 0;
    // Input the size and elements of the first set
    printf("Enter the number of elements in the first set: ");
    scanf("%d", &n1);
    printf("Enter %d elements of the first set:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &set1[i]);
    }
    // Input the size and elements of the second set
    printf("Enter the number of elements in the second set: ");
    scanf("%d", &n2);
    printf("Enter %d elements of the second set:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &set2[i]);
    }
    // Find intersection
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (set1[i] == set2[j]) {
                intersection[k++] = set1[i]; // Add to intersection if found
                break; // No need to check further for this element
            }
        }
    }
    // Print the intersection
    printf("Intersection of the two sets:\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", intersection[i]);
    }
    printf("\n");
    return 0;
}