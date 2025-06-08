# Todo Metamask - Konsep Basis Data

**Link repository:** [Github](https://github.com/AriJaya07/todo-metamask)
**Link live:** [TodoList](https://todo-meta.onrender.com)

Todo Metamask adalah aplikasi to-do list sederhana yang terintegrasi dengan dompet kripto MetaMask. Aplikasi ini dibangun menggunakan JavaScript framework **Next.js**, dengan **Prisma** sebagai ORM, **MySQL** sebagai basis data, dan **ApexCharts** untuk visualisasi aktivitas. Proyek ini bertujuan untuk menunjukkan pemahaman dalam konsep basis data.

---

## 1. Deskripsi Project
Project ini merupakan aplikasi TodoList sederhana yang memungkinkan pengguna menyimpan dan mengelola daftar tugas (todo) dengan berbagai status. Setiap pengguna memiliki alamat unik (`address`) dan signature sebagai identitas autentikasi.

## 2. Analisis Proses Pengelolaan Data di Organisasi
Dalam pengelolaan data organisasi, aplikasi ini memodelkan dua entitas utama:

- **User**: Mewakili individu yang menggunakan sistem dengan atribut unik seperti alamat dan signature.
- **Todo**: Daftar tugas yang harus dikerjakan oleh user tersebut, dengan atribut seperti judul, status, dan waktu pembuatan.

Relasi antara User dan Todo adalah **one-to-many** (satu user memiliki banyak todo). Dengan struktur ini, organisasi dapat dengan mudah mengelola dan memantau aktivitas setiap pengguna.

### Alur Pengelolaan Data
- Registrasi user dengan data unik.
- Pembuatan, pembaruan, dan penghapusan todo terkait user.
- Pengambilan daftar tugas berdasarkan user dan status.

## 3. Perancangan Database

### Skema Prisma
```prisma
model User {
  id        Int    @id @default(autoincrement())
  address   String @unique
  signature String
  todos     Todo[]
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


## 4. Fitur Aplikasi
  - Registrasi dan login pengguna
  - Menambah, mengedit, dan menghapus tugas
  - Filter tugas berdasarkan status (done, in progress, pending)
  - Antarmuka responsif menggunakan Tailwind CSS
  - Data tersimpan di database MySQL dan dikelola via Prisma ORM