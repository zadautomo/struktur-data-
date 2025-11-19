#include <iostream>
#include "queue3.h"
#include "queue3.cpp"
using namespace std;

int main() {
    Queue Q;
    initQueue(Q);

    enqueue(Q, 10);
    enqueue(Q, 20);
    enqueue(Q, 30);

    printQueue(Q);

    cout << "Dequeued: " << dequeue(Q) << endl;

    printQueue(Q);

    enqueue(Q, 40);
    enqueue(Q, 50);
    enqueue(Q, 60);

    printQueue(Q);

    return 0;
}
