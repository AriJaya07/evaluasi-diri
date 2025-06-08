# Todo Metamask - Jaringan Komputer Dasar

**Link repository:** [Github](https://github.com/AriJaya07/todo-metamask)
**Link live:** [TodoList](https://todo-meta.onrender.com)

Todo Metamask adalah aplikasi to-do list sederhana yang terintegrasi dengan dompet kripto MetaMask. Aplikasi ini dibangun menggunakan JavaScript framework **Next.js**, dengan **Prisma** sebagai ORM, **MySQL** sebagai basis data, dan **ApexCharts** untuk visualisasi aktivitas. Proyek ini bertujuan untuk menunjukkan pemahaman pada jaringan komputer dasar.

## Deskripsi Proyek

Aplikasi ini memungkinkan pengguna untuk:
- Menambahkan, melihat, memperbarui, dan menghapus daftar tugas (todo).
- Menyimpan data ke dalam database MySQL melalui Prisma ORM.
- Berinteraksi melalui antarmuka web yang responsif dan modern.

Proyek ini juga menampilkan penerapan nyata teknologi jaringan komputer dalam konteks pengembangan aplikasi web.

## Capaian Pembelajaran (CPMK)

Melalui proyek ini, saya menunjukkan kompetensi yang sesuai dengan capaian pembelajaran mata kuliah **Jaringan Komputer Dasar**, yaitu:

1. **Menjelaskan prinsip dan protokol jaringan komputer:**
   - Aplikasi menggunakan **HTTP/HTTPS** untuk komunikasi client-server.
   - API dibuat dengan pola **RESTful** menggunakan Next.js API Routes.

2. **Mengembangkan dan mengelola teknologi jaringan:**
   - Aplikasi telah di-**deploy ke server publik**.
   - Termasuk konfigurasi domain, DNS, dan manajemen port jaringan.

3. **Memanfaatkan teknologi jaringan sesuai permasalahan:**
   - Menyediakan layanan online untuk pengguna dalam mengelola todo list secara real-time.
   - Memanfaatkan konektivitas internet untuk sinkronisasi data.

4. **Menginterpretasi hasil secara logis dan sistematis:**
   - Kode terstruktur dan modular.
   - Validasi dan error handling telah diterapkan.
   - Dokumentasi pengujian dan penggunaan tools jaringan telah dilakukan.

## Teknologi yang Digunakan

- **Frontend:** Next.js (React Framework)
- **Backend:** Next.js API Routes
- **Database:** MySQL
- **ORM:** Prisma
- **Tools Tambahan:** Postman, Git, GitHub

Anda dapat mengakses aplikasi secara online atau menjalankannya secara lokal dengan langkah-langkah di bawah ini.

## Cara Menjalankan Aplikasi Secara Lokal

1. **Clone repository:**

```bash
git clone https://github.com/AriJaya07/todo-metamask.git
cd todo-metamask
```

2. **Installation:**

```bash
npm install
```

3. **Setup environment**

```.env
DATABASE_URL="mysql://username:password@localhost:3306/your-database"
```

4. **Jalankan Prisma**

```bash
npx prisma generate
npx prisma migrate dev --name init
```

5. **Running**

```bash
npm run dev
```
