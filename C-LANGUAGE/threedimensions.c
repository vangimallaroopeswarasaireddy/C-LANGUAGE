/*    	Accept three dimensions length (l), breadth(b) and height(h) of a cuboid and print surface area and volume (Hint : surface area=2(lb+lh+bh ), volume = lbh ) 
ch.sc.u4cse24050*/
#include <stdio.h>
int main() {
    float l, b, h, surface_area, volume; //declare variables
    printf("Enter length, breadth and height of the cuboid: \n");
    scanf("%f %f %f", &l, &b, &h);
    surface_area = 2 * (l * b + l * h + b * h);//surface area=2(lb+lh+bh )
    volume = l * b * h;// volume = lbh
    printf("surface area = %.2f\n", surface_area);//output surface area
    printf("volume = %.2f\n", volume);//output volume
    return 0;
}