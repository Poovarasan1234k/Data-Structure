#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10
struct Queue {
    int items[MAX_SIZE];
    int front;
    int rear;
};
int initializeQueue(struct Queue *q) {
    q->front = -1;
    q->rear = -1;
}
int isFull(struct Queue *q) {
    return (q->rear == MAX_SIZE - 1);
}
int isEmpty(struct Queue *q) {
    return (q->front == -1);
}
void enqueue(struct Queue *q, int value) {
    if (isFull(q)) {
        printf("Queue is full. Cannot enqueue.\n");
        return;
    }
    if (isEmpty(q)) {
        q->front = 0;
    }
    q->rear++;
    q->items[q->rear] = value;
    printf("%d enqueued to the queue.\n", value);
}
int dequeue(struct Queue *q) {
    int value;
    if (isEmpty(q)) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1;
    }
    value = q->items[q->front];
    q->front++;
    if (q->front > q->rear) {
        q->front = q->rear = -1;
    }
    return value;
}
int display(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d ", q->items[i]);
    }
    printf("\n");
}
int main() {
    struct Queue q;
    initializeQueue(&q);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    display(&q);
    printf("Dequeued: %d\n", dequeue(&q));
    printf("Dequeued: %d\n", dequeue(&q));
    display(&q);
    return 0;
}