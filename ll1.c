#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void main()
{

    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *element1 = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    element1->data = 40;

    head->next = element1;

    element1->next = NULL;

    struct node *temp=head;

    while(temp->next!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    printf("%d\n",temp->data);
}