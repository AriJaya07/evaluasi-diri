# matriks.cpp

Program `matriks.cpp` adalah contoh dasar penggunaan matriks (array dua dimensi) dalam bahasa pemrograman C++.

## Deskripsi Program
Program ini menunjukkan cara mendeklarasikan, menginisialisasi, dan menampilkan matriks (array 2 dimensi) menggunakan tipe data `int`.

## Fitur
- Mendeklarasikan matriks 2x3 (2 baris, 3 kolom).
- Mengisi matriks dengan nilai awal.
- Menampilkan isi matriks ke layar dalam format baris dan kolom.

## Cara Kerja Program
1. Program membuat matriks 2x3 dengan nilai:

1 2 3
4 5 6

2. Program menampilkan nilai matriks ke layar dalam bentuk baris dan kolom.

## Contoh Kode

```cpp
#include <iostream>
using namespace std;

int main() {
 int matriks[2][3] = { {1, 2, 3}, {4, 5, 6} };
 cout << "Matriks:\n";
 for (int i = 0; i < 2; i++) {
     for (int j = 0; j < 3; j++) {
         cout << matriks[i][j] << " ";
     }
     cout << endl;
 }
 return 0;
}
```