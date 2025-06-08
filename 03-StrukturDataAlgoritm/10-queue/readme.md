# Implementasi Queue dengan Array di C++

Program ini mendemonstrasikan implementasi dasar struktur data **Queue** menggunakan array statis dalam bahasa C++.

## Deskripsi Program

Queue adalah struktur data **FIFO (First In First Out)**, artinya elemen yang pertama kali masuk akan menjadi elemen pertama yang keluar.

Pada program ini, queue diimplementasikan menggunakan array dengan teknik **circular queue** agar dapat mengoptimalkan penggunaan array.

## Penjelasan Kode

- `struct Queue`  
  Menggunakan array `data[100]` untuk menyimpan elemen queue dengan kapasitas maksimum 100 elemen.  
  `front` menunjuk ke indeks elemen paling depan, `rear` menunjuk ke indeks elemen paling belakang, dan `size` menyimpan jumlah elemen saat ini.

- `enqueue(int val)`  
  Menambahkan elemen baru ke bagian belakang queue jika belum penuh. Indeks `rear` bergerak maju secara melingkar.

- `dequeue()`  
  Menghapus dan mengembalikan elemen paling depan queue jika tidak kosong. Indeks `front` bergerak maju secara melingkar.

- `isEmpty()`  
  Mengecek apakah queue kosong.

- `main()`  
  Contoh penggunaan fungsi enqueue dan dequeue pada queue.


## Cara Menjalankan

1. Pastikan compiler C++ sudah terinstall (contoh: `g++`).
2. Simpan kode di atas ke file tersebut.
3. Compile program:
   ```bash
   g++ linked_list.cpp -o linked_list
4. Jalankan program:
   ```bash ./program
5. Program akan menampilkan data 

