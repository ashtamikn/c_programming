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
struct node* minValueNode(struct node* node)
{
    struct node* current = node;
 
    /* loop down to find the leftmost leaf */
    while ( current->left != NULL)
        current = current->left;
 
    return current;
}
struct node* delete(struct node* root,int key)
{
    if(root==NULL)
    {
        return root;
    }
    else if(key<root->key)
    {
        root->left=delete(root->left,key);
    }
    else if(key>root->key)
    {
        root->right=delete(root->right,key);
    }
    else {
        // node with only one child or no child
        if (root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }
 
        // node with two children: 
        // Get the inorder successor
        // (smallest in the right subtree)
        struct node* temp = minValueNode(root->right);
 
        // Copy the inorder 
        // successor's content to this node
        root->key = temp->key;
 
        // Delete the inorder successor
        root->right = delete(root->right, temp->key);
    }
    return root;
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
        printf("6.delete\n");
        printf("7.break\n");
        
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
        printf("enter element to be deleted\n");
        scanf("%d",&element);
        delete(root,element);
        break;
        case 7:
        break;
        default:
        printf("enter proper choice\n");
    }
    }while(choice!=7);
    return 0;
}