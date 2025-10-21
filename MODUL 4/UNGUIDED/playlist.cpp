#include "Playlist.h"

Playlist::Playlist() {
    head = nullptr;
}

Playlist::~Playlist() {
    Lagu* current = head;
    while (current != nullptr) {
        Lagu* temp = current;
        current = current->next;
        delete temp;
    }
}

void Playlist::tambahDepan(string judul, string penyanyi, float durasi) {
    Lagu* baru = new Lagu{judul, penyanyi, durasi, nullptr};
    baru->next = head;
    head = baru;
}

void Playlist::tambahBelakang(string judul, string penyanyi, float durasi) {
    Lagu* baru = new Lagu{judul, penyanyi, durasi, nullptr};
    if (head == nullptr) {
        head = baru;
        return;
    }

    Lagu* temp = head;
    while (temp->next != nullptr)
        temp = temp->next;
    temp->next = baru;
}

void Playlist::tambahSetelahKe3(string judul, string penyanyi, float durasi) {
    Lagu* baru = new Lagu{judul, penyanyi, durasi, nullptr};

    Lagu* temp = head;
    int count = 1;
    while (temp != nullptr && count < 3) {
        temp = temp->next;
        count++;
    }

    if (temp == nullptr) {
        cout << "Playlist kurang dari 3 lagu.\n";
        delete baru;
        return;
    }

    baru->next = temp->next;
    temp->next = baru;
}

void Playlist::hapusLagu(string judul) {
    if (head == nullptr) {
        cout << "Playlist kosong!\n";
        return;
    }

    if (head->judul == judul) {
        Lagu* hapus = head;
        head = head->next;
        delete hapus;
        cout << "Lagu \"" << judul << "\" berhasil dihapus.\n";
        return;
    }

    Lagu* temp = head;
    while (temp->next != nullptr && temp->next->judul != judul)
        temp = temp->next;

    if (temp->next == nullptr) {
        cout << "Lagu tidak ditemukan.\n";
        return;
    }

    Lagu* hapus = temp->next;
    temp->next = hapus->next;
    delete hapus;
    cout << "Lagu \"" << judul << "\" berhasil dihapus.\n";
}

void Playlist::tampilkan() {
    if (head == nullptr) {
        cout << "Playlist kosong!\n";
        return;
    }

    Lagu* temp = head;
    int i = 1;
    cout << "\nDaftar Lagu dalam Playlist:\n";
    while (temp != nullptr) {
        cout << i++ << ". " << temp->judul << " - " << temp->penyanyi
             << " (" << temp->durasi << " menit)\n";
        temp = temp->next;
    }
}
