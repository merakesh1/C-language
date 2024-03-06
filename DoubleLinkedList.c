#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *leftHead;
struct node *rightHead;

void main(){
    struct node * ptr1=(struct node*)malloc(sizeof(struct node));
    ptr1->data=16;
    ptr1->prev=NULL;
    ptr1->next=NULL;

    leftHead=ptr1;

    struct node * ptr2=(struct node*)malloc(sizeof(struct node));
    ptr2->data=25;
    ptr2->prev=NULL;
    ptr2->next=NULL;

    struct node * ptr3=(struct node*)malloc(sizeof(struct node));
    ptr3->data=36;
    ptr3->prev=NULL;
    ptr3->next=NULL;

    struct node * ptr4=(struct node*)malloc(sizeof(struct node));
    ptr4->data=49;
    ptr4->prev=NULL;
    ptr4->next=NULL;

    rightHead=ptr4;

    ptr1->next=ptr2;
    ptr2->prev=ptr1;

    ptr2->next=ptr3;
    ptr3->prev=ptr2;

    ptr3->next=ptr4;
    ptr4->prev=ptr3;

    struct node * temp;
    temp=leftHead;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");

    temp=rightHead;
    printf("NULL");
    while(temp!=NULL){
        printf(" <- %d",temp->data);
        temp=temp->prev;
    }
}