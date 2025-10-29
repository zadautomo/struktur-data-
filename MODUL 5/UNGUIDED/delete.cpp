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

// Membuat list kosong
void createList(List &L) {
    L = NULL;
}

// Membuat elemen baru
address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = NULL;
    return P;
}

// Menambah elemen di akhir list
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

// Menampilkan isi list
void printInfo(List L) {
    address P = L;
    while (P != NULL) {
        cout << "Nomor Polisi : " << P->info.nopol << endl;
        cout << "Warna        : " << P->info.warna << endl;
        cout << "Tahun        : " << P->info.tahun << endl;
        cout << "---------------------------" << endl;
        P = P->next;
    }
}

// Fungsi mencari elemen berdasarkan nomor polisi
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

// Procedure deleteFirst
void deleteFirst(List &L, address &P) {
    if (L != NULL) {
        P = L;
        L = L->next;
        P->next = NULL;
    } else {
        P = NULL;
    }
}

// Procedure deleteLast
void deleteLast(List &L, address &P) {
    if (L != NULL) {
        if (L->next == NULL) {
            P = L;
            L = NULL;
        } else {
            address Q = L;
            while (Q->next->next != NULL) {
                Q = Q->next;
            }
            P = Q->next;
            Q->next = NULL;
        }
    } else {
        P = NULL;
    }
}

// Procedure deleteAfter
void deleteAfter(address Prec, address &P) {
    if (Prec != NULL && Prec->next != NULL) {
        P = Prec->next;
        Prec->next = P->next;
        P->next = NULL;
    } else {
        P = NULL;
    }
}

// Program utama
int main() {
    List L;
    createList(L);

    // Data awal
    infotype a = {"D004", "Kuning", 99};
    infotype b = {"D003", "Hijau", 91};
    infotype c = {"D002", "Hitam", 90};
    infotype d = {"D001", "Putih", 90};

    insertLast(L, alokasi(a));
    insertLast(L, alokasi(b));
    insertLast(L, alokasi(c));
    insertLast(L, alokasi(d));

    string cari;
    cout << "Masukkan Nomor Polisi yang akan dihapus : ";
    cin >> cari;

    address P = findElm(L, cari);
    if (P == NULL) {
        cout << "Data dengan nomor polisi " << cari << " tidak ditemukan." << endl;
    } else {
        if (P == L) { // Elemen pertama
            deleteFirst(L, P);
        } else if (P->next == NULL) { 
            deleteLast(L, P);
        } else {
            address Prec = L;
            while (Prec->next != P) {
                Prec = Prec->next;
            }
            deleteAfter(Prec, P);
        }
        cout << "Data dengan nomor polisi " << cari << " berhasil dihapus." << endl;
    }

    cout << endl << "DATA LIST :" << endl;
    printInfo(L);

    return 0;
}
