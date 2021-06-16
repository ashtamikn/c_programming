#include<stdio.h>
void enqueue(int);
void dequeue();
int isFull();
int isEmpty();
void display(); 

 int item[5];
  int front=-1;
  int rear=-1;
  

// int main(){
   
//     enqueue(9);
//     enqueue(7);
//     enqueue(5);
//     enqueue(2);
    
//     display();
// }
void enqueue(int data)
{
 if(isFull()==1)
{
    return ;
}
else{
    if(front==-1)
    front=0;
    rear=rear+1;
    item[rear]=data;
}

}
void dequeue()
{
    if(isEmpty()==1)
 {
 return ;
 }
 else
 {
    printf("elements deleted is %d",item[front]);
    front=front+1;
 }
}
int isEmpty()
{
    if(front==-1)
printf("empty");
return 1;
}
int isFull()
{
    
if(rear==5)
{
    printf("que is full");


}
return 1;
}

void display()
{
    int j;
    if(rear==-1)
    printf("empty dude \n");
    else{
        printf("elements are");
        for(j=front;j<=rear;j++)
    printf("%d",item[j]);

    }
}

int main(){
    int choice,data;
    printf("1) insertion");

    printf("2) deletion");
    printf("3)display");
    printf("exit");
    
    do{
        printf("enter your choice");
    scanf("%d",&choice);
switch(choice){
    case 1:
    printf("enter data");
    scanf("%d",&data);
    enqueue(data);
    break;
    case 2:dequeue();
    break;
    case 3:display();
    break;
    case 4:printf("exit");
    break;
    default:printf("invalid choice");
}
    }while(choice!=4);

}
// void enqueue(){
//     int val,j;
//     if(isFull()==1)
//     printf("overflow");
//     else
//     {
//         if(isEmpty()==1)
//         front=0;
//         for(j=0;j<5;j++){
//         printf("insert ele");
//         scanf("%d",&val);
//         rear++;
//         item[rear]=val;
//     }
//     }
//     display();
//     }

//  void dequeue()
//  {
//      if(isEmpty()==1)
//      {
//      printf("underflow");
//  }
//      else
//      {
//      printf("ele deleted  from que is %d",item[front]);
//      front++;
//      }
//  }
//  void display()
//  {
//      int i;
//      if(isEmpty()==1)
//      printf("empty");
//      else
//      {
//          printf("que is \n");
//          for(i=front;i<rear;i++)
//          printf("%d",item[i]);

//      }
     
//  } 
// int isFull()
//  {
//      if(rear==4)
//      return 1;
//      else
//      {
//          return 0;
//      }
     
//  }  
//  int isEmpty()
//  {
//      if(front==-1||front>rear)
//      return 1;
//      else
//      {
//          return 0;
//      }
     
//  }


























 
 




















