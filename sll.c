#include<stdio.h>
#include<stdlib.h> 
struct node
{
    int data;
    struct node *next;
}*first=NULL,*current,*n;
  int ch;
    void insbeg();
    void insend();
    int inspos();
    void display();
    void delbeg();
    void delend();
    int delpos();
int main()
{
   
 
    while(1)
    {
        printf("\n1.Insert \n2.Delete \n3.Display \n4.Exit\n");
        printf("Enter your choice :");
        scanf("%d",&ch);
 
        switch(ch)
        {
            case 1:
       
                    printf("\n1.Beginning  \n2.At End  \n3.specified position  \n4.Exit");
                    printf("\nEnter choice:");
                    scanf("%d",&ch);
 
                    switch(ch)
                    {
                        case 1: insbeg();
                                break;
                        case 2: insend();
                                break;
                        case 3: inspos();
                                break;
                        case 4: exit(0);
                        default: printf("Wrong Choice");
                    }
                    break;
 
            case 2:
                    printf("\n1.Beginning  \n2.From end  \n3.At  position  \n4.Exit");
     
               printf("\nEnter your choice :");
                    scanf("%d",&ch);
 
                    switch(ch)
                    {
                        case 1: delbeg();
                                break;
                        case 2: delend();
                                break;
                        case 3: delpos();
                                break;
                        case 4: exit(0);
                        default: printf("Wrong Choice");
                    }
                    break;


            case 3: display();
                    break;
 

            case 4: exit(0);
                    default: printf("Wrong Choice");
        }
    }

    return 0;
}
 
void insbeg()
{
    int num;
    n=(struct node*)malloc(sizeof(struct node));
    printf("Enter value");
    scanf("%d",&num);
    n->data=num;
 
    if(first==NULL)        
    {
        n->next=NULL;
        first=n;
    }
    else
    {
        n->next=first;
        first=n;
    }
}
 
void insend()
{
    int num;
    n=(struct node*)malloc(sizeof(struct node));
    printf("Enter value:");
    scanf("%d",&num);
    n->data=num;
    n->next=NULL;
 
    if(first==NULL)     
    {
        first=n;
    }
    else
    {
        current=first;
        while(current->next!=NULL)
        	current=current->next;
        current->next=n;
    }
}
 
int inspos()
{
    int pos,i,num;
    if(first==NULL)
    {
        printf("Empty");
        return 0;
    }
 
    n=(struct node*)malloc(sizeof(struct node));
    printf("Enter value:");
    scanf("%d",&num);
    printf("Enter position to insert:");
    scanf("%d",&pos);
    n->data=num;
 
    current=first;
    for(i=1;i<pos;i++)
    {
        if(current->next==NULL)
        {
            printf("underflow");
            
        }
 
        current=current->next;
    }
 
    n->next=current->next;
    current->next=n;
    return 0;
}
 
void display()
{
    if(first==NULL)
    {
        printf("empty");
    }
    else
    {
        current=first;
        printf("Linked list== ");
        while(current!=NULL)
        {
            printf("%d ",current->data);
            current=current->next;
        }
    }printf("\n\n");
}
 
void delbeg()
{
    if(first==NULL)
    {
        printf("Empty list");
    }
    else
    {
        current=first;
        first=first->next;
        printf("Deleted element: %d",current->data);
        
    }
}
 
void delend()
{
    if(first==NULL)
    {
        printf("Empty");
    }
    else
    {
        current=first;
        while(current->next->next!=NULL)
        current=current->next;
 
        n=current->next;
        current->next=NULL;
        printf("Deleted element is %d",n->data);
        
    }
}
 
int delpos()
{
    int pos,i;
 
    if(first==NULL)
    {
        printf("Empty");
        
    }
 
    printf("Enter pos");
    scanf("%d",&pos);
 
    current=first;
    for(i=1;i<pos;i++)
    {
        if(current->next==NULL)
        {
            printf("Empty");
            return 0;
        }
        current=current->next;
    }
 
    n=current->next;
    current->next=n->next;
    printf("Deleted element=%d",n->data);
    
 
    return 0;
}
