 //ch.sc.u4cse24505
 //Accept dimensions of a cylinder and print the surface area and volume (Hint: surface area = 2pr2 + 2prh, volume = pr2h)
#include <stdio.h> 
int main() {
    float radius; 
    float height; 
    float surfaceArea; 
    float pi = 3.14;
	float volume;      

    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);
    surfaceArea = 2 * pi * radius * radius + 2 * pi * radius * height;
    volume = pi * radius * radius * height;

    printf("Surface Area: %.2f\n", surfaceArea);
    printf("Volume: %.2f\n", volume);          

    return 0;
} 
