#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node *previous, *next;
}*head = NULL;
void insertAtBeginning(int value)
{
struct Node *newNode;
newNode = (struct Node*)malloc(sizeof(struct Node));

newNode -> data = value;
newNode -> previous = NULL;
if(head == NULL)
{
newNode -> next = NULL;
head = newNode;
}
else
{
newNode -> next = head;
head = newNode;
}
printf("\nInsertion success!!!");
}
struct Node* Delete()
{
    struct Node* temp;
    temp=head;
    head=head->next;
    head->previous=NULL;
    return temp;
}
void insert()
{ 
    struct Node* temp;
    struct Node* newnode;
    newnode=Delete();
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->previous=temp;
    newnode->next=NULL;
}
void display()
{
    struct Node* node;
    node=head;
while (node != NULL) {
		printf("%d ", node->data);
		node = node->next;
	}
}
void main()
{
    
int choice1, value;

do
{
printf("\n*********** MENU *************\n");
printf("1. Insertatbeg\n2. Delete\n3. insert\n4.display \n5.exit\n");
scanf("%d",&choice1);
switch(choice1)
{
case 1: printf("Enter the value to be inserted: ");
scanf("%d",&value);
insertAtBeginning(value);
break;
case 2:Delete();
break;
case 3:insert();
break;
case 4:display();
break;
case 5:break;
default:printf("enter properly\n");
break;
}
}while(choice1!=5);
}