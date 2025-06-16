/*Accept initial velocity (u), acceleration (a) and time (t). Print the final velocity (v) and
distance (s) travelled. (Hint: v = u + at, s = u + at 2)
ch.sc.u4cse24050*/
#include <stdio.h>
int main() {
	int u;
	int a;
	int t;
	int distance;
	int velocity;
	
	printf("Enter the velocity: ");
    scanf("%d", &u);
    
    printf("Enter the acceleration: ");
    scanf("%d", &a);
    
    printf("Enter the tima: ");
    scanf("%d", &t);\
    
    velocity=u+a*t;
    distance=u+a*t*t;
    
    printf("velocity is : %d\n" ,velocity);
    printf("distance is : %d\n" ,distance);
    	
    return 0;
}
