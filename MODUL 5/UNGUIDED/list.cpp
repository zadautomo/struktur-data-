#include <iostream>
#include <string>
using namespace std;

struct infotype {
    string nopol;
    string warna;
    int tahun;
};

struct ElmList {
    infotype info;
    ElmList* next;
};

typedef ElmList* address;
typedef address List;

void createList(List &L) {
    L = NULL;
}

address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = NULL;
    return P;
}

void insertLast(List &L, address P) {
    if (L == NULL) {
        L = P;
    } else {
        address Q = L;
        while (Q->next != NULL) {
            Q = Q->next;
        }
        Q->next = P;
    }
}

void printInfo(List L) {
    address P = L;
    while (P != NULL) {
        cout << "Nomor Polisi : " << P->info.nopol << endl;
        cout << "Warna        : " << P->info.warna << endl;
        cout << "Tahun        : " << P->info.tahun << endl;
        cout << "--------------------------" << endl;
        P = P->next;
    }
}

address findElm(List L, string x) {
    address P = L;
    while (P != NULL) {
        if (P->info.nopol == x) {
            return P;
        }
        P = P->next;
    }
    return NULL;
}

int main() {
    List L;
    createList(L);

    infotype a = {"D001", "Hitam", 90};
    infotype b = {"D002", "Merah", 92};
    infotype c = {"D003", "Biru", 93};

    insertLast(L, alokasi(a));
    insertLast(L, alokasi(b));
    insertLast(L, alokasi(c));

    string cari;
    cout << "Masukkan Nomor Polisi yang dicari : ";
    cin >> cari;

    address hasil = findElm(L, cari);
    if (hasil != NULL) {
        cout << endl;
        cout << "Nomor Polisi : " << hasil->info.nopol << endl;
        cout << "Warna        : " << hasil->info.warna << endl;
        cout << "Tahun        : " << hasil->info.tahun << endl;
    } else {
        cout << "Data dengan nomor polisi " << cari << " tidak ditemukan." << endl;
    }

    return 0;
}
