#include<stdio.h>
int item
struct node
{
	int data;
	struct node *next;
}list,*temp,*head;
struct node *insend()
{
	printf("Enter the item:");
	scanf("%d",&item);
	temp=(struct node*)malloc(sizeof(struct node*));
	temp->data=item;
	temp->next=NULL;
	head=list;
	if(list==NULL)
	{
		list=temp;
		head=temp;
	}
	else
	{
		while(list!=NULL)
		{
			list=list->next;
			list->next=temp;
		}
	}
	return head;
}
struct node *insbeg()
{
	printf("Enter the item:");
	scanf("%d",&item);
	temp=(struct node*)malloc(sizeof(struct node*));
	temp->data=item;
	temp->next=NULL;
	head=temp;
	if(list==NULL)
	{
		list=temp;	
		return head;
	}
	else
	{
		temp->next=list;
		return head;
	}
}
struct node *insspe()
{
	int key;
	printf("Enter the item and key:");
	scanf("%d%d",&item,&key);
	temp=(struct node*)malloc(sizeof(struct node*));
	temp->data=item;
	temp->next=NULL;
	while(list!=NULL)
	{
		if(list->data==key)
		{
			temp->next=list->next;
			list->next=temp;
			break;
		}
		else
			list=list->next;
	}
}
void main()
{
	int a;
	while(1)
	{
		printf("1.Insertion at beg\n2.Insertion at end\n3.Insertion after a node\n4.Deletion at beg\n5.Deletion at end\n6.Deletion after a node\n7.Display\n8.Exit\nEnter the choice:");
		scanf("%d",&a);
		switch(a)
		{
			case 1:	insbeg();
				break;
			case 2:	insend();
				break;
			case 3:	insspe();
				break;
			/*case 4:	delbeg();
				break;
			case 5:	delend();
				break;
			case 6:	delspe();
				break;*/
			case 8:	exit(0);
			case 7:	while(list!=NULL)
				{
					printf("%d",list->data);
					list=list->next;
				}		
		}
	}
}
