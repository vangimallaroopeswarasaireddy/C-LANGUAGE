/*
66	A library has 5 shelves, and each shelf contains 4 different books.
- Use a 2D array to store the number of copies of each book on every shelf.
- Use a 1D array to store the total number of books on each shelf.
- Display:
- Copies of books shelf-wise.
- Total books on each shelf.
- Shelf with the maximum number of books.	30-07-25
//ch.sc.u4cse24050
*/
#include <stdio.h>
int main() {
    int books[5][4]; // 5 shelves, 4 books each
    int totalBooks[5] = {0}; // To store total number of books on each shelf
    int maxShelfIndex = 0; // Index of the shelf with the maximum number of books
    int maxBooks = 0; // Maximum number of books on a shelf

    // Input number of copies for each book on each shelf
    for (int i = 0; i < 5; i++) {
        printf("Enter number of copies for Shelf %d (4 books): ", i + 1);
        for (int j = 0; j < 4; j++) {
            scanf("%d", &books[i][j]);
            totalBooks[i] += books[i][j]; // Calculate total books on the shelf
        }
        if (totalBooks[i] > maxBooks) {
            maxBooks = totalBooks[i];
            maxShelfIndex = i; // Update index of the shelf with maximum books
        }
    }

    // Display copies of books shelf-wise
    printf("\nCopies of books shelf-wise:\n");
    for (int i = 0; i < 5; i++) {
        printf("Shelf %d: ", i + 1);
        for (int j = 0; j < 4; j++) {
            printf("%d ", books[i][j]);
        }
        printf("\n");
    }

    // Display total number of books on each shelf
    printf("\nTotal number of books on each shelf:\n");
    for (int i = 0; i < 5; i++) {
        printf("Shelf %d: %d\n", i + 1, totalBooks[i]);
    }

    // Display the shelf with the maximum number of books
    printf("\nShelf with the maximum number of books is Shelf %d with %d books.\n", 
           maxShelfIndex + 1, maxBooks);

    return 0;
}