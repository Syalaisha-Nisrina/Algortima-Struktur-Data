# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Syalaisha Nisrina Anataya</p>

## Dasar Teori
Tipe   data   adalah   klasifikasi   data   yang   memberitahu   compiler   atau   interpreter bagaimana   programmer   berniat   untuk   menggunakan   data. [1]

### 1. Tipe Data Primitif
Jenis data dasar yang disediakan oleh bahasa pemrograman untuk mewakili nilai-nilai sederhana seperti bilangan, karakter, dan nilai logika. Tipe data ini tidak dapat diubah atau dipecah menjadi bagian yang lebih kecil.
Beberapa yang termasuk tipe data primitif :
1. Bilangan Bulat
   - short: Menyimpan nilai bilangan bulat pendek yang ukurannya 2 byte [2]
   - int: Menyimpan nilai bilangan bulat yang ukurannya 4 byte [3]
   - long: Menyimpan nilai bilangan bulat panjang yang ukurannya 4 atau 8 byte [4]
3. Bilangan Pecahan
   - float: Menyimpan nilai bilangan pecahan presisi tunggal. Ukurannya 4 byte dan memiliki presisi sekitar 7 digit. [2]
   - double: Menyimpan nilai bilangan pecahan presisi ganda. Ukurannya 8 byte dan memiliki presisi sekitar 15 digit.[3]
5. Karakter
   - char: Menyimpan nilai karakter tunggal. Ukurannya 1 byte dan dapat menyimpan nilai ASCII dari 0 hingga 127. [5]
7. Nilai Logika
   - bool: Menyimpan nilai logika TRUE atau FALSE. Ukurannya 1 byte.[2]
     
### 2. Tipe Data Abstrak
Tipe data abstrak adalah model matematika yang mendefinisikan sekumpulan nilai dan operasi yang dapat dilakukan pada nilai-nilai tersebut. TDA tidak menentukan bagaimana nilai-nilai tersebut direpresentasikan atau bagaimana operasi tersebut diimplementasikan[6] TDA memungkinkan programmer untuk membuat program yang lebih modular, efisien, aman, dan skalabel.

### 3. Tipe Data Koleksi
Tipe data koleksi adalah struktur data yang memungkinkan penyimpanan sekumpulan data dalam satu variabel. Berbeda dengan tipe data dasar yang hanya mampu menampung satu nilai, tipe data koleksi dapat menampung banyak nilai dengan berbagai tipe data.

Contoh tipe data koleksi : 
- Array: Sekelompok elemen dengan tipe data yang sama.
- Vector: Wadah dinamis yang dapat diubah, mirip dengan array, tetapi dapat diubah ukurannya.
- List: Wadah dinamis yang dapat diubah, mirip dengan vector, tetapi menawarkan beberapa operasi tambahan.
- Set: Wadah yang menyimpan elemen unik dan tidak terurut.
- Map: Wadah yang menyimpan pasangan key-nilai yang unik.

Keuntungan dari penggunaan tipe data kolektif adalah efisien karena dapat menyimpan ekumpulan data dalam satu variabel dapat menghemat memori dan meningkatkan kinerja [7]. Selain itu juga mempermudah dalam pengorganisasian dan pengelolaan data, serta mendukung berbagai operasi data, seperti penambahan, penghapusan, dan pencarian[7].

## Guided 

### 1. Tipe Data Primitif
```C++
#include <iostream>

using namespace std;

int main() 
{
    char op;
    float num1, num2;

    //Memillih operator yang akan digunakan yaitu +, -, *, /
    cout << "Masukkan Operator: " << endl;
    cin >> op;

    //Untuk memasukkan operasi
    cout << "Masukkan Angka 1 & 2: " << endl;
    cin >> num1 >> num2;

    //Pernyataan switch dimulai
    switch (op)
    {
    case '+':
        cout << num1 + num2;
        break;

    case '-':
        cout << num1 - num2;
        break;

    case '*':
        cout << num1 * num2;
        break;

    case '/':
        cout << num1 / num2;
        break;

    //Jika operator selain +, -, * atau /,
    default:
        cout << "Kesalahan! operator tidak benar";
    }//Pernyataan switch berakhir
    return 0;
}
```
Program ini memungkinkan pengguna untuk melakukan operasi aritmatika dasar (penjumlahan, pengurangan, perkalian, dan pembagian) pada dua bilangan.  Pengguna terlebih dahulu memilih operator yang diinginkan (+, -, *, atau /), kemudian memasukkan nilai dari dua angka. Program akan menghitung hasil operasi dan menampilkannya kepada pengguna. Program ini menggunakan pernyataan switch-case untuk menjalankan operasinya. Jika pengguna memasukkan operator yang tidak valid, program akan menampilkan pesan error.

