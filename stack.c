#include<stdio.h>
int top=-1,stack[100],m=0;
void push(int item)
{
	if(top>=99)
		printf("Overflow");
	else
	{	top++;
		stack[top]=item;
	}
	printf("\nPushed item is:%d",item);
}
void pop()
{
	if(top==-1)
		printf("Underflow");
	else
	{	
		printf("\nPoped item is:%d",stack[top]);
		stack[top]=stack[top+1];
		top--;
	}
}
void peep()
{
	if(top==-1)
		printf("underflow");
	else
		printf("%d",stack[top]);
}
void main()
{	
	int x,item;
	char ch;
	while(1)
	{
		printf("\n1.PUSH\n2.POP\n3.PEEP\n4.IsEmpty\n5.IsFull\n6.Exit\nEnter the choice:");
		scanf("%d",&x);
		switch(x)
		{	case 1:	printf("Enter the item:");
				scanf("%d",&item);
				push(item);
				break;
			case 2:	pop();
				break;
			case 3:	peep();
				break;
			case 4:	if(top<=0)
					printf("Underflow!");
				else
					printf("Stack is not empty");
				break;
			case 5:	if(top>=99)
					printf("Overflow!");
				else
					printf("stack is not full");
				break;
			case 6:	exit(0);
		}
	}
}			
