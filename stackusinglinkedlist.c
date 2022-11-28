#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *top = NULL;


void push(int value){
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    if (top == NULL){
        newNode->next = NULL;
    }
    else {
        newNode->next = top;
    }
    top = newNode;
    //printf("Node is Inserted with value : %d\n", top->data);
}

int pop(){
    if(top == NULL){
        printf("\nStack Underflow");
    }
    else{
        int temp_data = top->data;
        top = top->next;
        return temp_data;
    }
}

void peek(){
    if(top == NULL){
        printf("Stack underflow");
    }
    else{
        printf("%d",top->data);
    }
}

void display(){
    if(top == NULL){
        printf("Stack underflow");
    }
    else{
        printf("The stack is \n");
        struct Node *temp = top;
        while(temp->next != NULL){
            printf("%d-->", temp->data);
            temp = temp->next;
        }
        printf("%d-->NULL\n\n",temp->data);
    }
}

int main(){
    int choice,value;
    printf("IMPLEMENTATION OF STACK USING LIST\n");
    while(1>0){
        printf("\n 1)Push\n2)Pop\n3)Peek\n4)Display\n5)EXIT\n");
        printf("Enter choice :");scanf("%d",&choice);
        switch (choice){
            case 1:
            printf("Enter the value to insert");scanf("%d",&value);
            push(value);break;
            case 2:
            printf("Popped element is %d\n",pop());break;
            case 3:
            peek();break;
            case 4:
            display();break;
            case 5:
            exit(0);break;
            default:
            printf("\nWRONG CHOICE TRY AGAIN\n");


        }
    }


}
