#include<stdio.h>

struct node{
    int data;
    struct node *next;
};

typedef struct node node1;

void main(){
    node1 Node1,Node2,Node3,Node4,Node5,Node6;

    Node1.data=10;

    Node2.data=40;

    Node3.data=50;

    Node4.data=60;

    Node5.data=70;

    Node6.data=80;

    Node1.next=&Node2;
    Node2.next=&Node3;
    Node3.next=&Node4;
    Node4.next=&Node5;
    Node5.next=&Node6;  
    Node6.next=NULL;

    node1 * currentElement=&Node1;
    while(currentElement!=NULL){
        printf("%d\n",currentElement->data);
        currentElement=currentElement->next;
    }

    /* int a=10;
    int *ptr=&a;
    printf("%d\n",*ptr); */
    
}