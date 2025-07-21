/*
Write the program that accepts a char–type variable called color and displaysappropriate message using the sample code 1 above.
Execute the program for various character values and fill in the following table. 
Modify the program to include all rainbow colours 
*/
#include <stdio.h>
int main(){
	char color;
	printf("Enter Color: ");
	scanf("%c",&color);
	switch (color){
		case 'r' : case 'R' :
			printf ("RED");
			break;
		case 'o' : case 'O' :
			printf ("ORANGE");
			break;
		case 'y' : case 'Y' :
			printf ("YELLOW");
			break;
		case 'i' : case 'I' :
			printf ("INDIGO");
			break;
		case 'v' : case 'V' :
			printf ("VIOLET");
			break;
		case 'g' : case 'G' :
			printf ("GREEN");
			break;
		case 'b' : case 'B' :
			printf ("BLUE");
			break;
		default :
			printf ("INVALID COLOR");
	}
	return 0;
}

