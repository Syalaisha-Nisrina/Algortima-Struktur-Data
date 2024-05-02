# <h1 align="center">Laporan Praktikum Modul Stack</h1>
<p align="center">Syalaisha Nisrina Anataya</p>

## Dasar Teori

### 1. Variabel
Variabel dalam struct adalah bagian dari struktur data yang menyimpan nilai atau data spesifik. Dalam konteks struct, variabel disebut sebagai "anggota" atau "field" dari struct tersebut. Setiap variabel dalam struct memiliki tipe data yang berbeda-beda dan dapat merepresentasikan bagian-bagian yang berbeda dari entitas yang sedang diwakili oleh struct tersebut.

### 2. Struktur (Struct)
Struktur data (atau struct) adalah kumpulan variabel yang dikelompokkan bersama dalam satu unit logis. Dalam pemrograman, struktur data digunakan untuk merepresentasikan entitas yang lebih kompleks dengan menyatukan beberapa variabel yang terkait ke dalam satu kesatuan. Struktur data memungkinkan pengguna untuk membuat tipe data baru yang terdiri dari beberapa tipe data yang berbeda.

## Guided 
### 1. Buatlah sebuah struktur dengan nama buku yang berisi judul_buku, pengarang, penerbit, tebal_halaman, harga_buku. Isi dengan nilai kemudian tampilkan.
```C++
#include <iostream>
using namespace std;

struct buku {
    string judul_buku;
    string pengarang;
    string penerbit;
    int tebal_buku;
    float harga_buku;
};

int main() {
    buku buku1, buku2;

    // untuk mengisi salah satu 
    buku1.judul_buku    = "Algoritma Pemrograman";
    buku1.pengarang     = "Andi sumandi";
    buku1.penerbit      = "Gramedia Pustaka Utama";
    buku1.tebal_buku    = 190;
    buku1.harga_buku    = 120000;

    buku2.judul_buku    = "Metode Statistika";
    buku2.pengarang     = "Andi Budiman";
    buku2.penerbit      = "Gramedia Pustaka Utama";
    buku2.tebal_buku    = 179;
    buku2.harga_buku    = 150000;

    //menampilkan data
    cout << "Informasi Buku" << endl;
    cout << "judul_buku: " << buku1.judul_buku << endl;
    cout << "pengarang: " << buku1.pengarang << endl;
    cout << "penerbit: "<<buku1.penerbit<< endl;
    cout <<"tebal_buku: "<< buku1.tebal_buku << endl; 

     //menampilkan data
    cout << "Informasi Buku" << endl;
    cout << "judul_buku: " << buku2.judul_buku << endl;
    cout << "pengarang: " << buku2.pengarang << endl;
    cout << "penerbit: "<<buku2.penerbit<< endl;
    cout <<"tebal_buku: "<< buku2.tebal_buku << endl; 


    return 0;
}
```
Pertama tama kode program akan mendefinisikan struktur dengan nama `buku`yang memuat informasi variabel buku. Kemudian mendeklarasikan dua variabel dari tipe ‘buku’, yaitu buku1 dan buku2. Memasukkan informasi buku dengan  mengisi judul, pengarang, penerbit, tebal, dan harga buku untuk kedua buku tersebut.
Selanjutnya digunakan loop untuk menampilkan informasi tentang setiap buku. Di dalam loop, digunakan cout untuk mencetak informasi buku. 

