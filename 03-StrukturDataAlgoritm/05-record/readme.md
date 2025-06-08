# Program Record Mahasiswa (record.cpp)

Program ini merupakan contoh sederhana penggunaan **struct** di C++ untuk menyimpan dan mengelola data mahasiswa.

## Fitur Program

- Menyimpan data mahasiswa dalam bentuk record menggunakan struct `Mahasiswa`.
- Meminta input data mahasiswa (nama, NIM, umur, dan nilai) dari pengguna.
- Menampilkan data mahasiswa yang sudah diinput ke layar.

## Penjelasan Program

Program menggunakan `struct Mahasiswa` yang berisi:
- `nama` (string): Nama mahasiswa
- `nim` (string): Nomor Induk Mahasiswa
- `umur` (int): Umur mahasiswa
- `nilai` (float): Nilai mahasiswa

Program kemudian meminta pengguna memasukkan data mahasiswa satu per satu dan menampilkannya.

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

Masukkan nama: Budi Santoso
Masukkan NIM: 123456789
Masukkan umur: 20
Masukkan nilai: 85.5

Data Mahasiswa:
Nama : Budi Santoso
NIM  : 123456789
Umur : 20
Nilai: 85.5
