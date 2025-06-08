# Linked List Sederhana di C++

Program ini mendemonstrasikan implementasi dasar dari **Linked List** menggunakan bahasa pemrograman C++.

## Penjelasan Kode

- **Struct Node**: Merepresentasikan satu elemen dari linked list, yang berisi data integer dan pointer ke node berikutnya.
- **Fungsi `tambahNode`**: Menambahkan node baru di akhir linked list. Jika linked list kosong, node baru akan menjadi head.
- **Fungsi `tampilkanList`**: Menampilkan isi linked list dari head sampai node terakhir dengan format `data -> data -> NULL`.
- **Fungsi `main`**: Membuat linked list kosong, menambah beberapa node, lalu menampilkan linked list.

## Cara Menjalankan

1. Pastikan compiler C++ sudah terinstall (contoh: `g++`).
2. Simpan kode di atas ke file tersebut.
3. Compile program:
   ```bash
   g++ linked_list.cpp -o linked_list
4. Jalankan program:
   ```bash ./program
5. Program akan menampilkan data 
