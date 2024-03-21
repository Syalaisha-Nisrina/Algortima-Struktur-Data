# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Syalaisha Nisrina Anataya</p>
## Dasar Teori
Tipe   data   adalah   klasifikasi   data   yang   memberitahu   compiler   atau   interpreter bagaimana   programmer   berniat   untuk   menggunakan   data. [1]

### 1. Tipe Data Primitif
Tipe data primitif merupakan elemen dasar penyusun data dalam pemrograman. Tipe data ini tidak dapat dipecah lagi menjadi unit yang lebih kecil.

### 2. Tipe Data Abstrak

### 3. Tipe Data Koleksi


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

Array dan Map adalah dua struktur data yang memiliki perbedaan dalam cara penyimpanan dan pengaksesan data. **Array** adalah kumpulan elemen yang disimpan secara berurutan di memori[2]. Setiap elemen memiliki indeks numerik, dimulai dari 0, yang digunakan untuk mengaksesnya[2]. Array cocok untuk menyimpan data yang bertipe sama dan jumlahnya tetap, namun kurang fleksibel jika perlu menambah atau menghapus elemen di tengah karena harus memindahkan elemen lain[2].

**Map**, di sisi lain, adalah kumpulan pasangan key-value yang tidak memiliki urutan tetap[2]. Key bisa berupa tipe data apapun, seperti string atau number, dan digunakan untuk mengakses value yang terkait[2]. Map memudahkan pencarian dan pembaruan data karena Anda bisa langsung mengakses elemen dengan key-nya, membuatnya ideal untuk data yang sering berubah atau tidak memiliki jumlah yang tetap[2].

Secara singkat, Array adalah pilihan yang baik untuk kumpulan data yang sederhana dan statis, sedangkan Map lebih cocok untuk data yang kompleks.

## Referensi
[1] Wimawan, R. B. (2019, 11 April). Tipe Data Sederhana. https://journals.sagepub.com/doi/10.1177/1535370216643772.
[2] M.T. Goodrich, R. Tamassia, dan M.H. Goldwasser, Data Structures and Algorithms in Java, 6th ed. [Online]. Available: Wiley, ISBN: 978-1-119-27802-3, March 2016
