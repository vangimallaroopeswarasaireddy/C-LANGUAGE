/*Write a program to accept an integer and check if it is even or odd.
ch.sc.u4cse24050*/
#include <stdio.h> 
int main() {

        int n; 
        printf("Enter no."); 
		scanf("%d",&n); 

	if(n% 2==0){
		printf("The number is even: %.2d" ,n); 	
		}
		else{
		printf("The number is odd: %.2d" ,n);
		}
		return 0;
	} 
