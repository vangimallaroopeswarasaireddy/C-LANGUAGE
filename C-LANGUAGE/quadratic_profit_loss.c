#include <stdio.h>
#include <math.h>
//CH.SC.U4CSE24050
int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imagPart;
    double costPrice, sellingPrice, amount;

    // Input coefficients
    printf("Enter coefficients a, b and c for quadratic equation (ax^2 + bx + c = 0):\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Coefficient 'a' cannot be zero for a quadratic equation.\n");
        return 1;
    }

    // Calculate discriminant
    discriminant = b*b - 4*a*c;

    // Calculate roots based on discriminant
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and distinct:\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else if (discriminant == 0) {
        root1 = -b / (2*a);
        printf("Roots are real and equal:\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } else {
        realPart = -b / (2*a);
        imagPart = sqrt(-discriminant) / (2*a);
        printf("Roots are complex and imaginary:\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    // Input cost price and selling price
    printf("\nEnter Cost Price: ");
    scanf("%lf", &costPrice);
    printf("Enter Selling Price: ");
    scanf("%lf", &sellingPrice);

    // Calculate profit or loss
    if (sellingPrice > costPrice) {
        amount = sellingPrice - costPrice;
        printf("Profit = %.2lf\n", amount);
    } else if (costPrice > sellingPrice) {
        amount = costPrice - sellingPrice;
        printf("Loss = %.2lf\n", amount);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}

