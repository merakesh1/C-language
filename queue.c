#include<stdio.h>

int arrQueue[100];
int front = -1;
int rear = -1;
int choice;

void enqueue_push();
void dequeue_pop();
void display();

void enqueue_push(){
    int input;
    if(rear==99){
        printf("Queue overflow");
    }
    else{
        if(front==-1){
            front++;   
        }
        printf("Enter the value to be pushed: ");
        scanf("%d",&input);
        rear++;
        arrQueue[rear]=input;
        printf("Pushed successfully!");
    }
}

void dequeue_pop(){
    if(front==-1 || front>rear){
        printf("Queue underflow");
    }
    else{
        front++;
        printf("Popped successfully!");
    }
}

void display(){
    if(front==-1){
        printf("Queue is empty");
    }
    else{
       int i;
       printf("\t");
       for(i=0;i<(rear-front+1);i++){
        printf("------------------");
       }
       printf("\n");
       printf("---->\t\t");
       for (i=rear;i>=front;i--){
            printf("%d\t|\t",arrQueue[i]);
            if(i==front){
                printf("  ---->");
            }
       }
       printf("\n\t");
       for(i=0;i<(rear-front+1);i++){
        printf("------------------");
       }
    }
}

void main(){
    printf("\t\t\t\tQueue operations\t\t\n-----------------------------------------------------------------------------------------");
    printf("\n-> Enter 1 to push\n-> Enter 2 to pop\n-> Enter 3 to display\n-> Enter 4 to exit\n");
    printf("-----------------------------------------------------------------------------------------");
    do{
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        if(choice==1){
            enqueue_push();
        }
        else if(choice==2){
            dequeue_pop();
        }
        else if(choice==3){
            printf("printing.................\n\n");
            display();
        }
        else if(choice==4){
            printf("Thank you!!!");
        }
        else{
            printf("Invalid choice");
        }
    }while(choice==1 || choice==2 || choice==3);
}