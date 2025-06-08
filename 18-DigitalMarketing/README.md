# Todo Metamask - Digital Marketing

**Link repository:** [Github](https://github.com/AriJaya07/todo-metamask)
**Link live:** [TodoList](https://todo-meta.onrender.com)

Todo Metamask adalah aplikasi to-do list sederhana yang terintegrasi dengan dompet kripto **MetaMask**. Aplikasi ini dibangun menggunakan JavaScript framework **Next.js**, dengan **Prisma** sebagai ORM, **MySQL** sebagai basis data, dan **ApexCharts** untuk visualisasi aktivitas. Peningkatan SEO juga dilakukan melalui metadata yang terstruktur.

Proyek ini dibuat untuk mendukung kebutuhan pembelajaran di bidang **Digital Marketing**, khususnya dalam memanfaatkan teknologi digital untuk mengelola traffic, konversi pengguna, serta optimasi visibilitas online secara sistematis dan terukur.

---

## Gambaran Proyek

Aplikasi Todo berbasis Web3 ini menunjukkan bagaimana teknologi digital modern dapat digunakan untuk:

- Menarik dan mengelola traffic pengguna secara efektif  
- Mengkonversi interaksi pengguna menjadi data yang dapat diukur  
- Menganalisis performa pengguna melalui visualisasi data interaktif  
- Mengoptimalkan kehadiran online melalui praktik SEO terbaik  

---

## Keterkaitan dengan Capaian Pembelajaran Digital Marketing

| Capaian Pembelajaran                                     | Implementasi dalam Proyek                                         |
| -------------------------------------------------------- | ---------------------------------------------------------------- |
| Menjelaskan konsep teori Digital Marketing               | Penggunaan metadata SEO dan keywords untuk meningkatkan visibilitas di mesin pencari |
| Menganalisis Digital Marketing secara mandiri dan terukur | Visualisasi data dengan ApexCharts untuk memantau penyelesaian tugas pengguna |
| Merencanakan dan menerapkan Digital Marketing secara sistematis dan bermutu | Arsitektur aplikasi menggunakan Next.js, Prisma, dan integrasi SEO metadata |

---

## Teknologi yang Digunakan

- **Next.js** — Framework React untuk rendering sisi server dan situs statis  
- **Prisma ORM** — Toolkit database type-safe untuk MySQL  
- **MySQL** — Sistem manajemen basis data relasional  
- **ApexCharts** — Library visualisasi data untuk grafik interaktif  
- **MetaMask** — Dompet Web3 untuk autentikasi terdesentralisasi  

---

## Fitur Utama

- Login aman menggunakan autentikasi Web3 melalui MetaMask  
- Membuat, mengubah, dan menghapus tugas (todo)  
- Dashboard interaktif dengan grafik ApexCharts untuk pelacakan performa  
- Optimasi SEO melalui metadata yang terintegrasi di Next.js  

---

## Contoh Metadata SEO

```ts
export const metadata: Metadata = {
  title: "Todo Metamask - Web3 Task Manager",
  description: "Aplikasi todo list terdesentralisasi menggunakan MetaMask untuk autentikasi.",
  keywords: ["Web3", "MetaMask", "Todo List", "Next.js", "Decentralized App", "Task Manager"],
  authors: [{ name: "Ari Jaya", url: "https://todo-meta.onrender.com" }],
  icons: {
    icon: [
      {
        url: "/images/metamask.png",
        href: "/images/metamask.png",
        sizes: "512x512",
        type: "image/png",
      },
    ],
  },
  openGraph: {
    title: "Todo Metamask",
    description: "Kelola tugas Anda dengan aman menggunakan MetaMask dan Web3.",
    url: "https://todo-meta.onrender.com",
    siteName: "Todo Metamask",
    images: [
      {
        url: "/images/metamask.png",
        width: 1200,
        height: 630,
        alt: "Screenshot Todo Metamask",
      },
    ],
    locale: "en_US",
    type: "website",
  },
  twitter: {
    card: "summary_large_image",
    title: "Todo Metamask",
    description: "Aplikasi Todo Web3 dengan keamanan MetaMask",
    images: ["/images/metamask.png"],
    creator: "@jayakusumaMe",
  },
  robots: {
    index: true,
    follow: true,
    nocache: false,
  },
  themeColor: "#ffffff",
};
```