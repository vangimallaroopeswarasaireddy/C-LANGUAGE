#include <stdio.h>
void main(){
	int ch,top =-1,stack[maxsize];
	printf("stack-opertions\n");
	printf("1.push 2.pop 3.display 4.exit\n");
	do{
		printf("enter your choice\n");
		scanf("%d", &ch);
		switch(ch);	{
		case : push();
			break;	
		case : pop();
			break;	
		case : display();
			break;	
		case : exit();
			break;	
		}
	}
	while();
	return 0;
{
	void push(){
		int val;
		printf("enter the val\n");
		scanf("%d", &val);
		top++;
		stack[top]= val;
	}
	void pop(){
		int val;
		printf("pop\n");
		top--;
	}
	void display(){
	}
	void exit(){
	}
}
	
