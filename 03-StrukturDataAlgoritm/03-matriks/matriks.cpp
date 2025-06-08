#include <iostream>
using namespace std;

int main() {
    // Membuat matriks 2x3 (2 baris, 3 kolom) dengan elemen angka
    int matriks[2][3] = { {1, 2, 3}, {4, 5, 6} };
    cout << "Matriks:\n";
    // Loop untuk menampilkan semua elemen matriks baris demi baris
    for (int i = 0; i < 2; i++) {        // Iterasi tiap baris
        for (int j = 0; j < 3; j++) {    // Iterasi tiap kolom dalam baris
            cout << matriks[i][j] << " ";  // Cetak elemen matriks dengan spasi
        }
        cout << endl;  // Pindah baris setelah setiap baris matriks selesai dicetak
    }

    return 0;  // Akhiri program
}
