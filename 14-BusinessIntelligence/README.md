# Todo Metamask - Business Intelligence

**Link repository:** [Github](https://github.com/AriJaya07/todo-metamask)
**Link live:** [TodoList](https://todo-meta.onrender.com)

Todo Metamask adalah aplikasi to-do list sederhana yang terintegrasi dengan dompet kripto MetaMask. Aplikasi ini dibangun menggunakan JavaScript framework **Next.js**, dengan **Prisma** sebagai ORM, **MySQL** sebagai basis data, dan **ApexCharts** untuk visualisasi aktivitas. Proyek ini bertujuan untuk menunjukkan pemahaman dalam business intelligance.

---

## Fitur Utama

- **Login Web3 dengan MetaMask**  
  Autentikasi pengguna dilakukan dengan wallet Ethereum menggunakan MetaMask.

- **Manajemen Todo List**  
  Pengguna dapat menambahkan, mengedit, dan menghapus daftar aktivitas mereka.

- **Visualisasi Data Todo**  
  Statistik Todo divisualisasikan menggunakan ApexCharts (pie chart dan bar chart).

- **Tampilan Terkunci Saat Belum Login**  
  Todo List tidak bisa diakses jika belum login. Menampilkan ikon gembok sebagai indikator.

- **Penyimpanan Data dengan MySQL + Prisma ORM**  
  Todo yang dibuat tersimpan di database secara real-time.

## Kesesuaian dengan Mata Kuliah Business Intelligence

Proyek ini mendukung pembelajaran dan aplikasi nyata dari konsep-konsep Business Intelligence, seperti:

| Capaian Pembelajaran                                      | Bukti dalam Aplikasi                                 |
|-----------------------------------------------------------|-------------------------------------------------------|
| Visualisasi data                                          | Menggunakan ApexCharts untuk grafik aktivitas        |
| Pengambilan keputusan berbasis data                       | Tampilan status todo memberikan insight progres      |
| Pengumpulan dan penyimpanan data                          | Data disimpan di database MySQL via Prisma           |
| Perancangan solusi berbasis data                          | Aplikasi dirancang untuk efisiensi pengelolaan tugas |
| Etika dan tanggung jawab kerja mandiri                    | Aplikasi dibangun dan dideploy mandiri               |
| Komunikasi & profesionalisme teknis                       | Dokumentasi di GitHub dan online deployment          |

## Teknologi yang Digunakan

- [Next.js](https://nextjs.org/)
- [Web3 / MetaMask](https://metamask.io/)
- [Prisma ORM](https://www.prisma.io/)
- [MySQL Database](https://www.mysql.com/)
- [ApexCharts](https://apexcharts.com/)

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
