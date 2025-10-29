#include "Doublylist.h"
#include "DOUBLYLIST.CPP"

int main() {
    List L;
    CreateList(L);
    infotype x;
    char pilih = 'y';

    while (pilih == 'y' || pilih == 'Y') {
        cout << "Masukkan nomor polisi : ";
        cin >> x.nopol;
        cout << "Masukkan warna kendaraan : ";
        cin >> x.warna;
        cout << "Masukkan tahun kendaraan : ";
        cin >> x.thnbuat;

        if (isExist(L, x.nopol)) {
            cout << "Nomor polisi sudah terdaftar!\n";
        } else {
            address P = alokasi(x);
            insertLast(L, P);
        }

        cout << "\nTambah data lagi? (y/n): ";
        cin >> pilih;
        cout << endl;
    }

    printInfo(L);
    return 0;
}
