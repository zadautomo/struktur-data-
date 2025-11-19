#ifndef QUEUE_H
#define QUEUE_H

const int MAX = 5;

struct Queue {
    int data[MAX];
    int head;
    int tail;
    int count;
};

void initQueue(Queue &Q);
bool isEmpty(Queue Q);
bool isFull(Queue Q);
void enqueue(Queue &Q, int x);
int dequeue(Queue &Q);
void printQueue(Queue Q);

#endif
