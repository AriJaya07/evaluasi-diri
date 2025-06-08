#include <iostream>
using namespace std;

int main() {
    // Membuat array integer dengan 5 elemen
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Array: ";
    // Loop untuk menampilkan semua elemen dalam array
    for (int i = 0; i < 5; i++) 
        cout << arr[i] << " ";  // Cetak elemen ke-i diikuti spasi
    cout << endl;               // Pindah baris setelah selesai
}
