#include <iostream>
#include "queue.h"
using namespace std;

void createQueue(Queue &Q) {
    Q.head = 0;
    Q.tail = -1;
}

bool isEmptyQueue(Queue Q) {
    return Q.head > Q.tail;
}

bool isFullQueue(Queue Q) {
    return Q.tail == 4;
}

void enqueue(Queue &Q, infotype x) {
    if (!isFullQueue(Q)) {
        Q.tail++;
        Q.info[Q.tail] = x;
    } else {
        cout << "Queue penuh!" << endl;
    }
}

infotype dequeue(Queue &Q) {
    if (!isEmptyQueue(Q)) {
        infotype x = Q.info[Q.head];
        Q.head++;
        return x;
    } else {
        cout << "Queue kosong!" << endl;
        return -1;
    }
}

void printInfo(Queue Q) {
    cout << Q.head << " - " << Q.tail << "\t|\t";
    if (isEmptyQueue(Q)) {
        cout << "empty queue" << endl;
    } else {
        for (int i = Q.head; i <= Q.tail; i++) {
            cout << Q.info[i] << " ";
        }
        cout << endl;
    }
}
