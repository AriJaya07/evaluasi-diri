# pointer.cpp

## Deskripsi

File ini berisi contoh sederhana penggunaan **pointer** dalam bahasa pemrograman C++. Pointer adalah variabel yang menyimpan alamat memori dari variabel lain. Program ini mendemonstrasikan bagaimana pointer dapat digunakan untuk:

- Menyimpan alamat variabel
- Mengakses nilai dari alamat tersebut
- Mengubah nilai variabel melalui pointer

## Struktur File

- `pointer.cpp` — Program utama yang mendemonstrasikan konsep dasar pointer.

## Fitur Utama

- Menampilkan nilai dan alamat suatu variabel.
- Menampilkan nilai yang ditunjuk oleh pointer.
- Mengubah nilai variabel melalui dereferensi pointer.

## Cara Menjalankan

1. Pastikan sudah menginstal compiler C++ seperti `g++`.
2. Kompilasi file dengan perintah berikut:

```bash
g++ pointer.cpp -o program
```

3. Jalankan hasil kompilasi:

```bash
./program
```

## Contoh Output

Nilai a        : 10
Alamat a       : 0x61fe14
Isi pointer p  : 0x61fe14
Nilai *p       : 10
Alamat pointer : 0x61fe10

Setelah *p = 20:
Nilai a        : 20
Nilai *p       : 20
