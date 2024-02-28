#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

typedef struct node node1;
void main()
{
    node1* Node1=(node1 *)malloc(sizeof(node1));

    Node1->data=10;

    node1* Node2=(node1 *)malloc(sizeof(node1));

    Node2->data=20;

    node1* Node3=(node1 *)malloc(sizeof(node1));

    Node3->data=30;

    node1* Node4=(node1 *)malloc(sizeof(node1));

    Node4->data=40;

    Node1->next=Node2;

    Node2->next=Node3;

    Node3->next=Node4;

    Node4->next=NULL;

    node1* currentElement=Node1;

    while (currentElement!=NULL)
    {
        printf("%d\n",currentElement->data);
        currentElement=currentElement->next;
    }
}