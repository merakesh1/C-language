#include <stdio.h>

struct node{
    int value;
    struct node *next;
};

void main(){
    struct node n1,n2,n3,n4,n5,n6;

    n1.value=610;
    n2.value=420;
    n3.value=330;
    n1.next=&n2;
    n2.next=&n3;
    n3.next=NULL;

    n4.value=140;
    n5.value=550;
    n6.value=860;
    n4.next=&n5;
    n5.next=&n6;
    n6.next=NULL;

    struct  node *head1=&n1;
    struct node *head2=&n4;

    struct node *temp=head1;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=head2;

    temp=head1;
    while(temp->next!=NULL){
        printf("%d->",temp->value);
        temp=temp->next;
    }
    printf("%d->NULL",temp->value);
}
