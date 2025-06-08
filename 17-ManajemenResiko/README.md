# Todo Metamask - Manajemen Resiko

**Link repository:** [Github](https://github.com/AriJaya07/todo-metamask)
**Link live:** [TodoList](https://todo-meta.onrender.com)

Aplikasi TodoList ini dikembangkan menggunakan **Next.js**, **Prisma ORM**, **MySQL**, dan **ApexCharts**. Selain menjadi aplikasi produktivitas, project ini juga menunjukkan penerapan prinsip-prinsip *Manajemen Risiko* dalam pengembangan sistem informasi modern.

---

## Tujuan
Mendukung pengajuan **RPL (Rekognisi Pembelajaran Lampau)** untuk mata kuliah **Manajemen Risiko** dengan menampilkan bagaimana risiko dalam pengembangan aplikasi diidentifikasi, dianalisis, dan ditangani.

---

## Teknologi yang Digunakan

- [Next.js](https://nextjs.org/) – Framework React untuk frontend dan backend
- [Prisma ORM](https://www.prisma.io/) – Untuk komunikasi dengan database MySQL
- [MySQL](https://www.mysql.com/) – Sistem manajemen basis data
- [ApexCharts](https://apexcharts.com/) – Untuk visualisasi data dan analisis risiko
- [MetaMask](https://metamask.io/) – Autentikasi berbasis Ethereum wallet (opsional)

---

## Penerapan Manajemen Risiko

### 1. **Identifikasi Risiko**
- Kehilangan data tugas
- Kesalahan input pengguna
- Masalah autentikasi pengguna
- Potensi bug dalam pemrosesan data

### 2. **Pengukuran Risiko**
- Frekuensi error ditampilkan melalui grafik
- Analisis jumlah tugas gagal vs berhasil
- Waktu penyelesaian tugas sebagai indikator efisiensi

### 3. **Pengendalian Risiko**
- Validasi input dan notifikasi kesalahan
- Backup data menggunakan Prisma dan MySQL
- Autentikasi menggunakan MetaMask untuk keamanan identitas

### 4. **Pemindahan Risiko**
- Hosting pada platform terpercaya (misal: Vercel)
- Penggunaan library open-source yang teruji

### 5. **Pendekatan Kualitatif dan Kuantitatif**
- Penilaian risiko berdasarkan dampak dan kemungkinan (kualitatif)
- Visualisasi tren dan data performa aplikasi (kuantitatif)

---

## Fitur Visualisasi Risiko

- Grafik Jumlah Tugas berdasarkan Status
    Menampilkan visualisasi jumlah tugas dengan status done, pending, dan lainnya menggunakan ApexCharts.
- List Status Secara Real-time
    Daftar tugas diperbarui secara langsung tanpa perlu reload halaman, membantu identifikasi potensi bottleneck atau overload tugas.
- Statistik Penerapan Task
    Persentase penyelesaian tugas dan frekuensi tugas tidak selesai

---

## Cara Menjalankan

```bash
npm install
npx prisma migrate dev
npm run dev
```

---

## Relevansi dengan Mata Kuliah Manajemen Risiko

Aplikasi ini bukan hanya sebuah alat manajemen tugas, tetapi juga mencerminkan bagaimana **manajemen risiko diterapkan secara praktis dalam pengembangan dan operasional sistem informasi**. Ini mencakup analisis risiko operasional, pengambilan keputusan berbasis data, dan dokumentasi evaluatif sebagai bagian dari siklus hidup sistem informasi.

---