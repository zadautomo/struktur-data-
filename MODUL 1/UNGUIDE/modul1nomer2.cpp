#include <iostream>
using namespace std;

string konversi(int n) {
    string satuan[] = {"nol", "satu", "dua", "tiga", "empat",
                       "lima", "enam", "tujuh", "delapan", "sembilan"};
    
    if (n < 10) {
        return satuan[n];
    } else if (n == 10) {
        return "sepuluh";
    } else if (n == 11) {
        return "sebelas";
    } else if (n < 20) {
        return satuan[n - 10] + " belas";
    } else if (n < 100) {
        int puluh = n / 10;
        int sisa = n % 10;
        string hasil = satuan[puluh] + " puluh";
        if (sisa != 0) {
            hasil += " " + satuan[sisa];
        }
        return hasil;
    } else if (n == 100) {
        return "seratus";
    }
    return "Masukkan angka 0-100";
}

int main() {
    int angka;
    cout << "Masukkan angka : ";
    cin >> angka;

    if (angka < 0 || angka > 100) {
        cout << "mohon masukkan angka dari 0-100" << endl;
    } else {
        cout << konversi(angka) << endl;
    }

    return 0;
}
