#include<stdio.h>
#define MAX_SIZE 5

typedef struct
{
    int head;
    int tail;
    int data[MAX_SIZE];
}queue;
void emptyCheck(queue* q)
{
    if(q->head==q->tail){
        //printf("Queue is empty\n");
        q->head = 0;
        q->tail = 0;
    }
}

void inqueue(queue* q, int item)
{
    emptyCheck(q);
    if(q->tail==MAX_SIZE){
        printf("Queue is full!\n");
    }else{
        q->data[q->tail] = item;
        q->tail = q->tail + 1;
    }
}
void dequeue(queue* q)
{
    emptyCheck(q);
    q->head = q->head + 1;
    
}

void printQueue(queue* q)
{
    printf("\n");
    if(q->head==q->tail){
        printf("Queue is empty\n");
    }else{
        for(int i=q->head;i<q->tail;i++){
            printf("%d\t", q->data[i]);
        }
    }
}

int main()
{
    queue myQueue;
    int item;
    myQueue.head = 0;
    myQueue.tail = 0;
    inqueue(&myQueue, 10);
    inqueue(&myQueue, 20);
    inqueue(&myQueue, 30);
    //printQueue(&myQueue);
    dequeue(&myQueue);
    dequeue(&myQueue);
    dequeue(&myQueue);
    inqueue(&myQueue, 40);
    inqueue(&myQueue, 50);
    inqueue(&myQueue, 60);
    inqueue(&myQueue, 70);
    inqueue(&myQueue, 80);
    //inqueue(&myQueue, 90);

    printQueue(&myQueue);

    return 0;
}