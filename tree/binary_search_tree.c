#include<stdio.h>
#include<stdlib.h>
struct node{
    int key;
    struct node *left,*right;
};
struct node* newNode(int item)
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->key=item;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
void inorderDisplay(struct node* root){
    if(root!=NULL)
    {
        inorderDisplay(root->left);
        printf("%d\n",root->key);
        inorderDisplay(root->right);
    }

}
void preorderDisplay(struct node* root){
    if(root==NULL){
        return;
    }
     else{
            printf("%d\n",root->key);
        preorderDisplay(root->left);
        preorderDisplay(root->right);
    }
}
void postorderDisplay(struct node* root)
{
    if(root==NULL)
    {
    return;
    }
     else{ 
       postorderDisplay(root->left);
        postorderDisplay(root->right);
        printf("%d\n",root->key);
    }
}

struct node* insert(struct node* n,int k)
{
    if(n==NULL)
    {
        return newNode(k);
    }
    else if(k<n->key){
        n->left=insert(n->left,k);
    }
    else{
        if(k>n->key)
         n->right=insert(n->right,k);
    }
return n;
}
struct node* search(struct node* root,int key){
    if(root==NULL||root->key==key)
    {
        return root;
    }
    else if(root->key<key)
    {
        
        return search(root->right,key);
    }
    else{
       
        return search(root->left,key);
    }
}
int main()
{
    struct node* root=NULL;
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    int x,choice,element;
  //  printf("if you want to insert no more no ,enter -1\n");
    
    do
    {  
        printf("1.to insert\n");
        printf("2.inorder display\n");
        printf("3.preorder display\n");
        printf("4.post order display\n");
        printf("5.to search\n");
        printf("6.break\n");
        
        printf("enter choice\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:printf("enter  data\n");
        scanf("%d",&x);
        if(root==NULL){
            root=insert(root,x);
        }
        else{
            insert(root,x);
        }
        break;
        case 2:inorderDisplay(root);
        break;
        case 3:preorderDisplay(root);
        break;
        case 4:postorderDisplay(root);
        break;
        case 5:
        printf("enter element to be searched\n");
        scanf("%d",&element);
        new_node=search(root,element);
        
        if(new_node!=NULL){
            printf("element found\n");
        }else{
            printf("element not found in tree\n");
        }
        break;
        case 6:
        break;
        default:
        printf("enter proper choice\n");
    }
    }while(choice!=6);
    return 0;
}