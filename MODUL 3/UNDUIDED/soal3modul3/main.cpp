#include <iostream>
#include "array.h"
#include "array.cpp"


int main() {
    int A[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[N][N] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    cout << "Array A:" << endl;
    tampilArray(A);
    cout << "Array B:" << endl;
    tampilArray(B);

    int baris = 1, kolom = 2; 
    tukarArrayPosisi(A, B, baris, kolom);

    cout << "\nSetelah menukar posisi [" << baris << "][" << kolom << "]:" << endl;
    cout << "Array A:" << endl;
    tampilArray(A);
    cout << "Array B:" << endl;
    tampilArray(B);

    int x = 10, y = 20;
    int *p1 = &x;
    int *p2 = &y;

    cout << "\nSebelum tukar pointer:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    tukarPointer(p1, p2);

    cout << "Setelah tukar pointer:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
