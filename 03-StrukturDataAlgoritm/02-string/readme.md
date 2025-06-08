# string.cpp

Program `string.cpp` adalah contoh dasar penggunaan tipe data string pada bahasa pemrograman C++.

## Deskripsi Program
Program ini menunjukkan cara mendeklarasikan, menginisialisasi, dan menampilkan data string menggunakan `std::string` dari pustaka standar C++. 

## Fitur
- Mendeklarasikan variabel string.
- Mengisi string dengan teks.
- Menampilkan isi string ke layar.

## Cara Kerja Program
1. Program membuat variabel string bernama `text`.
2. Variabel `text` diisi dengan kalimat "Hello, World!".
3. Program menampilkan isi string ke layar.

## Contoh Kode

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "Hello, World!";
    cout << "String: " << text << endl;
    return 0;
}
