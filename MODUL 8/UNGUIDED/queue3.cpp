#include "queue3.h"
#include <iostream>
using namespace std;

void initQueue(Queue &Q) {
    Q.head = 0;
    Q.tail = 0;
    Q.count = 0;
}

bool isEmpty(Queue Q) {
    return Q.count == 0;
}

bool isFull(Queue Q) {
    return Q.count == MAX;
}

void enqueue(Queue &Q, int x) {
    if (isFull(Q)) {
        cout << "Queue penuh!\n";
        return;
    }
    Q.data[Q.tail] = x;
    Q.tail = (Q.tail + 1) % MAX; 
    Q.count++;
}

int dequeue(Queue &Q) {
    if (isEmpty(Q)) {
        cout << "Queue kosong!\n";
        return -1;
    }
    int x = Q.data[Q.head];
    Q.head = (Q.head + 1) % MAX; 
    Q.count--;
    return x;
}

void printQueue(Queue Q) {
    if (isEmpty(Q)) {
        cout << "Queue kosong!\n";
        return;
    }

    cout << "Isi Queue: ";
    int idx = Q.head;
    for (int i = 0; i < Q.count; i++) {
        cout << Q.data[idx] << " ";
        idx = (idx + 1) % MAX;
    }
    cout << endl;
}
