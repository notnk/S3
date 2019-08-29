#include<stdio.h>
int stack[20];
int t1=-1;
int t2=10;
void push(int item,int x)
{	
	if(x==1)
	{
		if(t1>=9)
			printf("Overflow");
		else
		{	t1++;
			stack[t1]=item;
		}
	}
	else
	{
		if(t2>=20)
			printf("Overflow");
		else
		{	t2++;
			stack[t2]=item;
		}
	}
	printf("\nPushed item is:%d",item);
}
void pop(int x)
{
	if(x==1)
	{
		if(t1==-1)
			printf("Underflow");
		else
		{	
			printf("\nPoped item is:%d",stack[t1]);
			stack[t1]=stack[t1+1];
			t1--;
		}
	}
	else
	{
		if(t2==9)
			printf("Underflow");
		else
		{	
			printf("\nPoped item is:%d",stack[t2]);
			stack[t2]=stack[t2+1];
			t2--;
		}
	}
		
}
void peep(int x)
{
	if(x==1)
	{
		if(t1==-1)
			printf("underflow");
		else
			printf("%d",stack[t1]);
	}
	else
	{
		if(t2==-1)
			printf("underflow");
		else
			printf("%d",stack[t2]);
	}
		
}
void main()
{
	int item,x,y;
	while(1)
	{	
		printf("\nStack1 or Stack2:");
		scanf("%d",&y);
		printf("\n1.PUSH\n2.POP\n3.PEEP\n4.IsEmpty\n5.IsFull\n6.Exit\nEnter the choice:");
		scanf("%d",&x);
		switch(x)
		{	case 1:	printf("Enter the item:");
				scanf("%d",&item);
				push(item,y);
				break;
			case 2:	pop(y);
				break;
			case 3:	peep(y);
				break;
			case 4:	if(y==1)
				{
					if(t1<=0)
						printf("Underflow!");
					else
						printf("Stack is not empty");
				}
				else
				{
					if(t2<=10)
						printf("Underflow!");
					else
						printf("Stack is not empty");
				}
				break;
			case 5:	if(y==1)
				{
					if(t1>=9)
						printf("Overflow!");
					else
						printf("stack is not full");
				}
				else
				{
					if(t2>=20)
						printf("Overflow!");
					else
						printf("stack is not full");
				}
				break;
			case 6:	exit(0);
		}
	}
}
