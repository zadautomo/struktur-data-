#include <iostream>
#include "mahasiswa.h"
#include "mahasiswa.cpp"
using namespace std;

int main() {
    Mahasiswa daftar[10];
    int n;

    cout << "Masukkan jumlah mahasiswa (maks 10): ";
    cin >> n;
    if (n > 10) n = 10;

    for (int i = 0; i < n; i++) {
        string nama, nim;
        float uts, uas, tugas;
        cin.ignore();
        cout << "\nData mahasiswa ke-" << i + 1 << endl;
        cout << "Nama   : ";
        getline(cin, nama);
        cout << "NIM    : ";
        getline(cin, nim);
        cout << "UTS    : ";
        cin >> uts;
        cout << "UAS    : ";
        cin >> uas;
        cout << "Tugas  : ";
        cin >> tugas;

        daftar[i] = createMahasiswa(nama, nim, uts, uas, tugas);
    }

    cout << "\n=== DATA MAHASISWA ===\n";
    for (int i = 0; i < n; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        tampilMahasiswa(daftar[i]);
    }

    return 0;
}
