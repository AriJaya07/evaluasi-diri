# Todo Metamask - Dasar Pemrograman

**Link repository:** [Github](https://github.com/AriJaya07/todo-metamask)
**Link live:** [TodoList](https://todo-meta.onrender.com)

Todo Metamask adalah aplikasi to-do list sederhana yang terintegrasi dengan dompet kripto MetaMask. Aplikasi ini dibangun menggunakan JavaScript framework **Next.js**, dengan **Prisma** sebagai ORM, **MySQL** sebagai basis data, dan **ApexCharts** untuk visualisasi aktivitas. Proyek ini bertujuan untuk menunjukkan pemahaman dasar mengenai logika, algoritma, dan struktur program secara terstruktur dan modern.

---

## Tujuan

Project ini dibuat sebagai bagian dari pengakuan pembelajaran lampau (RPL) pada mata kuliah **Dasar-Dasar Pemrograman**, dengan tujuan:

- Mempraktikkan dasar-dasar JavaScript
- Menggunakan struktur logika dan algoritma
- Membuat aplikasi web sederhana yang terstruktur
- Mengenal interaksi dasar dengan Web3 melalui Metamask
- Menghubungkan aplikasi frontend dan backend secara modern

---

## Fitur

- Menambahkan tugas baru
- Menandai tugas sebagai selesai
- Menghapus tugas
- Autentikasi sederhana menggunakan Metamask
- Penyimpanan data ke database MySQL
- Komunikasi client-server menggunakan API di Next.js

---

## Konsep Pemrograman yang Digunakan

- Variabel dan Tipe Data
- Fungsi dan Modularisasi
- Pengkondisian (if/else)
- Perulangan (for, map)
- Manipulasi DOM menggunakan React (JSX)
- Event Handling di komponen React
- State Management (useState, useEffect)
- Prisma ORM dan MySQL
- API Routes di Next.js
- Autentikasi Web3 (Metamask & Ethers.js)

---

## Teknologi yang Digunakan

- [Next.js](https://nextjs.org/)
- [React](https://reactjs.org/)
- [Prisma](https://www.prisma.io/)
- [MySQL](https://www.mysql.com/)
- [Ethers.js](https://docs.ethers.org/)
- [Tailwind CSS](https://tailwindcss.com/)
- [Metamask](https://metamask.io/)

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
