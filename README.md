# Management-Daily-Activities

**Aplikasi Manajemen Aktivitas Harian**

Aplikasi ini dirancang untuk membantu Anda mengelola aktivitas harian Anda dengan menggunakan command-prompt sebagai input pengguna dan file txt sebagai output. Aplikasi ini ditulis dalam bahasa pemrograman C.

**Fitur:**

- Menambahkan aktivitas baru 
- Menandai aktivitas sebagai selesai
- Menampilkan daftar aktivitas

**Format Fitur:**
```bash
todo-add#time of activity (hh:mm)#name of activity
todo-status#number of activity
todo-print-all
```

**Cara Penggunaan:**

1. Compile program `Driver.exe` dari command-prompt dengan perintah `gcc Driver.c ./libs/todo.c ./libs/repository.c -o Driver -Wall [Compile]`
2. Jalankan program `Driver.exe` dari command-prompt dengan perintah `./Driver`

**Contoh Penggunaan:**

```
> gcc Driver.c ./libs/todo.c ./libs/repository.c -o Driver -Wall [Compile]
> git restore ./storage/todo-repository.txt [GIT Restoring Data]
> ./Driver [Run]
>
>
> todo-print-all
> todo-add#07:00#Meeting with Mr. Joe
> todo-add#12:00#Lunch with Mrs. Mona
> todo-print-all
> todo-status#3#done
>
> ...
```

**Catatan:**

- File output (aktivitas.txt) akan disimpan di direktori yang sama dengan program.
- Anda dapat mengedit file `todo-repository.txt` secara manual jika perlu.

**Persyaratan:**

- Kompiler C (seperti MinGW)
- Editor teks (seperti Visual Studio Code)

**Lisensi:**

Aplikasi ini dilisensikan di bawah lisensi MIT.

**Terima kasih telah menggunakan Management-Daily-Activities!**
