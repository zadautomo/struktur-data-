#include <iostream>
using namespace std;

struct Mahasiswa
{
    string nama;
    string NIM;
};

int main() {
    Mahasiswa mhs;
    mhs.nama = "Ibtida Zada Utomo";
    mhs.NIM = "103112430037";

    cout << "Nama : " << mhs.nama << endl << "NIM : " << mhs.NIM;
}