#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan angka : ";
    cin >> n;

    for (int i = n; i >= 0; i--) {
        for (int j = 0; j < n - i; j++) {
            cout << "  ";
        }

        if (i == 0) {
            cout << "*";
        } else {
            for (int k = i; k >= 1; k--) {
                cout << k << " ";
            }

            cout << "* ";

            for (int k = 1; k <= i; k++) {
                cout << k << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
