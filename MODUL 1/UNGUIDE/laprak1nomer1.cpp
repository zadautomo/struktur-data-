#include <iostream>
using namespace std;

int main() {
    float angka1, angka2;

    cout << "Masukkan angka pertama: ";
    cin >> angka1;

    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    cout << "Penjumlahan      = " << angka1 + angka2 << endl;
    cout << "Pengurangan      = " << angka1 - angka2 << endl;
    cout << "Perkalian        = " << angka1 * angka2 << endl;

    if (angka2 != 0) {
        cout << "Pembagian        = " << angka1 / angka2 << endl;
    } else {
        cout << "Pembagian        = Tidak bisa dibagi dengan nol!" << endl;
    }

    return 0;
}
