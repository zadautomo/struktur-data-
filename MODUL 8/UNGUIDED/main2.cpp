#include <iostream>
#include "queue2.h"
#include "queue2.cpp"
using namespace std;

int main() {
    Queue Q;
    createQueue(Q);

    printInfo(Q);
    enqueue(Q, 10); printInfo(Q);
    enqueue(Q, 20); printInfo(Q);
    enqueue(Q, 30); printInfo(Q);
    dequeue(Q);     printInfo(Q);
    enqueue(Q, 40); printInfo(Q);

    return 0;
}
