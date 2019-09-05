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
/*void eval()
{
	int i=0,r;
	char op1,op2;
	while(x[i]!='#')
	{
		item=s[i];
		if(no(item))
			push(item);
		else
		{
			op1=pop();
			op2=pop();
			r=e(op1,op2,item);
			push(r);
		}
		i++;
	}
	r=pop();
	printf("%d",r);		
}*/
void main()
{	
	/*int a;
	scanf("%d",&a);
	if(a==1)
		post();
	else
	{
		post();
		eval();
	}*/
	post();
}
