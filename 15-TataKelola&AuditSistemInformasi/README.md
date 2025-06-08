# Todo Metamask - Tata Kelola & Audit Sistem Informasi

**Link repository:** [Github](https://github.com/AriJaya07/todo-metamask)
**Link live:** [TodoList](https://todo-meta.onrender.com)

Todo Metamask adalah aplikasi to-do list sederhana yang terintegrasi dengan dompet kripto MetaMask. Aplikasi ini dibangun menggunakan JavaScript framework **Next.js**, dengan **Prisma** sebagai ORM, **MySQL** sebagai basis data, dan **ApexCharts** untuk visualisasi aktivitas. Proyek ini bertujuan untuk menunjukkan tata kelola dan audit sistem informasi.

---

## Teknologi yang Digunakan

- **Next.js** — Framework React untuk membuat aplikasi web modern dengan server-side rendering.
- **Prisma** — ORM yang memudahkan pengelolaan database MySQL.
- **MySQL** — Database relasional untuk penyimpanan data aplikasi.
- **ApexCharts** — Library charting untuk menampilkan data tugas dalam bentuk grafik.

## Fitur Utama

- CRUD (Create, Read, Update, Delete) tugas.
- Visualisasi status tugas menggunakan grafik ApexCharts.
- Logging aktivitas pengguna (audit trail sederhana).
- Pengaturan akses dan otorisasi pengguna.
- Dokumentasi prosedur audit dan pengendalian data dalam aplikasi.

## Kaitannya dengan Mata Kuliah Tata Kelola & Audit Sistem Informasi

Project ini dibuat sebagai bukti penguasaan kompetensi dalam mata kuliah **Tata Kelola & Audit Sistem Informasi** yang mencakup:

- **Pemahaman konsep kontrol dan audit sistem informasi** melalui implementasi fitur audit trail dan pengaturan akses pengguna yang aman.
- **Penerapan standar audit** dengan menyediakan dokumentasi prosedur audit yang relevan dengan standar seperti COBIT dan ISO/IEC 27001.
- **Kemampuan melakukan analisis dan desain sistem informasi** dengan menggunakan prinsip rekayasa perangkat lunak yang baik, serta etika profesional dalam pengelolaan data.
- **Visualisasi data audit** untuk memudahkan pemantauan status dan performa sistem informasi secara realtime.
- **Kerja tim dan supervisi** dalam pengembangan project, dengan pengelolaan kode dan dokumentasi yang terstruktur dan transparan.

## Cara Menjalankan

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

