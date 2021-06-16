#include<stdlib.h>
#include <stdio.h>
 struct Node 
{ 
    int data; 
    struct Node *next; 
}*rear=NULL; 
void Insert(int val)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
    new_node->data=val;
    if(rear==NULL)
    {
     rear=new_node;

    }
    else
    {
        new_node->next=rear;
        rear=new_node;
    }
}
void Delete()
{
    rear=rear->next;
}
void display() 
{ 
 struct Node *node=rear;
    while (node != NULL) 
    { 
        printf(" %d ", node->data); 
        node = node->next; 
    } 
}
    int main()
    {

        int choice,n;
        while(1)
        {

                printf(" \n 1.insert     \n");
               
                printf(" 2.Delete     \n");
                printf(" 4.Display  \n");
                printf(" 5.Exit       \n");
                printf("--------------------------------------\n");
                printf("Enter your choice:\t");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                        printf("enter data\n");
                        scanf("%d",&n);
                        Insert(n);
                                  break;      
                        case 2:Delete();
                                    break;    
                                       
                        case 3:display();
                                 break;
                             
                        default:
                          printf("n Wrong Choice:n");
                         break;
                }
        }
     return 0;
}
    