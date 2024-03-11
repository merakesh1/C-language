#include<stdio.h>

int arrStack[100];
int choice,n,top,input,i;

void push();
void pop();
void display();

void push(){
    if(top>=n-1){
        printf("Stack overflow");
        return;
    }
    else{
        printf("Enter the value to be pushed: ");
        scanf("%d",&input);
        top++;
        arrStack[top]=input;
        printf("Pushed successfully!");
    }
}

void pop(){
    if(top<=-1){
        printf("Stack underflow");
        return;
    }
    else{
        int decision;
        printf("do you really want to pop it out?1| 0: ");
        scanf("%d",&decision);
        if(decision==1){
            top--;
            printf("popped out successfully!");
        }
        else{
            return;
        }
    }
}

void display(){
    if(top<=-1){
        printf("Stack is empty");
    }
    else{
        for(i=top;i>=0;i--){
            printf("|\t\t\t\t%d\t\t\t\t|",arrStack[i]);
            printf("\n-----------------------------------------------------------------\n");
        }
    }
}
void peek(){
    if(top<=-1){
        printf("Stack is empty");
        return;
    }
    else{
        printf("top element is: %d",arrStack[top]);
    }
}

void main(){
    top=-1;
    printf("Enter the size of the stack: ");
    scanf("%d",&n);
    printf("\n");
    printf("\t\t\t\t\tstack operations\t\t\n-----------------------------------------------------------------------------------------");
    printf("\n-> Enter 1 to push\n-> Enter 2 to pop\n-> Enter 3 to display\n-> Enter 4 to exit\n");
    printf("-----------------------------------------------------------------------------------------");
    do{
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        if(choice==1){
            push();
        }
        else if(choice==2){
            pop();
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