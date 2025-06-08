
# Todo Metamask - Customer Relationship Management (CRM)

**Link repository:** [Github](https://github.com/AriJaya07/todo-metamask)
**Link live:** [TodoList](https://todo-meta.onrender.com)

Proyek ini merupakan implementasi aplikasi **TodoList** berbasis web dengan menggunakan teknologi modern seperti **Next.js**, **Prisma ORM**, **MySQL**, **ApexCharts**, dan **SEO Metadata Improvement**. Proyek ini dikembangkan sebagai bagian dari **Rekognisi Pembelajaran Lampau (RPL)** untuk mata kuliah **Customer Relationship Management (CRM)**.

## Tujuan Proyek

Mendemonstrasikan pemahaman dan penerapan konsep **CRM** dalam konteks aplikasi pengelolaan tugas, dengan fokus pada:

- Pengumpulan dan pengelolaan **data pengguna**
- Visualisasi data menggunakan **ApexCharts**
- Peningkatan jangkauan pengguna melalui **SEO**
- Pengambilan keputusan berbasis data pengguna (user behavior analysis)

---

## Hubungan dengan Mata Kuliah: Customer Relationship Management (CRM)

Mata kuliah **CRM** mempelajari tentang pentingnya pengelolaan hubungan dengan pelanggan dan strategi berbasis data konsumen. Proyek ini berkontribusi terhadap capaian pembelajaran mata kuliah sebagai berikut:

### Capaian Pembelajaran yang Dipenuhi:

1. **Mengelola Data Konsumen:**
   - Data pengguna dan aktivitas disimpan menggunakan MySQL dan Prisma ORM.
   - Setiap tugas (todo item) mencerminkan interaksi pengguna yang dapat dianalisis.

2. **Analisis dan Pengambilan Keputusan:**
   - **ApexCharts** digunakan untuk memvisualisasikan data seperti jumlah tugas, status penyelesaian, dan aktivitas mingguan, yang dapat digunakan untuk mendukung strategi CRM.

3. **Profesional dalam Pengolahan Data:**
   - Proyek dilengkapi dengan dashboard interaktif yang menyajikan hasil analisis data pengguna.

4. **Pengelolaan Proyek Sistem Informasi:**
   - Menggunakan arsitektur modern berbasis Next.js dan ORM untuk manajemen database, serta prinsip pengembangan berbasis komponen.

5. **Peningkatan Jangkauan (Digital Marketing - SEO):**
   - Metadata SEO ditambahkan untuk mendukung visibilitas aplikasi dan menjangkau audiens lebih luas secara digital.

---

## Teknologi yang Digunakan

- **Next.js** – Framework React untuk SSR/SSG
- **Prisma ORM** – Manajemen data & model database
- **MySQL** – Sistem basis data relasional
- **ApexCharts** – Visualisasi data pengguna
- **Tailwind CSS** – Styling modern dan responsif
- **SEO Metadata** – Optimalisasi search engine

---

## Fitur Utama

- CRUD Todo (buat, lihat, update, hapus)
- Dashboard dengan grafik analisis aktivitas pengguna
- Manajemen pengguna (opsional jika digunakan autentikasi)
- SEO untuk meningkatkan visibilitas halaman
- Struktur kode modular dan mudah dikembangkan

---

## Cara Menjalankan Proyek

1. Clone repositori:
   ```bash
   git clone https://github.com/AriJaya07/todo-metamask
   cd todo-metamask
   ```

2. Install dependency:
   ```bash
   npm install
   ```

3. Konfigurasi `.env`:
   ```
   DATABASE_URL="mysql://user:password@localhost:3306/todolist"
   ```

4. Migrasi dan seed database:
   ```bash
   npx prisma migrate dev
   ```

5. Jalankan server:
   ```bash
   npm run dev
   ```