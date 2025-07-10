//ch.sc.u4cse24050
#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, area, circumference, volume;
    int choice;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    printf("\n--- Menu ---\n");
    printf("1. Area of Circle\n");
    printf("2. Circumference of Circle\n");
    printf("3. Volume of Sphere\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            area = PI * radius * radius;
            printf("Area of Circle = %.2f\n", area);
            break;
        case 2:
            circumference = 2 * PI * radius;
            printf("Circumference of Circle = %.2f\n", circumference);
            break;
        case 3:
            volume = (4.0 / 3.0) * PI * radius * radius * radius;
            printf("Volume of Sphere = %.2f\n", volume);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
