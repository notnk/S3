#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int c,e;
    struct node *next;
}*f1=NULL,*f2=NULL,*temp;
void ins()
{
    int num1,num2,ch,i=0;
    //n=(struct node*)malloc(sizeof(struct node));
    while(i<2)
    {
    	printf("\n1 or 2 Polynomial:");
    	scanf("%d",&ch);
    	printf("Enter coeff");
   	scanf("%d",&num1);
    	printf("Enter exp:");
    	scanf("%d",&num2);
    	/*switch(ch)
    	{
		case 1:	n->c=num1;
 			n->e=num2;
    			if(f1==NULL)        
    			{
        			n->next=NULL;
       		 		f1=n;
    			}
    			else
    			{
        			n->next=f1;
      		  		f1=n;
    			}
    			break;
    		case 2:	n->c=num1;
 			n->e=num2;
    			if(f2==NULL)        
    			{
        			n->next=NULL;
        			f2=n;
    			}
    			else
    			{
        			n->next=f2;
        			f2=n;
    			}
				break;
		case 3:	exit(0);    
   	}*/
   	struct Node *r, *z; 
	z = temp; 
	if(z == NULL) 
	{ 
		r =(struct Node*)malloc(sizeof(struct Node)); 
		r->c = num1; 
		r->e=num2; 
		temp = r; 
		r->next = (struct Node*)malloc(sizeof(struct Node)); 
		r = r->next; 
		r->next = NULL; 
	} 
	else
	{ 
		r->c = num1; 
		r->e = num2; 
		r->next = (struct Node*)malloc(sizeof(struct Node)); 
		r = r->next; 
		r->next = NULL; 
	} 
   	i++;
   }
}
void main()
{	
	printf("Enter the coefficaints and the exponents:");
	ins();
	struct node *c,*head;
	temp=(struct Node *)malloc(sizeof(struct Node));
	c=NULL;
	head=NULL;
	//temp->next=NULL;
	while(f1->next!=NULL && f2->next!=NULL)
	{
		if(f1->e==f2->e)
		{
			temp->c=f1->c+f2->c;
			temp->e=f1->e;
			f1=f1->next;
			f2=f2->next;
		}
		else if(f1->e>f2->e)
		{
			temp->c=f1->c;
			temp->e=f1->e;
			f1=f1->next;
		}
		else if(f1->e<f2->e)
		{
			temp->c=f2->c;
			temp->e=f2->e;
			f2=f2->next;
		}}
		if(head==NULL)
		{
			head=temp;
			c=temp;
		}
		else
		{
			c=c->next;
			c=temp;
		}
	//}
	for(;f1;f1->next)
	{
		temp->e=f1->e;
		temp->c=f1->c;
		c->next=temp;
		c=c->next;
	}
	for(;f2;f2->next)
	{
		temp->e=f2->e;
		temp->c=f2->c;
		c->next=temp;
		c=c->next;
	}
	temp=head;
	printf("Final Polynomial is\n");
	while(temp->next!=NULL)
	{
		printf("%d^%d\t",temp->c,temp->e);
		temp=temp->next;
	}
}
