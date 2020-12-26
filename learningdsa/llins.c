#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void printList(struct Node *n){
    while(n!=NULL){
        printf("%d \n",n->data);
        //cout << n->data << " ";
        n=n->next;
    }
}

void push(struct Node **head,int data){
    struct Node * new_node =(struct Node*)malloc(sizeof(struct Node));
    new_node -> data = data;
    new_node->next = (*head);
    (*head)= new_node;
}
void insertAfter(struct Node *prev_node,int data){
    if(prev_node == NULL){
        printf("The give previousnode cannot be NULL");
        return;
    }
    struct Node * new_node =(struct Node*)malloc(sizeof(struct Node));
    new_node -> data = data;
    new_node -> next = prev_node ->next;
    prev_node -> next = new_node;

}
void Append(struct Node **n,int data){
    struct Node *new_node =(struct Node*)malloc(sizeof(struct Node));
    struct Node *last = *n;
    new_node -> data = data;
    new_node -> next = NULL;
    if(*n==NULL){
        *n = new_node;
        return;
    }

    while(last->next!=NULL){
        last = last-> next;
    }
    last->next = new_node;
    return;
}


int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head -> data = 1;
    head->next = second;
    second ->data = 2;
    second->next = third;
    third->data=3;
    third->next=NULL;

    printList(head);
    push(&head,0);
    printList(head);


    
    return 0;
}
