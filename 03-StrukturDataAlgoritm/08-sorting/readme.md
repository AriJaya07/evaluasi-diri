# Program Bubble Sort dan Linear Search di C++

## Deskripsi

Program ini mengimplementasikan dua algoritma dasar pada array:

1. **Bubble Sort**: Mengurutkan elemen array secara ascending menggunakan metode bubble sort.
2. **Linear Search**: Mencari posisi sebuah nilai (key) dalam array.

Program akan menampilkan isi array sebelum dan sesudah diurutkan, serta hasil pencarian sebuah nilai tertentu.

## Penjelasan Algoritma

### Bubble Sort

- Melakukan iterasi pada array beberapa kali.
- Pada setiap iterasi, membandingkan elemen yang berdekatan dan menukar posisi jika elemen pertama lebih besar dari yang kedua.
- Setelah setiap iterasi, elemen terbesar akan "menggelembung" ke posisi akhir array.
- Proses ini diulang hingga seluruh array terurut.

### Linear Search

- Melakukan pengecekan elemen satu per satu dari indeks awal sampai akhir.
- Jika elemen ditemukan sama dengan nilai yang dicari (`key`), kembalikan indeks elemen tersebut.
- Jika tidak ditemukan, kembalikan -1.


## Cara Menjalankan

1. Pastikan compiler C++ sudah terinstall (contoh: `g++`).
2. Simpan kode di atas ke file tersebut.
3. Compile program:
   ```bash
   g++ linked_list.cpp -o linked_list
4. Jalankan program:
   ```bash ./program
5. Program akan menampilkan data 




