# Program Data Nilai Mahasiswa Sederhana (C)

Ini adalah program konsol sederhana yang ditulis dalam bahasa C untuk mengelola data nama dan nilai mahasiswa untuk tiga mata kuliah: Struktur Data (ASD), Automata, dan Berpikir Kritis.

## Fitur

Program ini menyediakan menu dengan fungsi-fungsi berikut:

1.  **Input Data Mahasiswa:** Memasukkan data sejumlah mahasiswa, termasuk nama dan nilai untuk 3 mata kuliah. Program akan otomatis menghitung nilai rata-rata.
2.  **Lihat Data Mahasiswa:** Menampilkan semua data mahasiswa yang telah dimasukkan (nama, nilai per mata kuliah, dan rata-rata).
3.  **Cari Data Mahasiswa:** Mencari data mahasiswa berdasarkan nama dan menampilkan detailnya jika ditemukan.
4.  **Urutkan Data Mahasiswa:** Mengurutkan data mahasiswa berdasarkan nama (secara alfabetis A-Z) menggunakan algoritma bubble sort dan menampilkannya dalam format tabel.
5.  **Exit:** Keluar dari program.

## Cara Kompilasi dan Menjalankan

Program ini ditulis dalam bahasa C standar dan memerlukan compiler C (seperti GCC) untuk dikompilasi.

1.  **Kompilasi:**
    ```bash
    gcc nama_file_anda.c -o program_mahasiswa.exe
    ```
    *(Ganti `nama_file_anda.c` dengan nama file C Anda)*

2.  **Menjalankan:**
    * Di Windows:
        ```bash
        .\program_mahasiswa.exe
        ```
    * Di Linux/Mac:
        ```bash
        ./program_mahasiswa
        ```
    *(Sesuaikan `program_mahasiswa.exe` jika Anda menamai outputnya berbeda)*

## Struktur Kode

* Data mahasiswa disimpan dalam sebuah `struct grades`.
* Menggunakan array global `person[100]` untuk menyimpan data hingga 100 mahasiswa.
* Fungsi-fungsi terpisah dibuat untuk setiap fitur menu (input, lihat, cari, urut).
* Menggunakan `goto` untuk navigasi menu (catatan: penggunaan `goto` bisa dihindari dengan struktur loop/fungsi yang berbeda).
* Menggunakan `conio.h` untuk `getch()` dan `system()` untuk `cls` / `pause` (mungkin kurang portabel di luar Windows).