#### Output : 
![Guided1](https://github.com/Syalaisha-Nisrina/Algortima-Struktur-Data/blob/main/Modul%205-Struct/Guided1.png)

### 2. Buatlah sebuah struktur dengan skema seperti dibawah, isi dengan nilai kemudian jalankan.

```C++
#include <iostream>
#include <string>
using namespace std;

struct hewan {
    string nama_hewan;
    string jenis_kelamin;
    string kembangbiak;
    string pernafasan;
    string tempat_hidup;
    bool karnivora;
}; 

struct hewan_darat{
    hewan info_hewan;
    int jumlah_kaki;
    bool apakah_menyusui;
    string suara;
};
hewan_darat hewan1;

struct hewan_laut{
    hewan info_hewan;
    string bentuk_sirip;
    string pertahanan_diri;
};
hewan_laut hewan2;

int main() {
    hewan1.info_hewan.nama_hewan = "kucing";
    hewan1.info_hewan.jenis_kelamin = "p";
    hewan1.info_hewan.kembangbiak = "melahirkan";
    hewan1.info_hewan.pernafasan = "paru paru";
    hewan1.info_hewan.tempat_hidup = "daratan";
    hewan1.info_hewan.karnivora = true;
    hewan1.jumlah_kaki = 4;
    hewan1.apakah_menyusui = true;   
    hewan1.suara = "miaw";
    
    hewan2.info_hewan.nama_hewan = "penyu";
    hewan2.info_hewan.jenis_kelamin = "B";
    hewan2.info_hewan.kembangbiak = "Bertelur";
    hewan2.info_hewan.pernafasan = "paru paru dan insang";
    hewan2.info_hewan.tempat_hidup = "Lautan";
    hewan2.info_hewan.karnivora = false;
    hewan2.bentuk_sirip = "sirip dan ekor";
    hewan2.pertahanan_diri = " cangkang yang kuat";   

	//menampilkan data 
	cout << "\t Hewan Darat" << endl;
	cout << "Nama Hewan :" <<hewan1.info_hewan.nama_hewan << endl;
	cout << "Jenis Kelamin : "<<hewan1.info_hewan.jenis_kelamin << endl;
	cout << "Kembangbiak : "<< hewan1.info_hewan.kembangbiak << endl;
	cout << "Pernapasan : "<< hewan1.info_hewan.pernafasan << endl;
	cout << "Tempat Hidup : "<< hewan1.info_hewan.tempat_hidup << endl;
	cout << "karnivora : "<< hewan1.info_hewan.karnivora << endl;
	cout << "jumlah kaki : "<< hewan1.jumlah_kaki << endl;
	cout << "apakah menyusui?  : "<< hewan1.apakah_menyusui << endl;
	cout << "suara : "<< hewan1.suara << "\n" << endl ;

	//menampilkan data 
	cout << "\t Hewan Laut" << endl;
	cout << "Nama Hewan :" <<hewan2.info_hewan.nama_hewan << endl;
	cout << "Jenis Kelamin : "<<hewan2.info_hewan.jenis_kelamin << endl;
	cout << "Kembangbiak : "<< hewan2.info_hewan.kembangbiak << endl;
	cout << "Pernapasan : "<< hewan2.info_hewan.pernafasan << endl;
	cout << "Tempat Hidup : "<< hewan2.info_hewan.tempat_hidup << endl;
	cout << "apakah karnivora? "<< hewan2.info_hewan.karnivora << endl;
	cout << "bentuk sirip : "<< hewan2.bentuk_sirip << endl;
	cout << "pertahanan diri : "<< hewan2.pertahanan_diri << endl;


	return 0;
	}
```
Kode program tersebut mendefinisikan struktur dengan `struct hewan`yang berisi nama_hewan, jenis_kelamin,kembangbiak, pernafasan, tempat_hidup, karnivora. Kemudian dicabangkan dengan `struct hewan_darat` dan `struct hewan_laut`, yang masing-masing mengandung struktur `hewan` dan anggota tambahan. Kemudian pada `hewan_darat hewan1;` dan `hewan_laut hewan2;` untuk menyimpan data hewan darat dan laut. 
#### Output : 
![Guided2](https://github.com/Syalaisha-Nisrina/Algortima-Struktur-Data/blob/main/Modul%205-Struct/Guided2.png)

## Unguided 
### 1. Modifikasi tugas guided pertama, sehingga setiap item yang terdapat pada struct buku berupa array yang berukuran 5, isi dengan data kemudian tampilkan
```C++
#include <iostream>
using namespace std;

struct buku {
    string judul_buku[5];
    string pengarang[5];
    string penerbit[5];
    int tebal_buku[5];
    float harga_buku[5];
};

int main() {
    buku buku0, buku1, buku2, buku3, buku4;

    // untuk mengisi salah satu 
    buku1.judul_buku[0]    = "Algoritma Pemrograman";
    buku1.pengarang[0]     = "Andi sumandi";
    buku1.penerbit[0]      = "Gramedia Pustaka Utama";
    buku1.tebal_buku[0]    = 190;
    buku1.harga_buku[0]    = 120000;

    buku1.judul_buku[1]    = "Metode Statistika";
    buku1.pengarang[1]     = "Andi Budiman";
    buku1.penerbit[1]      = "Gramedia Pustaka Utama";
    buku1.tebal_buku[1]    = 179;
    buku1.harga_buku[1]    = 150000;
    
    buku1.judul_buku[2]    = "Kalkulus";
    buku1.pengarang[2]     = "M.Safero ";
    buku1.penerbit[2]      = "Astrouland";
    buku1.tebal_buku[2]    = 199;
    buku1.harga_buku[2]    = 190000;
    
    buku1.judul_buku[3]    = "Si Kancil Yang Cerdik";
    buku1.pengarang[3]     = "Rahma Anisa";
    buku1.penerbit[3]      = "Teman Anak";
    buku1.tebal_buku[3]    = 150;
    buku1.harga_buku[3]    = 50000;
   
    buku1.judul_buku[4]    = "Luar Angkasa";
    buku1.pengarang[4]     = "Javier Syailendra";
    buku1.penerbit[4]      = "Gramedia Pustaka Utama";
    buku1.tebal_buku[4]    = 250;
    buku1.harga_buku[4]    = 1500000;

    //menampilkan data
    for(int i = 0; i < 5; i++) {
        cout << "\n" << endl;
        cout << "\t Informasi Buku" << endl;
        cout << "judul_buku : " << buku1.judul_buku[i] << endl;
        cout << "pengarang  : " << buku1.pengarang[i] << endl;
        cout << "penerbit   : " << buku1.penerbit[i] << endl;
        cout << "tebal_buku : " << buku1.tebal_buku[i] << endl; 
        cout << "harga_buku : " << buku1.harga_buku[i] << endl; 
    }

    return 0;
}
```
Kode tersebut memodifikasi tugas pada guided pertama agar setiap item yang terdapat pada struct buku berupa array yang berukuran 5. Diawali dengan mendefinisikan `struct buku` dengan nama "buku". Variabel dengan tipe "buku" kemudian dideklarasikan, yaitu `buku buku0, buku1, buku2, buku3, buku4;`. Setiap variabel ini dapat menyimpan informasi tentang buku seperti judul, pengarang, penerbit, tebal buku, dan harga buku.

Kemudian diisi ke dalam variabel buku1, seperti `buku1.judul_buku[0] = "Algoritma Pemrograman";` dan seterusnya. Untuk menampilkan informasi tentang buku, digunakan loop `for`. Selanjutnya Informasi tentang buku ditampilkan menggunakan `cout << "judul_buku : " << buku1.judul_buku[i] << endl;` dan seterusnya.

#### Output : 
![Unguided1](https://github.com/Syalaisha-Nisrina/Algortima-Struktur-Data/blob/main/Modul%205-Struct/Unguided1.png)

### 2. Apa yang terjadi jika deklarasi variabel struct yang dibuat pada tugas guided I,berjenis Array. Bagaimana cara mengisi data dan menampilkannya ?

```C++
#include <iostream>
using namespace std;

struct buku {
    string judul_buku;
    string pengarang;
    string penerbit;
    int tebal_buku;
    float harga_buku;
};

int main() {
    // Membuat array dari struct buku
    buku daftar_buku[2];

    // Mengisi data buku pertama
    daftar_buku[0].judul_buku    = "Algoritma Pemrograman";
    daftar_buku[0].pengarang     = "Andi sumandi";
    daftar_buku[0].penerbit      = "Gramedia Pustaka Utama";
    daftar_buku[0].tebal_buku    = 190;
    daftar_buku[0].harga_buku    = 120000;

    // Mengisi data buku kedua
    daftar_buku[1].judul_buku    = "Metode Statistika";
    daftar_buku[1].pengarang     = "Andi Budiman";
    daftar_buku[1].penerbit      = "Gramedia Pustaka Utama";
    daftar_buku[1].tebal_buku    = 179;
    daftar_buku[1].harga_buku    = 150000;

    // Menampilkan data
    for(int i = 0; i < 2; i++) {
        cout << "Informasi Buku " << i+1 << endl;
        cout << "judul_buku : " << daftar_buku[i].judul_buku << endl;
        cout << "pengarang  : " << daftar_buku[i].pengarang << endl;
        cout << "penerbit   : "<< daftar_buku[i].penerbit << endl;
        cout <<"tebal_buku  : "<< daftar_buku[i].tebal_buku << endl; 
        cout <<"harga_buku  : "<< daftar_buku[i].harga_buku << endl; 
    }

    return 0;
}
```
Kode Program tersebut membuat array `daftar_buku` yang berisi dua buku. Array tersebut diisi dengan informasi buku pertama dan kedua dengan cara mengisi informasi buku ke dalam struct `buku` secara langsung, tetapi dilakukan untuk setiap elemen dalam array. Kemudian menggunakan loop `for` untuk menampilkan informasi tentang setiap buku dalam array. Dalam setiap iterasi loop, digunakan indeks `i` untuk mengakses dan menampilkan informasi tentang buku yang sesuai.
#### Output : 
![Unguided2](https://github.com/Syalaisha-Nisrina/Algortima-Struktur-Data/blob/main/Modul%205-Struct/Unguided2.png)


## Kesimpulan 
Dari Modul 5 tentang Struct ini, dapat diambil beberapa kesimpulan yaitu:
1. Variabel berfungsi sebagai tempat penyimpanan data dan hanya dapat menyimpan 1 nilai kecuali dideklarasikan sebagai array. Selain itu variabel dibagi menjadi 2 yaitu variabel lokal dsn global dengan perbedaan utama terletak pada cakupan dan aksesibilitasnya.

2. Struktur adalah tipe data bentukan yang bisa mengandung berbagai tipe data lain, dengan contoh format penulisan .

## Referensi
[1] P. Fatima, "Optimizing Algorithm Efficiency through Advanced Data Structures in C++: A Comparative Analysis of Performance, Scalability, and Complexity," International Journal of Computations, Information and Manufacturing (IJCIM), vol. 3, no. 2, pp. 67-71, Dec. 2023. DOI: 10.54489/ijcim.v3i2.256.
