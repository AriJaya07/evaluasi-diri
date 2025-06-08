# Todo Metamask - E-Business

**Link repository:** [Github](https://github.com/AriJaya07/todo-metamask)
**Link live:** [TodoList](https://todo-meta.onrender.com)

Project ini adalah aplikasi Todo List berbasis web yang dikembangkan menggunakan Next.js, Prisma, dan MySQL sebagai database. Aplikasi ini juga dilengkapi dengan fitur visualisasi data menggunakan Apex Chart secara real-time dan optimasi SEO melalui pengaturan meta data untuk meningkatkan visibilitas aplikasi di mesin pencari.

Project ini dibuat sebagai bukti kompetensi dan penerapan ilmu dalam mata kuliah **E-Business**, khususnya pada aspek transformasi bisnis digital, riset pemasaran online, perilaku konsumen, serta strategi dan implementasi e-bisnis yang sistematis dan terukur.

---

## Capaian Pembelajaran yang Didukung

1. **Memahami dan Menjelaskan Konsep Teori E-Bisnis**  
   Proyek ini mengimplementasikan konsep e-bisnis dengan menghadirkan aplikasi berbasis web yang dapat digunakan sebagai platform digital untuk mengelola proses bisnis secara online.

2. **Menganalisis dan Menerapkan E-Bisnis secara Mandiri dan Terukur**  
   Pemilihan teknologi seperti Next.js, Prisma, MySQL, dan Apex Chart menunjukkan kemampuan analisis kebutuhan sistem e-bisnis serta penerapan solusi yang efektif dan terukur.

3. **Merencanakan dan Mengimplementasikan Ilmu E-Bisnis Secara Sistematis dan Bermutu**  
   Proyek ini dirancang secara sistematis mulai dari perancangan database, pengembangan frontend dan backend, hingga optimasi SEO untuk mendukung strategi pemasaran digital.

---

## Fitur Utama

- Manajemen tugas: membuat, mengedit, menghapus, dan menandai tugas selesai.
- Visualisasi progres tugas dengan grafik interaktif menggunakan Apex Chart.
- Optimasi SEO dengan meta data dinamis di setiap halaman aplikasi.
- Backend menggunakan Prisma ORM dengan database MySQL.
- API routes Next.js yang menghubungkan frontend dan backend dalam satu proyek terintegrasi.

---

## Teknologi yang Digunakan

- Next.js (React Framework)
- Prisma ORM
- MySQL Database
- ApexCharts untuk visualisasi data
- SEO melalui meta tags di Next.js

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