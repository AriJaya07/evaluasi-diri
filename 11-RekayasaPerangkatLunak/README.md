# Todo Metamask - Rekayasa Perangkat Lunak

**Link repository:** [Github](https://github.com/AriJaya07/todo-metamask)
**Link live:** [TodoList](https://todo-meta.onrender.com)

Todo Metamask adalah aplikasi to-do list sederhana yang terintegrasi dengan dompet kripto MetaMask. Aplikasi ini dibangun menggunakan JavaScript framework **Next.js**, dengan **Prisma** sebagai ORM, **MySQL** sebagai basis data, dan **ApexCharts** untuk visualisasi aktivitas.

Tujuan pembuatan project ini adalah sebagai bukti penguasaan konsep dan metodologi rekayasa perangkat lunak, serta penerapan secara langsung dalam membangun aplikasi web yang fungsional.

---

## Teknologi yang Digunakan
- **Next.js** (React framework untuk frontend dan backend)
- **Node.js** (runtime environment)
- **MySQL** (database relasional)
- **Prisma ORM** (Object Relational Mapping untuk MySQL)
- **Tailwind CSS** (untuk styling UI)

## Fitur Utama
- CRUD (Create, Read, Update, Delete) tugas
- Pencatatan status tugas (selesai/belum)
- User interface responsif dan mudah digunakan
- Penyimpanan data yang aman dan efisien menggunakan MySQL
- Live deployment dan dapat diakses online

## Kesesuaian dengan Mata Kuliah Rekayasa Perangkat Lunak (RPL)

| Materi Mata Kuliah RPL                        | Implementasi dalam Project TodoList                   |
|----------------------------------------------|-------------------------------------------------------|
| Definisi dan metodologi rekayasa perangkat lunak | Penerapan siklus pengembangan perangkat lunak menggunakan metode Agile (penjelasan detail di dokumen manajemen proyek) |
| Model proses pengembangan perangkat lunak    | Penggunaan model iteratif dan inkremental dalam pengembangan fitur aplikasi |
| Analisis dan desain dengan pendekatan terstruktur | Dokumentasi kebutuhan dan diagram ERD tersedia dalam folder `/doc` |
| Jaminan kualitas perangkat lunak              | Code review, linting, dan testing sebelum deployment |
| Manajemen proyek perangkat lunak               | Penggunaan GitHub Issues dan Projects untuk pengelolaan tugas dan timeline |

## Capaian Pembelajaran yang Didukung Project Ini
- Memahami dan menjelaskan konsep rekayasa perangkat lunak secara mandiri
- Menganalisis model proses dan manajemen kebutuhan perangkat lunak dengan tepat
- Merancang spesifikasi kebutuhan, pemodelan perangkat lunak, desain user interface, dan pengujian secara kolaboratif
- Membuat dokumentasi perangkat lunak yang lengkap sesuai kaidah akademik

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
