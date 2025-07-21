/* Accept two numbers and print arithmetic and harmonic mean of the two numbers (Hint: AM= (a+b)/2 , HM = ab/(a+b) ) 
ch.sc.u4cse24050*/
#include <stdio.h>
int main() {
	int a;//deciaring input
	int b;//deciaring input
	int arithmetic;//deciaring
	int harmonic;//deciaring
	
	printf("Enter the a: ");
    scanf("%d", &a);//deciaring output
    
    printf("Enter the b: ");
    scanf("%d", &b);//deciaring output
    
    arithmetic=(a+b)/2; //AM= (a+b)/2
    harmonic=a*b/(a+b); //HM = ab/(a+b)
    
    printf("arithmetic: %.2f\n", arithmetic);//output of arithmetic
    printf("harmonic: %.2f\n", harmonic);//output of harmonic
    
    return 0;
}
