#include "Playlist.h"
#include "playlist.cpp"

int main() {
    Playlist myPlaylist;
    int pilihan;
    string judul, penyanyi;
    float durasi;

    do {
        cout << "\n=== MENU PLAYLIST ===\n";
        cout << "1. Tambah lagu di awal\n";
        cout << "2. Tambah lagu di akhir\n";
        cout << "3. Tambah lagu setelah lagu ke-3\n";
        cout << "4. Hapus lagu berdasarkan judul\n";
        cout << "5. Tampilkan seluruh lagu\n";
        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan) {
            case 1:
                cout << "Masukkan judul lagu: ";
                getline(cin, judul);
                cout << "Masukkan nama penyanyi: ";
                getline(cin, penyanyi);
                cout << "Masukkan durasi (menit): ";
                cin >> durasi;
                myPlaylist.tambahDepan(judul, penyanyi, durasi);
                break;

            case 2:
                cout << "Masukkan judul lagu: ";
                getline(cin, judul);
                cout << "Masukkan nama penyanyi: ";
                getline(cin, penyanyi);
                cout << "Masukkan durasi (menit): ";
                cin >> durasi;
                myPlaylist.tambahBelakang(judul, penyanyi, durasi);
                break;

            case 3:
                cout << "Masukkan judul lagu: ";
                getline(cin, judul);
                cout << "Masukkan nama penyanyi: ";
                getline(cin, penyanyi);
                cout << "Masukkan durasi (menit): ";
                cin >> durasi;
                myPlaylist.tambahSetelahKe3(judul, penyanyi, durasi);
                break;

            case 4:
                cout << "Masukkan judul lagu yang akan dihapus: ";
                getline(cin, judul);
                myPlaylist.hapusLagu(judul);
                break;

            case 5:
                myPlaylist.tampilkan();
                break;

            case 0:
                cout << "Keluar dari program.\n";
                break;

            default:
                cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 0);

    return 0;
}
