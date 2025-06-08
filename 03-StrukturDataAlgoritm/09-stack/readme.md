# Implementasi Stack dengan Array di C++

Program ini menunjukkan implementasi struktur data **Stack** menggunakan array statis dalam bahasa C++.

## Deskripsi Program

Stack adalah struktur data **LIFO (Last In First Out)**, artinya elemen terakhir yang dimasukkan adalah elemen pertama yang keluar.

Program ini mengimplementasikan stack dengan menggunakan array dan variabel `top` sebagai penanda posisi elemen teratas.

## Penjelasan Kode

- `struct Stack`  
  Menyimpan elemen stack dalam array `data[100]` dengan kapasitas maksimal 100 elemen.  
  Variabel `top` menyimpan indeks elemen paling atas stack, dengan nilai awal -1 menandakan stack kosong.

- `push(int val)`  
  Menambahkan elemen ke posisi atas stack jika belum penuh. Jika penuh, menampilkan pesan "Stack penuh".

- `pop()`  
  Mengeluarkan dan mengembalikan elemen teratas stack jika tidak kosong. Jika kosong, menampilkan pesan "Stack kosong" dan mengembalikan -1.

- `isEmpty()`  
  Mengecek apakah stack kosong.

- `main()`  
  Contoh penggunaan fungsi push dan pop pada stack.


## Cara Menjalankan

1. Pastikan compiler C++ sudah terinstall (contoh: `g++`).
2. Simpan kode di atas ke file tersebut.
3. Compile program:
   ```bash
   g++ linked_list.cpp -o linked_list
4. Jalankan program:
   ```bash ./program
5. Program akan menampilkan data 

