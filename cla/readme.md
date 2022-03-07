## 📦 Daftar Isi

1. : C "if else"
2. : A "if else"
3. : A "boolean"
4. : C "Perhatikan dalam loppingnya lagi"
5. : B "tentang pointer inget dia mengakses variabel dari memorinya
   jadi perubahan yang terjadi didalam memorinya, kalau mengakses
   pointer variabel nya memori"
6. : B "strlen berhenti di saat '\0' ini akhirnya dari array"
7. : B "strlen = menghitung panjang string, strcpy(t, <isinya>) = copy string
   ditimbun, strcat(t, <isinya>) = tambah di belakangnya"
8. : A "2D array"
9. : A "malloc <NamaVariabel> = (<tipe_data_konversi>\*) malloc(jumlah_byte) :
   memori alocation, free : menghapus isi | [looping char]"

10. : D "struct : bikin grub variabel variabel"
11. : A "sizeof : ini ga sama kaya strlen ini menghitung ukuran dari variabelnya"
12. : B "fungsi"
13. : D "procedures, strlen"
14. : D "argc : ini ngabil banyak kata dari terminal, argv : ngabil banyak huruf
    di setiap kata"
15. : C "file handling | fseek(<FILE *f>, <offset>, <whence position>) : ini mengatur
    posisi file dan memberikan ofset untuk menulis filenya lagi | ftell(FILE *p) :
    nilai pengembalian fungsi ini mengembalikan nilai indikator posisi saat
    ini hasil bergantung isi file"
16. : B "file handling | rewind(FILE \*f) : ini mengulang sebanyak yang di inginkan pada
    fputs di bawah rewind (1-9)"
17. : A "file handling | fwrite(<penyangga*>, <ukuran>, <penghitung>, <FILE *f>)  
     penyangga : pointer ke objek pertama dalam array yang akan ditulis
    ukuran : ukuran setiap benda
    menghitung : jumlah benda yang akan ditulis
    sungai kecil : penunjuk ke aliran keluaran
    https://en.cppreference.com/w/c/io/fwrite"
18. : A "file handling | char = 1 byte | int = 2 byte | float = 4 byte | double = 8 byte
    long = 4 byte | long long = 8 byte | long double = 16 byte |"
19. : B "#define ini sama kaya const syntaxnya di taro di header tidak membutukan titik koma
    #define <namaVariabel> <isi>"
20. : C "membuat variabel global selain define, kalo ini bisa di ubah beda ama #define"
21. : A "fungsi dan variabel global"
22. : B "define X##Y##Z, variabel global, pointers "

<!-- < = kurang dari
> = ini lebih dari -->

## C compile

```bash
# compile
gcc <nama file> -o <path> -lm

# run
./<path>

```