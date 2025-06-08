# Todo Metamask - Analisis dan Perancangan SI

**Link repository:** [Github](https://github.com/AriJaya07/todo-metamask)
**Link live:** [TodoList](https://todo-meta.onrender.com)

Todo Metamask adalah aplikasi to-do list sederhana yang terintegrasi dengan dompet kripto MetaMask. Aplikasi ini dibangun menggunakan JavaScript framework **Next.js**, dengan **Prisma** sebagai ORM, **MySQL** sebagai basis data, dan **ApexCharts** untuk visualisasi aktivitas. Proyek ini bertujuan untuk menunjukkan pemahaman analisis dan perancangan SI.

---

## Fitur Utama

- Autentikasi sederhana pengguna
- Menambah, mengedit, dan menghapus tugas
- Menandai tugas sebagai selesai/belum selesai
- Menampilkan daftar tugas berdasarkan status
- Penyimpanan data menggunakan MySQL via Prisma ORM

---

## Tujuan Proyek

1. Melakukan **analisis kebutuhan pengguna** terhadap proses pengelolaan tugas harian.
2. Merancang dan membangun sistem informasi sederhana yang efisien, modular, dan mudah digunakan.
3. Mengintegrasikan komponen **teknologi (Next.js, Prisma, DB)**, **proses bisnis (todo management)**, dan **pengguna (user interface)**.
4. Menunjukkan pemahaman dalam **rekayasa perangkat lunak**, **komunikasi efektif melalui dokumentasi dan UI**, dan **evaluasi proses bisnis**.

---

## Analisis & Perancangan Sistem

### Studi Proses Bisnis
Sistem ini mensimulasikan proses pengelolaan tugas harian di perusahaan jasa dan individu produktif.

### Kebutuhan Sistem
- Pengguna dapat membuat, menghapus, dan menyunting tugas.
- Tugas dikelompokkan berdasarkan status (selesai atau belum).
- Data disimpan secara terpusat dan dapat diakses kembali.

### Tools dan Teknologi
- **Frontend:** Next.js (React Framework)
- **Backend:** Next.js API Routes
- **Database:** MySQL
- **ORM:** Prisma
- **Bahasa:** TypeScript / JavaScript

---

## Capaian Pembelajaran (RPL)

| Kode Capaian | Penjelasan |
|--------------|------------|
| **S8, S9** | Proyek ini dikerjakan secara mandiri dan menunjukkan sikap tanggung jawab atas pekerjaan pengembangan sistem |
| **KU2, KU5, KU7** | Proyek ini dapat dikembangkan secara tim dan mendemonstrasikan kolaborasi melalui GitHub |
| **KU10, KU12** | Proyek ini menunjukkan perancangan sistem menggunakan kaidah rekayasa perangkat lunak dan komunikasi melalui UI dan dokumentasi |
| **Capaian Utama** | Merencanakan, merancang, membangun, dan mengembangkan sistem informasi sederhana berbasis teknologi modern |

---

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
