//ch.sc.u4cse24050
#include <stdio.h>

int main() {
    int arr[100], n, i, j, k = 0;
    int unique[100]; // Array to store unique elements

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find unique elements
    for (i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (j = 0; j < k; j++) {
            if (arr[i] == unique[j]) {
                isDuplicate = 1; // Element is a duplicate
                break;
            }
        }
        if (!isDuplicate) {
            unique[k++] = arr[i]; // Add unique element to the new array
        }
    }

    // Print the new array with unique elements
    printf("Array after removing duplicates:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

    int lines;
    printf("Enter number of lines: ");
    scanf("%d", &lines);

    for (int i = 1; i <= lines; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d\n", j);
        }
        printf("\n");
    }

    int num, sum;
    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        printf("%d\n", sum);
        num = sum;
    } while (sum >= 10);

    return 0;
}