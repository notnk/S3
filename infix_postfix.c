#include<stdio.h>
int top=-1,s[100];
char item;
void push(char item)
{
	if(top>=99)
		printf("Overflow");
	else
	{	top++;
		s[top]=item;
	}
}
char pop()
{	
	char c;
	if(top==-1)
		printf("Underflow");
	else
	{	
		//printf("\nPoped item is:%d",stack[top]);
		c=s[top];
		top--;
		return c;
	}
}
int op(char c)
{
	if((c>='a' && c<='z')||(c>='A' && c<='Z'))
		return 1;
	else
		return 0;
}
int isp(char c)
{
	if(c=='+'|| c=='-')
		return 2;
	else if(c=='*' || c=='/')
		return 4;
	else if(c=='^')
		return 5;
	else if(c=='('||c==')'||c=='#')
		return 0;
}
int icp(char c)
{
	if(c=='+'|| c=='-')
		return 1;
	else if(c=='*' || c=='/')
		return 3;
	else if(c=='^')
		return 6;
	else if(c=='(')
		return 9;
	else if(c==')'||c=='#')
		return 0;
}
void main()
{	
	int i=0;
	char m;
	printf("Enter the expression:");
	for(;;)
	{
		scanf("%c",&m);
		if(m=='#')
		{
			push('#');
			break;
		}
		push(m);
	}
	char c;
	while(s[i]!='#')
	{
		c=s[i];
		if(op(c))
			printf("%c",c);
		else if(c==')')
		{
			while(s[top]!='(')
				printf("%c",pop());
		}
		else
		{
			while(isp(s[top])>=icp(c))
			{
				printf("%c",pop());
			}
			push(c);
		}
		i++;
	}
	while(s[top]!='#')
	{
		printf("%c",pop());
		pop();
	}
}
