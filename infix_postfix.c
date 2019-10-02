#include<stdio.h>
int top=-1;
int s[100];
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
void post()
{
	int i=0,g=0;
	char m,d[100];
	printf("Enter the expression(Enter '#' in the end):");
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
		{
			//printf("%c",c);
			d[g]=c;
			g++;
		}
		else if(c==')')
		{
			while(s[top]!='(')
			{
				//printf("%c",pop());
				d[g]=pop();
				g++;
			}
		}
		else
		{
			while(isp(s[top])>=icp(c))
			{
				//printf("%c",pop());
				d[g]=pop();
				g++;
			}
			push(c);
		}
		i++;
	}
	while(s[top]!='#')
	{
		//printf("%c",pop());
		d[g]=pop();
		g++;
	}
	d[g]='\0';
	int l=0;
	printf("Enter final expression is:\n");
	for(;;)
	{	
		if(d[l]=='\0')
			break;
		else
		{
			printf("%c",d[l]);
			l++;
		}
	}
}
int eval_postfix(char *postfix) {
 char ch;
 int i = 0, op1, op2;
 while((ch = postfix[i++]) != 0) {
 if(isdigit(ch)) 
 push(ch-'0'); /* Push the operand */
 else { /* Operator,pop two operands */
 op2 = pop();
 op1 = pop();
 switch(ch) {
 case '+' : push(op1+op2); 
 break;
 case '-' : push(op1-op2); 
 break;
 case '*' : push(op1*op2);
 break;
 case '/' : push(op1/op2);
 break;
 }
 }
 }
 return s[top];
}
void main()
{
		post();
		eval();
}
