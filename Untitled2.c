#include <stdio.h>
#include <stdlib.h> 
#define MAXSIZE 5
int stack[MAXSIZE];
	int top = -1;
int main() {
    int ch;
	
    printf("Stack Operations\n");
    printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
   do{
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
while (1);
    return 0;
}
void push() {
    int val;
    if (top >= MAXSIZE - 1) {
        printf("Stack Overflow!\n");
    }
    printf("Enter the value to push: ");
    scanf("%d", &val);
    top++;
    stack[top] = val;
    printf("%d pushed onto the stack.\n", val);
}

void pop() {
    if (top < 0) {
        printf("Stack Underflow!\n");
    }
    printf("Popped value: %d\n", stack[top]);
    top--;
}

void display() {
	int i;
    if (top < 0) {
        printf("Stack is empty.\n");
    }
    printf("Stack contents:\n");
    for (i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}

