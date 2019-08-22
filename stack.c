#include<stdio.h>
int top=-1,stack[100],m=0;
void push(int item)
{
	if(top>=99)
		printf("Overflow");
	else
		top++;
		stack[top]=item;
}
void pop()
{
	if(top==-1)
		printf("Underflow");
	else
		stack[top]=stack[top+1];
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
	do
	{
		printf("1.PUSH\n2.POP\n3.PEEP\n4.IsEmpty\n5.IsFull");
		scanf("%d",&x);
		if(x==1)
		{
			printf("Enter the item:");
			scanf("%d",&item);
			push(item);
			m++;
		}
		else if(x==2)
		{
			pop();
			m--;
		}
		else if(x==3)
		{
			peep();
		}
		else if(x==4)
		{
			if(top==-1)
				printf("Underflow!");
		}
		else
		{
			if(top>=99)
				printf("Overflow!");
		}
		printf("Do you want to continue(y/n)");
		scanf("%c",&ch);
	}while(ch=='y');
	while(m!=0)
	{
		printf("%d",stack[top]);
		top--;
	}
}			
