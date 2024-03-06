#include<stdio.h>
#include<stdlib.h>

struct node
{
    char ch;
    struct node* next;
};

struct node * head;
void main(){
    struct node* node1=(struct node*)malloc(sizeof(struct node));
    node1->ch='B';
    node1->next=NULL;

    head=node1;

    struct node* node2=(struct node*)malloc(sizeof(struct node));
    node2->ch='u';
    node2->next=NULL;

    struct node* node3=(struct node*)malloc(sizeof(struct node));
    node3->ch='s';
    node3->next=NULL;

    struct node* node4=(struct node*)malloc(sizeof(struct node));
    node4->ch='h';
    node4->next=NULL;

    struct node* node5=(struct node*)malloc(sizeof(struct node));
    node5->ch='r';
    node5->next=NULL;

    struct node* node6=(struct node*)malloc(sizeof(struct node));
    node6->ch='a';
    node6->next=NULL;

    node1->next=node2;
    node2->next=node3;
    node3->next=node4;
    node4->next=node5;
    node5->next=node6;
    node6->next=node1;

    struct node* temp=head;
    int count=0;
    do{
        count++;
        temp=temp->next;
    }
    while(temp!=head);
    // printf("Total number of nodes are : %d\n",count);

    int i=0;
    temp=head;
    while(i<count){
        printf("%c -> ",temp->ch);
        temp=temp->next;
        i++;
    }
    printf("NULL\n");

    /* while(temp!=NULL){
        printf("%c -> ",temp->ch);
        temp=temp->next;
    }
    printf("NULL\n"); */
}
