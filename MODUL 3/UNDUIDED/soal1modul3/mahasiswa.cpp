#include <iostream>
#include "mahasiswa.h"
using namespace std;

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
}

Mahasiswa createMahasiswa(string nama, string nim, float uts, float uas, float tugas) {
    Mahasiswa mhs;
    mhs.nama = nama;
    mhs.nim = nim;
    mhs.uts = uts;
    mhs.uas = uas;
    mhs.tugas = tugas;
    mhs.nilaiAkhir = hitungNilaiAkhir(uts, uas, tugas);
    return mhs;
}

void tampilMahasiswa(Mahasiswa mhs) {
    cout << "Nama         : " << mhs.nama << endl;
    cout << "NIM          : " << mhs.nim << endl;
    cout << "Nilai UTS    : " << mhs.uts << endl;
    cout << "Nilai UAS    : " << mhs.uas << endl;
    cout << "Nilai Tugas  : " << mhs.tugas << endl;
    cout << "Nilai Akhir  : " << mhs.nilaiAkhir << endl;
}
