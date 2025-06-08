# Todo Metamask - Sistem Oprasi

**Link repository:** [Github](https://github.com/AriJaya07/todo-metamask)
**Link live:** [TodoList](https://todo-meta.onrender.com)

Todo Metamask adalah aplikasi to-do list sederhana yang terintegrasi dengan dompet kripto MetaMask. Aplikasi ini dibangun menggunakan JavaScript framework **Next.js**, dengan **Prisma** sebagai ORM, **MySQL** sebagai basis data, dan **ApexCharts** untuk visualisasi aktivitas. Proyek ini bertujuan untuk pemahaman konsep infrastruktur TI, arsitektur jaringan, keamanan sistem, dan manajemen proyek sistem informasi.

---

## Teknologi yang Digunakan

- **Next.js** – Framework React untuk frontend dan API backend
- **Prisma ORM** – Akses database secara efisien dan aman
- **MySQL** – Sistem manajemen basis data relasional
- **ApexCharts** – Visualisasi data todo secara interaktif
- **Tailwind CSS** – Styling modern dan responsif
- **JWT/Auth** – Sistem otentikasi dan otorisasi pengguna

---

## Tujuan Proyek

- Menerapkan manajemen sumber daya sistem melalui interaksi antara server, database, dan antarmuka pengguna.
- Menyediakan layanan berbasis web yang dapat digunakan secara cloud dan lokal.
- Menerapkan sistem keamanan: identifikasi, otentikasi, dan otorisasi.
- Menampilkan visualisasi aktivitas pengguna menggunakan ApexCharts.
- Meningkatkan pengalaman pengguna melalui metadata (waktu dibuat, diperbarui, status, prioritas).

---

## Relevansi dengan Capaian Pembelajaran

| Capaian Pembelajaran | Implementasi di Proyek |
|----------------------|-------------------------|
| Mampu merancang infrastruktur TI | Deployment Next.js + MySQL secara cloud |
| Mampu memahami konsep sistem operasi | Pengelolaan API dan database sebagai resource |
| Mampu menerapkan keamanan sistem | Fitur login dan otorisasi akses task |
| Mampu menggunakan manajemen proyek | Penggunaan Notion/Trello + dokumentasi pengembangan |
| Mampu memahami bisnis dan TI | Visualisasi produktivitas + use-case manajemen tugas harian |

---

## Struktur Proyek

```
├── prisma/             # Skema database Prisma
├── pages/              # API routes dan halaman utama
├── components/         # Komponen reusable
├── lib/                # Fungsi utilitas dan middleware
├── public/             # Asset publik (gambar, icon)
├── README.md
└── package.json
```

---

## Visualisasi

Aplikasi ini menampilkan statistik dan produktivitas harian/mingguan menggunakan **ApexCharts**, contoh:

- Jumlah task yang diselesaikan
- Presentase task berdasarkan status (done, in progress, pending)

---

## Keamanan

- Autentikasi pengguna dengan token (JWT)
- Otorisasi berdasarkan session pengguna
- Validasi input agar data aman dan tidak disalahgunakan


### Konfigurasi Render:
- Platform: Web Service
- Runtime: Node.js
- Build Command: `npm install; npx prisma migrate dev --name init; npx prisma migrate deploy; npm run build`
- Start Command: `npm start` 

## Cara Menjalankan di local

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

