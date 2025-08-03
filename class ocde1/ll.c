//ch.sc.u4cse24050
#include <stdio.h>
int main() {
    int a1[] = {10, 25, 90};
    int a2[] = {9, 16, 22, 26, 100};
    int size1 = sizeof(a1) / sizeof(a1[0]);
    int size2 = sizeof(a2) / sizeof(a2[0]);
    int a3[size1 + size2];
    int i = 0, j = 0, k = 0;
    // Merge both arrays while comparing
    while (i < size1 && j < size2) {
        if (a1[i] < a2[j]) {
            a3[k++] = a1[i++];
        } else {
            a3[k++] = a2[j++];
        }
    }
    // Copy remaining elements from a1 (if any)
    while (i < size1) {
        a3[k++] = a1[i++];
    }
    // Copy remaining elements from a2 (if any)
    while (j < size2) {
        a3[k++] = a2[j++];
    }

    // Print the merged array
    printf("Merged Sorted Array:\n");
    for (int m = 0; m < size1 + size2; m++) {
        printf("%d ", a3[m]);
    }

    return 0;
}