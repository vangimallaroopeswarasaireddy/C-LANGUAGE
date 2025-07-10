#include <stdio.h>
//ch.sc.u4cse24050
int main() {
    int choice;
    float length, breadth, base, height, area;

    printf("\n--- Menu ---\n");
    printf("1. Area of Square\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Triangle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter the length of the square: ");
            scanf("%f", &length);
            area = length * length;
            printf("Area of Square = %.2f\n", area);
            break;
        case 2:
            printf("Enter the length of the rectangle: ");
            scanf("%f", &length);
            printf("Enter the breadth of the rectangle: ");
            scanf("%f", &breadth);
            area = length * breadth;
            printf("Area of Rectangle = %.2f\n", area);
            break;
        case 3:
            printf("Enter the base of the triangle: ");
            scanf("%f", &base);
            printf("Enter the height of the triangle: ");
            scanf("%f", &height);
            area = 0.5 * base * height;
            printf("Area of Triangle = %.2f\n", area);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}