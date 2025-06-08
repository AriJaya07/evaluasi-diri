# Binary Search Tree (BST) Implementation in C++

Program ini mengimplementasikan struktur data pohon biner pencarian (Binary Search Tree - BST) menggunakan bahasa C++.

## Fitur Program

- Struktur `TreeNode` untuk merepresentasikan node pohon biner dengan data integer dan pointer ke anak kiri dan kanan.
- Fungsi `insert` untuk memasukkan node baru ke dalam pohon secara rekursif sesuai aturan BST.
- Fungsi `inorder` untuk melakukan traversal inorder yang mengunjungi node secara terurut (ascending).

## Penjelasan Program

1. **Struktur TreeNode**  
   Setiap node berisi nilai (`data`) dan dua pointer untuk anak kiri dan kanan.

2. **Fungsi Insert**  
   Memasukkan nilai baru ke pohon dengan aturan:  
   - Nilai lebih kecil ke subtree kiri  
   - Nilai lebih besar atau sama ke subtree kanan

3. **Traversal Inorder**  
   Mengunjungi node secara terurut: kiri → root → kanan, sehingga hasil cetak adalah urutan nilai yang terurut.


## Cara Menjalankan

1. Pastikan compiler C++ sudah terinstall (contoh: `g++`).
2. Simpan kode di atas ke file tersebut.
3. Compile program:
   ```bash
   g++ linked_list.cpp -o linked_list
4. Jalankan program:
   ```bash ./program
5. Program akan menampilkan data 