### 2. Tipe Data Abstrak
```C++
#include <stdio.h>
#include <iostream>
using namespace std;

//Struct
struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};

int main()
{
    struct Mahasiswa mhs1,mhs2;
    //mengisi nilai ke struct
    mhs1.name = "Icha";
    mhs1.address = "Asturia";
    mhs1. age = 19;
    mhs2.name = "Syalaisha";
    mhs2.address = "Magelang";
    mhs2. age = 19;

    cout << "Mahasiswa 1 \n"  << endl;
    cout << "Nama : " << mhs1.name << endl;
    cout << "Address :" << mhs1.address << endl;
    cout << "Age : " << mhs1.age <<endl;

    cout << "Mahasiswa 2 \n";
    cout << "Nama : " << mhs2.name << endl;
    cout << "Address :" << mhs2.address << endl;
    cout << "Age : " << mhs2.age <<endl;

    return 0;
}
```
Kode yang tersebut adalah contoh dari program yang memanfaatkan struktur data abstrakyaitu `struct`. Program tersebut mendefinisikan `struct` dengan nama `Mahasiswa`, yang terdiri dari tiga elemen, yaitu `name` dan `address` yang keduanya merupakan tipe data karakter, serta `age` yang merupakan tipe data bilangan bulat. Kata kunci `const` digunakan pada elemen `name` dan `address` untuk mencegah modifikasi pada objek atau variabel tersebut. Untuk mengisi data, kita membuat dua variabel dengan tipe data `struct Mahasiswa`, yaitu `mhs1` dan `mhs2`. Kemudian, kita dapat mengisi data ke dalam masing-masing variabel tersebut dan menampilkan hasilnya menggunakan fungsi `cout`.

### 3. Tipe Data Kolesi
```C++
#include <iostream>
using namespace std;
int main()
{
    //Deklarasi dan inisialisasi array
    int nilai[5];
    nilai[0] = 23;
    nilai[1] = 50;
    nilai[2] = 34;
    nilai[3] = 78; 
    nilai[4] = 90;
    //Mencetak array
    cout << "Isi array pertama :" << nilai[0] << endl;
    cout << "Isi array kedua :" << nilai[1] << endl;
    cout << "Isi array ketiga :" << nilai[2] << endl;
    cout << "Isi array keempat :" << nilai[3] << endl;
    cout << "Isi array kelima :" << nilai[4] << endl;
    return 0;
}
```
Program ini mendeklarasikan sebuah array bernama ‘nilai’ yang dapat menyimpan 5 elemen bertipe integer. Kemudian, program ini mengisi setiap elemen array dengan nilai tertentu dan menampilkan nilai dari setiap elemen tersebut. 

## Unguided 
### 1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif
```C++
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float a,b,c; 
    
    cout << "Masukan bilangan yang akan dibagi  : ";
    cin >> a;
    cout << "Masukan bilangan pembagi : ";
    cin >> b;
    c = a/b;
    
    cout << fixed;
    cout << setprecision(2) << "Hasil bagi : " << c << endl;

    return 0;
}
```
Program ini melakukan salah satu perhitungan aritmatika yaitu pembagian. Program mendeklarasikan tiga variabel a, b, dan c dengan tipe data 'float' untuk menyimpan bilangan real. Selanjutnya, program meminta pengguna untuk memasukkan dua bilangan real, yaitu bilangan yang akan dibagi (a) dan bilangan pembagi (b). Nilai yang diinputkan disimpan dalam variabel a dan b. Kemudian, program menghitung hasil bagi dari a dan b dan menyimpan hasilnya dalam variabel c.

Sebelum menampilkan hasil bagi, program menggunakan fungsi `cout << fixed;` untuk cout untuk menampilkan output dalam format fixed-point. Lalu, program menggunakan fungsi `cout << setprecision(2)` untuk mengatur presisi output menjadi 2 digit di belakang koma. Akhirnya, program menampilkan teks "Hasil bagi : " dan nilai variabel c dengan format fixed-point dan presisi 2 digit ke layar.
#### Kesimpulan 
Tipe data primitif adalah jenis data dasar yang sudah tersedia di dalam bahasa pemrograman. Jenis data ini dirancang untuk menyimpan nilai dasar seperti angka, byte, atau karakter. Meskipun begitu, tipe data primitif tidak dirancang untuk menangani data yang lebih kompleks atau rumit.

### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya
#### Class 
Class adalah konsep dasar yang digunakan untuk membuat objek. Ia seperti rencana atau pola yang menunjukkan bagaimana objek harus dibangun, termasuk struktur dan cara kerjanya. Secara singkat Class digunakan ketika :
- Membutuhkan pewarisan untuk membuat hierarki kelas,
- Membutuhkan enkapsulasi data yang kompleks dengan kontrol akses,
- Ingin membuat objek yang dapat diubah dan dibagikan di berbagai bagian kode.

