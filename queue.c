#include<stdio.h>
#define MAX_SIZE 100

typedef struct
{
    int head;
    int tail;
    int data[MAX_SIZE];
}queue;

void inqueue(queue* q, int item)
{
    q->data[q->tail] = item;
    q->tail = q->tail + 1;
}
void dequeue(queue* q)
{
    if(q->head==q->tail){
        printf("Queue is empty\n");
    }else{
        q->head = q->head + 1;
    }
}

void printQueue(queue* q)
{
    printf("\n");
    for(int i=q->head;i<q->tail;i++){
        printf("%d\t", q->data[i]);
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
    inqueue(&myQueue, 40);
    printQueue(&myQueue);
    dequeue(&myQueue);
    printQueue(&myQueue);
    inqueue(&myQueue,50);
    printQueue(&myQueue);
    dequeue(&myQueue);
    printQueue(&myQueue);

    return 0;
}