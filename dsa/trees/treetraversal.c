#include<stdio.h>
#include<stdlib.h>
struct node{
    int item;
    struct node* left;
    struct node* right;
};

// Inorder Traversal
void inordertraversal(struct node* root){
    if(root==NULL){
        return;
    }
    inordertraversal(root->left);
    printf("%d->",root->item);
    inordertraversal(root->right);
}

//Preorder Traversal
void preordertraversal(struct node* root){
    if (root == NULL) return;
    printf("%d ->", root->item);
    preordertraversal(root->left);
    preordertraversal(root->right);
}

// postorderTraversal traversal
void postorderTraversal(struct node* root) {
    if (root == NULL) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d ->", root->item);
}

//Create a new node
struct node* createNode(int value){
    struct node* newNode = malloc(sizeof(struct node));
    newNode->item = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

//Insert on the left side of the node
struct node* insertLeft(struct node* root,int value){
    root->left = createNode(value);
    return root->left;
}

//Insert on the right side of the node
struct node* insertRight(struct node* root,int value){
    root->right = createNode(value);
    return root->right;
}

int main(){
  struct node* root = createNode(1);
  insertLeft(root, 12);
  insertRight(root, 9);

  insertLeft(root->left, 5);
  insertRight(root->left, 6);

  printf("Inorder traversal \n");
  inordertraversal(root);

  printf("\nPreorder traversal \n");
  preordertraversal(root);

  printf("\nPostorder traversal \n");
  postorderTraversal(root);
  return 0;
}