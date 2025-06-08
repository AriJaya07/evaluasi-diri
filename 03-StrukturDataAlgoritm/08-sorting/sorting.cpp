#include <iostream>
using namespace std;

// Fungsi bubbleSort untuk mengurutkan elemen array secara ascending
// arr[] = array yang akan diurutkan
// n = jumlah elemen array
void bubbleSort(int arr[], int n) {
    // Loop i untuk mengulangi proses pengurutan sebanyak n-1 kali
    for (int i = 0; i < n - 1; i++) {
        // Loop j untuk membandingkan elemen berdekatan dan menukar jika perlu
        for (int j = 0; j < n - 1 - i; j++) {
            // Jika elemen saat ini lebih besar dari elemen berikutnya, tukar posisinya
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Fungsi linearSearch untuk mencari nilai tertentu dalam array
// arr[] = array tempat pencarian
// n = jumlah elemen array
// key = nilai yang dicari
// Mengembalikan indeks elemen jika ditemukan, -1 jika tidak ditemukan
int linearSearch(int arr[], int n, int key) {
    // Loop untuk memeriksa setiap elemen array
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) return i;  // Jika ditemukan, kembalikan indeks
    }
    return -1;  // Jika tidak ditemukan, kembalikan -1
}

int main() {
    int arr[6] = {5, 3, 8, 6, 2, 7};  // Inisialisasi array

    cout << "Sebelum sorting: ";
    for (int i = 0; i < 6; i++) cout << arr[i] << " ";  // Tampilkan array sebelum diurutkan
    cout << endl;

    bubbleSort(arr, 6);  // Panggil fungsi untuk mengurutkan array

    cout << "Sesudah sorting: ";
    for (int i = 0; i < 6; i++) cout << arr[i] << " ";  // Tampilkan array setelah diurutkan
    cout << endl;

    int key = 6;  // Nilai yang ingin dicari
    int pos = linearSearch(arr, 6, key);  // Cari posisi nilai key dalam array
    if (pos != -1) 
        cout << "Data " << key << " ditemukan di index " << pos << endl;  // Jika ditemukan
    else 
        cout << "Data tidak ditemukan\n";  // Jika tidak ditemukan

    return 0;
}
