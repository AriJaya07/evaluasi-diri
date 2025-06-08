# Todo Metamask - Pengantar Keamanan Sistem Informasi

**Link repository:** [Github](https://github.com/AriJaya07/todo-metamask)
**Link live:** [TodoList](https://todo-meta.onrender.com)

Todo Metamask adalah aplikasi to-do list sederhana yang terintegrasi dengan dompet kripto MetaMask. Aplikasi ini dibangun menggunakan JavaScript framework **Next.js**, dengan **Prisma** sebagai ORM, **MySQL** sebagai basis data, dan **ApexCharts** untuk visualisasi aktivitas. Proyek ini bertujuan untuk menunjukkan pemahaman dalam pengantar keamanan sistem informasi.

## Konsep Keamanan yang Diterapkan

Proyek ini menunjukkan beberapa prinsip inti dalam **Keamanan Sistem Informasi**, antara lain:

### 1. **Autentikasi dan Otorisasi**
- Menggunakan **dompet Ethereum (MetaMask)** untuk autentikasi pengguna.
- Verifikasi identitas pengguna menggunakan metode `eth_signTypedData_v4`.
- Setiap pengguna hanya dapat mengakses data miliknya sendiri (isolasi data).

### 2. **Perlindungan dan Validasi Data**
- Validasi input dilakukan di sisi frontend dan backend.
- Mencegah serangan umum seperti:
  - **SQL Injection** (dengan Prisma ORM dan parameterisasi query)
  - **XSS (Cross-Site Scripting)** melalui sanitasi input
  - **CSRF (Cross-Site Request Forgery)** melalui proteksi rute API

### 3. **Kriptografi**
- Proses autentikasi melibatkan **tanda tangan digital**.
- Tidak menyimpan data sensitif dalam bentuk teks biasa (plaintext).

### 4. **Audit dan Logging**
- Setiap aksi (menambah, mengubah, menghapus todo) tercatat dengan alamat pengguna dan timestamp.
- Dapat diperluas untuk keperluan audit trail dan pelacakan aktivitas.

### 5. **Kepatuhan Terhadap Cyberlaw (Indonesia)**
- Aplikasi dibangun dengan kesadaran terhadap regulasi seperti:
  - **UU ITE**
  - **UU Perlindungan Data Pribadi (UU PDP)**
- Tidak menyimpan data pribadi tanpa persetujuan pengguna.
- Mengadopsi prinsip minimalisasi data dan kontrol data oleh pengguna.

## Fitur

- Login menggunakan MetaMask
- Tambah, ubah, hapus, dan tampilkan daftar tugas
- Isolasi data per pengguna
- Sudah tersedia secara live

## Teknologi yang Digunakan

- **Frontend**: Next.js, Tailwind CSS
- **Backend**: Next.js API Routes
- **ORM**: Prisma
- **Database**: MySQL
- **Autentikasi**: MetaMask + Ethereum Signature


+------------------+       +------------------+
|     Frontend     |       |     Backend      |
| (Next.js + Chart)| <---> |  API Route + DB  |
|                  |       | (Prisma + MySQL) |
+------------------+       +------------------+
         ↑
         |
   [MetaMask Login]


## Dokumentasi RPL

Kesesuaian dengan capaian pembelajaran mata kuliah:

| Capaian Pembelajaran Mata Kuliah | Implementasi di Proyek |
|----------------------------------|-------------------------|
| Menjabarkan konsep keamanan sistem informasi | Dijelaskan dalam README dan kode |
| Memahami cara kerja kriptografi | Menggunakan tanda tangan digital dari dompet Ethereum |
| Menjelaskan keamanan sistem seperti email/WWW | Fokus pada keamanan sistem web modern |
| Menjelaskan Cyberlaw di Indonesia | Mematuhi prinsip dasar UU PDP dan UU ITE |
