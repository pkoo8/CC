/* C Program to traverse and print the data of a linked list in reverse order*/

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
void Reverse(struct node* head)
{
  if(head == NULL)
    return;

  Reverse(head->next);

  printf("%d  ", head->data);
}

int main(){

    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;

    head =(struct node*)malloc(sizeof(struct node*));
    second = (struct node*)malloc(sizeof(struct node*));
    third = (struct node*)malloc(sizeof(struct node*));

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next = NULL;

    Reverse(head);

    return 0;
}