#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=0;
void createdll(){
    struct node *newnode,*temp;
   
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data \n");
    scanf("%d",&newnode->data);
    
    newnode->next=0;
    if(head==0){
    head=temp=newnode;
    }
    else{
       temp->next=newnode;
       temp=newnode; 
    }
    temp->next=head;
}
void display(){
   struct node  *temp;
   if(head==0){
   printf("empty list\n"); 
}else{
    temp=head;
    while(temp->next=head){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    printf("%d\n",temp->data);
}

}
