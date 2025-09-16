#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* track;
struct node* head;

void createnode(int n)
{
    struct node* newnode = malloc(sizeof(struct node));
    newnode->data = n;
    newnode->next = NULL;
    if(track!=NULL){
        track->next = newnode;
    }
    track = newnode;
}

void traverse()
{
    struct node* temp = head;
    while (temp != NULL)
    {
        printf("%d->",temp->data);
        temp = temp->next;
    }
    
    
}

void main()
{
    createnode(2);
    head = track;
    createnode(3);
    createnode(4);
    createnode(5);

    createnode(7);
    createnode(8);

    createnode(6);

    traverse();

}