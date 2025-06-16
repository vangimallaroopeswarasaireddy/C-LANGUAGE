/*Accept inner and outer radius of a ring and print the perimeter and area of the ring 
(Hint: perimeter = 2 pi (a+b) , area = pi (a2-b2) ) 
ch.sc.u4cse24050*/

#include <stdio.h> 
int main() {
    float perimeter; //deciaring
    float area; //deciaring
    float a; //deciaring input
    float pi = 3.14;//deciaring
	float b;//deciaring input
	
    printf("Enter the a: ");
    scanf("%f", &a);//deciaring output
    
    printf("Enter the b: ");
    scanf("%f", &b);//deciaring output
    
    perimeter = 2*pi*(a+b);
    area = pi*(a*2-b*2);
    
    printf("perimeter: %.2f\n", perimeter);//output of perimeter
    printf("area: %.2f\n", area);//output of area
    
    return 0;
}	
