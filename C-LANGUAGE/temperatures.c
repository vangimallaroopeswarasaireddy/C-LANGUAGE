/*Accept temperatures in Fahrenheit (F) and print it in Celsius(C) and Kelvin (K) (Hint: C=5/9(F-32), K = C + 273.15) 
ch.sc.u4cse24050*/
#include <stdio.h> 
int main() {
    float fahrenheit;
	float celsius;
	float kelvin;
	//deciaring input
	printf("Enter the Fahrenheit: ");
    scanf("%f", &fahrenheit);//enter input
	
	celsius=5.0/9.0*(fahrenheit-32.0);//C=5/9(F-32)
	kelvin=celsius+273.15;// K = C + 273.15
	 
	printf("celsius: %.2f\n", celsius);//output of celsiuws
    printf("kelvin: %.2f\n", kelvin);//output of kelvin
	
	return 0;
}
