#include <iostream>
#include <string>
using namespace std;

// Definisi struct Mahasiswa yang berfungsi sebagai record data mahasiswa
struct Mahasiswa {
    string nama;  // Menyimpan nama mahasiswa
    string nim;   // Menyimpan NIM mahasiswa
    int umur;     // Menyimpan umur mahasiswa
    float nilai;  // Menyimpan nilai mahasiswa
};

int main() {
    Mahasiswa mhs1;  // Membuat variabel mhs1 bertipe Mahasiswa

    // Input data mahasiswa dari user
    cout << "Masukkan nama: ";
    getline(cin, mhs1.nama);  // Menggunakan getline agar bisa memasukkan nama dengan spasi
    cout << "Masukkan NIM: ";
    getline(cin, mhs1.nim);   // Input NIM
    cout << "Masukkan umur: ";
    cin >> mhs1.umur;         // Input umur
    cout << "Masukkan nilai: ";
    cin >> mhs1.nilai;        // Input nilai

    // Menampilkan data mahasiswa yang sudah diinput
    cout << "\nData Mahasiswa:\n";
    cout << "Nama : " << mhs1.nama << endl;
    cout << "NIM  : " << mhs1.nim << endl;
    cout << "Umur : " << mhs1.umur << endl;
    cout << "Nilai: " << mhs1.nilai << endl;

    return 0;
}
