#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*head=0,*tail=0;
void createdll(){
    struct node *newnode;
    
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data \n");
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=0;
    if(head==0){
    head=tail=newnode;
    }
    else{
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
}
void insertatbeg(){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data \n");
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    newnode->next=head;
    head=newnode;
}
void insertatend(){
     struct node *newnode;
     //struct node *temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    //temp=(struct node*)malloc(sizeof(struct node));
    printf("enter data \n");
    scanf("%d",&newnode->data);
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
    /*if(head==NULL){
        head=newnode->data;

    }
    else{
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
        newnode->next=NULL;
*/
    
}
void insertatpos(){
    int pos,i=1,ln=0;
     struct node *newnode,*temp;
      newnode=(struct node*)malloc(sizeof(struct node));
        temp=head;
// while(temp!=NULL){
//     temp=temp->next;

// }
    printf("enter positions\n");
    scanf("%d",&pos);
   
   
    
    if(pos==1){
        insertatbeg();
    }
    else {
       temp=head;
   
    printf("enter data \n");
    scanf("%d",&newnode->data);
 while(i<pos-1){
     temp=temp->next;
     i++;
 }
 newnode->prev=temp;
 newnode->next=temp->next;
 temp->next=newnode;
 newnode->next->prev=newnode;
    }
}
void insertafterpos(){
    int pos,ln=0,i=0;
     struct node *newnode,*temp;
      newnode=(struct node*)malloc(sizeof(struct node));
        
    printf("enter position after which node has to be inserted\n");

    scanf("%d",&pos);
   
   printf("enter data \n");
    scanf("%d",&newnode->data);
 while(i<pos){
     temp=temp->next;
     i++;
 }
temp->next=newnode;
newnode->next=temp->next;
newnode->prev=temp;
newnode->next->prev=newnode;

}
void deletefrombeg(){
    struct node *temp;
    if(head==0){
        printf("empty list\n");
    }
    else{
        temp=head;
        head=head->next;
        head->prev=0;
        free(temp);
    }
}
void deletefromend(){
    struct node *temp;
    if(tail==0){
        printf("empty list\n");
    }
    else{
    temp=tail;
    tail->prev->next=NULL;
    tail=tail->prev;
    tail->next=NULL;
    free(temp);
}
}
void deletefrompos(){
    int i=0,pos;
   
    struct node *temp;
     printf("enter postion\n");
    scanf("%d",&pos);
    temp=head;
     while(i<pos){
     temp=temp->next;
     i++;
 }
 temp->next->prev=temp->prev;
temp->prev->next=temp->next;
free(temp);

}
void display()
{
    struct node *temp;
    if(head==NULL){
        printf("empty list\n");
    }
    else{
        printf("values are\n");
        temp=head;
        while(temp!=NULL){
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}
int main(){
    int choice;
    // struct node *p;
    // p=(struct node*)malloc(sizeof(struct node));
    do{
        printf("1.create\n");
        printf("2.insertatbeg\n");
        printf("3.insertatend\n");
        printf("4.insert at pos\n");
        printf("5.insert after pos\n");
        printf("6.delete from beg\n");
        printf("7.delete from end\n");
        printf("8.delete at pos\n");
        printf("9.display\n");
        printf("10.break\n");
    printf("enter your choice \n");
    scanf("%d",&choice);
    switch(choice){
        case 1:createdll();
        break;
        case 2:
        insertatbeg();
        break;
        case 3:
        insertatend();
        break;
        case 4:
        insertatpos();
        break;
        case 5:
        insertafterpos();
        break;
        case 6:
        deletefrombeg();
        break;
        case 7:
        deletefromend();
        break;
        case 8:deletefrompos();
        break;
        case 9:display();
        break;
        case 10:break;
        default:
        printf("enter proper choice\n");
    }
    }while(choice!=10);
    return 0;
}