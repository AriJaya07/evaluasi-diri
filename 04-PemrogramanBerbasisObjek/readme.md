# Java OOP & Concepts Example

Repositori ini berisi contoh kode sederhana yang mengilustrasikan konsep-konsep dasar Object Oriented Programming (OOP) menggunakan Java serta fitur tambahan seperti exception handling, multithreading, object persistence, koleksi (collections), koneksi database MySQL, GUI sederhana menggunakan Swing, dan catatan deployment.

---

## Struktur Project

- `model/Person.java`  
  Class model `Person` dengan enkapsulasi, constructor, getter/setter, dan method sederhana.

- `persistence/PersonPersistence.java`  
  Menyimpan dan memuat data `Person` ke/dari file menggunakan serialization.

- `threads/HelloThread.java`  
  Contoh thread yang menjalankan proses paralel sederhana.

- `gui/SimpleGUI.java`  
  GUI sederhana menggunakan Swing yang menampilkan tombol dan label.

- `db/DBConnection.java`  
  Class helper untuk koneksi ke database MySQL.

- `Main.java`  
  Program utama yang menguji semua fitur di atas.

---

## Cara Compile dan Menjalankan

1. Pastikan JDK sudah terinstall dan PATH sudah diatur agar perintah `javac` dan `java` bisa dijalankan di terminal.

2. Jika ingin menggunakan database:
   - Jalankan MySQL server.
   - Buat database sesuai pengaturan di `db/DBConnection.java`, contoh:
     ```sql
     CREATE DATABASE dbname;
     ```
   - Sesuaikan URL, USER, PASSWORD di `db/DBConnection.java` sesuai konfigurasi MySQL kamu.

3. Compile semua file Java (dari root project atau folder):
   ```bash
   javac *.java  
   javac model/*.java persistence/*.java threads/*.java gui/*.java db/*.java Main.java
   ```

4. Jalankan program dengan menambahkan MySQL Connector/J ke classpath:
   Di Linux/macOS: 
   ```bash
   java -cp .:lib/mysql-connector-j-9.3.0.jar Main
   ```
   
   Di Windows:
   ```bash 
   java -cp .;lib/mysql-connector-j-9.3.0.jar Main
   ```
   

## Penjelasan Konsep

- **OOP (Object Oriented Programming):**  
Menggunakan class `Person` dengan enkapsulasi (getter/setter), objek, method.  

- **Exception Handling:**  
Contoh `try-catch` pada pembagian angka dengan nol.  

- **Collection:**  
Menggunakan `ArrayList<Person>` untuk menyimpan dan memproses banyak objek.  

- **Object Persistence:**  
Menyimpan dan memuat objek `Person` ke file `.dat` dengan `ObjectOutputStream` dan `ObjectInputStream`.  

- **Multithreading:**  
Membuat dan menjalankan thread baru dengan class `HelloThread` yang extend `Thread`.  

- **GUI (Swing):**  
Menampilkan jendela sederhana dengan tombol dan label yang merespon klik tombol.  

- **Database Connection:**  
Contoh koneksi sederhana ke MySQL menggunakan JDBC.

---

## Catatan Deployment

- File `.dat` akan otomatis dibuat saat program menyimpan data.  
- Untuk GUI, pastikan Java Runtime Environment (JRE) terinstall di komputer pengguna.  
- Database MySQL harus aktif jika menggunakan fitur koneksi database.  
- Bisa dibuat JAR executable dengan `jar` dan manifest main class `Main`.