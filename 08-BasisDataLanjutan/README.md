# Todo Metamask - Basis Data Lanjutan

**Link repository:** [Github](https://github.com/AriJaya07/todo-metamask)
**Link live:** [TodoList](https://todo-meta.onrender.com)

Todo Metamask adalah aplikasi to-do list sederhana yang terintegrasi dengan dompet kripto MetaMask. Aplikasi ini dibangun menggunakan JavaScript framework **Next.js**, dengan **Prisma** sebagai ORM, **MySQL** sebagai basis data, dan **ApexCharts** untuk visualisasi aktivitas. Proyek ini bertujuan untuk menunjukkan pemahaman dalam membuat basis data lanjutan.

---

## Deskripsi Mata Kuliah

Mata kuliah Basis Data Lanjutan mengajarkan konsep dan metodologi perancangan basis data dalam sistem informasi, termasuk pemodelan data, penggunaan query tingkat lanjut, optimasi basis data, serta penerapan basis data dalam aplikasi nyata.

---

## Capaian Pembelajaran & Bukti Penerapan

### 1. Menginternalisasi Etika Akademik & Tanggung Jawab
- Proyek ini dikerjakan secara mandiri dari tahap perancangan, pengkodean, hingga deployment.
- Menunjukkan tanggung jawab penuh dalam pengelolaan data pengguna dan aplikasi secara etis dan aman.

### 2. Penguasaan Konsep Teoritis Sistem Informasi
- Proyek merepresentasikan sistem informasi berbasis web dengan backend database.
- Skema basis data dirancang menggunakan Prisma (ORM) dan mencakup relasi antar tabel seperti `User`, `Todo`, dan `Category`.

### 3. Perencanaan dan Penerapan Sistem Basis Data
- Desain ERD dirancang sebelum implementasi.
- Menggunakan ORM Prisma untuk memodelkan database secara efisien.
- Menerapkan CRUD (Create, Read, Update, Delete) dan validasi data.

### 4. Pengambilan Keputusan Berdasarkan Analisis Data
- TodoList memiliki fitur status (`completed`, `pending`) dan kategori tugas.
- User dapat memfilter dan mengelola data berdasarkan prioritas atau tenggat waktu.

### 5. Tanggung Jawab Tim & Kinerja Mandiri
- Proyek ini merupakan hasil kerja individu, menunjukkan kinerja mandiri, konsistensi, dan kemampuan teknis.
- Deployment dilakukan secara langsung menggunakan platform cloud (Render), menunjukkan kemandirian teknis.

---

## Struktur Basis Data (Schema Prisma)

```prisma
model User {
  id        Int      @id @default(autoincrement())
  name      String
  email     String   @unique
  todos     Todo[]
  createdAt DateTime @default(now())
}

model Todo {
  id        Int      @id @default(autoincrement())
  title     String
  status    String
  userId    Int
  user      User     @relation(fields: [userId], references: [id])
  createdAt DateTime @default(now())
}
```

## 6. Fitur Aplikasi
  - Registrasi dan login pengguna
  - Menambah, mengedit, dan menghapus tugas
  - Filter tugas berdasarkan status (done, in progress, pending)
  - Antarmuka responsif menggunakan Tailwind CSS
  - Data tersimpan di database MySQL dan dikelola via Prisma ORM