#include<stdio.h>

#define MAX_SIZE 100

typedef struct
{
    int top;
    int data[MAX_SIZE];
}stack;

void push(stack* s, int item)
{
    if(s->top<MAX_SIZE){
        s->data[s->top] = item;
        s->top = s->top + 1;
    }else{
        printf("Stack is full\n");
    }
}

void pop(stack* s)
{
    if(s->top==0){
        printf("Stack is empty!\n");
    }else{
        s->top = s->top - 1;
    }
}

void printStack(stack* s)
{
    if(s->top==0){
        printf("Stack is empty!\n");
    }else{
        for(int i = 0; i < s->top;i++){
            printf("%d\t", s->data[i]);
        }
    }
}
int main()
{
    stack firstStack;
    firstStack.top = 0;
    int item;

    push(&firstStack, 5);
    push(&firstStack, 10);
    push(&firstStack, 15);

    pop(&firstStack);
    //pop(&firstStack);
    //pop(&firstStack);
    printStack(&firstStack);

    return 0;
}