#### Struct
Struct adalah tipe nilai, di mana perubahan pada salinan struct tidak memengaruhi struct asli. Di mana perubahan pada objek di satu tempat tercermin di tempat lain. Secara singkat struct digunakan ketika :
- Membutuhkan struktur data yang sederhana dan efisien,
- Ingin membuat objek yang tidak perlu diubah setelah dibuat.
- Ingin membuat nilai yang dapat disalin dengan mudah tanpa memengaruhi nilai asli.
```C++
#include<iostream>
using namespace std;

// Mendefinisikan struct
struct Mahasiswa {
    string nama;
    int umur;
};

// Mendefinisikan class
class Universitas {
    public:
        // Fungsi untuk menampilkan data mahasiswa
        void tampilkanData(Mahasiswa m) {
            cout << "Nama: " << m.nama << endl;
            cout << "Umur: " << m.umur << endl;
        }
};

int main() {
    // Membuat objek dari struct Mahasiswa
    Mahasiswa mhs;
    mhs.nama = "Anataya";
    mhs.umur = 19;

    // Membuat objek dari class Universitas
    Universitas univ;

    // Memanggil fungsi dalam class untuk menampilkan data mahasiswa
    univ.tampilkanData(mhs);

    return 0;
}
```
Kode diatas menunjukkan bagaimana struct dan class dapat digunakan untuk mendefinisikan struktur data dan fungsi secara bersamaan. Struct `Mahasiswa` mendefinisikan sebuah struct bernama Mahasiswa dengan dua variabel anggota yaitu nama (bertipe string) dan umur (bertipe int). Class `Universitas` mendefinisikan sebuah class bernama Universitas dengan satu fungsi publik yaitu tampilkanData(Mahasiswa m) yang dapat digunakan untuk menampilkan informasi pada Struct `Mahasiswa` 

### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map
```C++
#include <iostream>
#include <map>
#include <string>
#include <cctype> 

using namespace std;

// Mendefinisikan fungsi to_upper di luar fungsi main
string to_upper(string text) {
  for (char &c : text) { // Menggunakan referensi untuk mengubah karakter
    c = toupper(c);
  }
  return text;
}

int main() {
  // Membuat map untuk menyimpan nama-nama buah dan warnanya
  map<string, string> fruits;
  fruits["apel"] = "Merah";
  fruits["pisang"] = "Kuning";
  fruits["jeruk"] = "Oranye";

  // Mencetak nama-nama buah dalam huruf kapital dan warnanya
  for (const auto &fruit : fruits) {
    cout << to_upper(fruit.first) << " : " << fruit.second << endl;
  }

  return 0;
}
```
Kode program ini salah satucontoh penggunaan map untuk menyimpan data nama-nama buah dan warnanya, serta fungsi `to_upper` untuk mengubah string menjadi huruf kapital. Program menyertakan file header yaitu include <map> dan include <cctype> untuk mendefinisikan fungsi `to_upper` dan menggunakan map. Kemudian, program membuat map "fruits" yang menyimpan pasangan key-value, di mana key adalah nama buah dan value adalah warna buah. Data ditambahkan ke map, dan perulangan dilakukan pada setiap elemen map. Di dalam perulangan, fungsi `to_upper` digunakan untuk mengubah key (nama buah) menjadi huruf kapital sebelum dicetak, diikuti dengan tanda ":" dan value (warna buah).

Array dan Map adalah dua struktur data yang memiliki perbedaan dalam cara penyimpanan dan pengaksesan data. **Array** adalah kumpulan elemen yang disimpan secara berurutan di memori[8]. Setiap elemen memiliki indeks numerik, dimulai dari 0, yang digunakan untuk mengaksesnya[8]. Array cocok untuk menyimpan data yang bertipe sama dan jumlahnya tetap, namun kurang fleksibel jika perlu menambah atau menghapus elemen di tengah karena harus memindahkan elemen lain[8].

**Map**, di sisi lain, adalah kumpulan pasangan key-value yang tidak memiliki urutan tetap[8]. Key bisa berupa tipe data apapun, seperti string atau number, dan digunakan untuk mengakses value yang terkait[8]. Map memudahkan pencarian dan pembaruan data karena Anda bisa langsung mengakses elemen dengan key-nya, membuatnya ideal untuk data yang sering berubah atau tidak memiliki jumlah yang tetap[8].

Secara singkat, Array adalah pilihan yang baik untuk kumpulan data yang sederhana dan statis, sedangkan Map lebih cocok untuk data yang kompleks.

## Referensi
[1] Wimawan, R. B. (2019, 11 April). Tipe Data Sederhana. https://journals.sagepub.com/doi/10.1177/1535370216643772.

[2] H. Schildt, C++: The Complete Reference. New York, NY, USA: McGraw-Hill, 2017.

[3] S.B. Lippman, J. Lajoie, dan B.E. Moo, C++ Primer, 5th ed. Boston, MA, USA: Addison-Wesley, 2012

[4] P. Prinz dan T. Crawford, C++ in a Nutshell. Sebastopol, CA, USA: O’Reilly Media, Inc., 2017

[5] S. Sahoo, C++ Programming: From Beginner to Expert, [Online]. Tersedia: 2020

[6] Cormen, Thomas H., et al. "Algoritma dan Struktur Data." Edisi ke-4. MIT Press, 2020.

[7] C++ STL Tutorial: http://repository.unika.ac.id/13294/5/12.60.0248%20Christina%20Thiveny%20Putrianti%

[8]M.T. Goodrich, R. Tamassia, dan M.H. Goldwasser, Data Structures and Algorithms in Java, 6th ed. [Online]. Available: Wiley, ISBN: 978-1-119-27802-3, March 2016
