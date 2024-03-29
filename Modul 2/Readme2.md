 # <h1 align="center">Laporan Praktikum Modul Array</h1>
<p align="center">Syalaisha Nisrina Anataya</p>

## Dasar Teori
Array adalah kumpulan elemen data yang memiliki tipe data sama dan disimpan secara berurutan dalam memori komputer[1]. Berikut adalah beberapa jenis array :
### 1. Array Satu Dimensi
Array satu dimensi merupakan struktur data yang berfungsi sebagai wadah untuk menyimpan sejumlah elemen dengan jenis data yang sama dalam satu baris atau kolom. 

Pendeklarasian array satu dimensi dilakukan dengan menggunakan tanda kurung siku [ ]. Format umumnya adalah: tipe_data nama_array[jumlah_elemen]; Misalnya, jika Anda ingin mendeklarasikan array satu dimensi dengan 10 elemen bertipe data int dan diberi label LARIK, maka deklarasinya adalah: int LARIK[10];

Jika Anda ingin menginisialisasi array saat mendeklarasikannya, contoh penulisannya adalah: int LARIK[10] = {2, 5, 4, 8, 1, 3, 7, 1, 10, 6}; Dalam kasus ini, nilai-nilai akan ditempatkan ke dalam elemen array secara berurutan, dimulai dari indeks 0 yang diisi dengan nilai '2' hingga indeks 9 yang diisi dengan nilai '6'.

### 2. Array Dua Dimensi
Array 2 dimensi, yang juga sering disebut matriks, adalah jenis struktur data yang memfasilitasi penyimpanan set data terorganisir dalam format tabel yang terdiri dari baris dan kolom. Untuk mengakses setiap elemen dalam array ini, diperlu dua indeks yaitu untuk menentukan baris dan menentukan kolom.
Contoh Penggunaan:
- Menyimpan data tabel
- Menyimpan data matriks matematika
- Simulasi permainan papan
- Manipulasi gambar

### 3. Array Multidimensi
Array multidimensi adalah struktur data yang memungkinkan penyimpanan data dengan lebih dari satu dimensi. Berbeda dengan array satu dimensi yang hanya memiliki satu baris data, array multidimensi dapat memiliki banyak baris dan kolom (atau lebih) data.

Contoh Penggunaan:
- Menyimpan data matriks
- Menyimpan data tabel
- Menyimpan data gambar
- Menyimpan data game

Kelebihan:
- Memudahkan penyimpanan data kompleks
- Memudahkan akses data
- Meningkatkan efisiensi kode

Kekurangan:
- Lebih kompleks untuk dipelajari dan digunakan
- Membutuhkan lebih banyak memori
- Lebih sulit untuk didebug

## Guided 
### 1. Program Input Array Tiga Dimensi
```C++
#include <iostream>
using namespace std;
 // Program input array 3 Dimensi
 int main()
 {
    int arr [2][3][3];
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Input Array ["<< x << "] ["<< y <<"] ["<< z <<"] = ";
                cin >> arr [x][y][z];
            }
        }
        cout << endl;
    }
 
// Output array 
    for (int x = 0 ; x < 2; x++)
    {
        for (int y =0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Data Array ["<< x << "] ["<< y <<"] ["<< z <<"] =" << arr [x][y][z] << endl ;
            }
        }
    }
    cout << endl ;
    // Tampilan array
    for (int x = 0 ; x < 2; x++)
    {
        for (int y =0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << arr[x][y][z]  << "  " ;
            }
            cout << endl;
        }
        cout << endl;
    }
 }
```
Kode yang tersebut adalah contoh dari Program Input Array Tiga Dimensi. Program `int arr [2][3][3]` mendefinisikan 2 array 2D, masing-masing berukuran 3x3. 

Kemudian untuk blok `for` yang pertama memuat kode program untuk memasukkan nilai pada setiap elemen array. Sedangkan untuk blok `for` yang kedua digunakan untuk mencetak nilai setiap elemen array dalam format `Data Array [x] [y] [z] = nilai` sehingga kita dapat melihat tampilan yang tentang apa yang disimpan di setiap indeks array. Untuk blok `for` yang ketiga memuat kode untuk mencetak kembali nilai dari setiap elemen array, tetapi dalam format grid 3x3 untuk setiap array 2D. Ini memberikan pengguna tampilan visual yang jelas tentang bagaimana data disusun dalam array tiga dimensi.

### 2. Program Mencari Nilai Maksimal pada Array
```C++
#include <iostream>
using namespace std;

int main () {
    int maks, a, lokasi;
    cout << "Masukkan panjang array: " ;
    cin >> a;

    if(a <= 0) {
        cout << " Panjang array harua lebih besar dari 0." << endl;
        return 1; 
    }
    int array [a];
    cout << " Masukkan " << a << "angka\n";

    int x=0;
    for (x = 0; x<a; x++){
        cout << "Array ke -" << (x + 1) << ":";
        cin >> array [x];
    }
    maks = array [0];
    lokasi = 0;

    for (int i = 1; i < a; i++){
        if (array[i] > maks) {
            maks = array [i];
            lokasi = i;
        }
    }
    cout << " Nilai maksimum adalah "<< maks << "berada di array ke-" << (lokasi + 1) << endl;
    return 0 ;
}
```
Program ini mencari nilai maksimum dalam array dan lokasinya. Pertama, denagn memasukkan panjang array yang diinginkan dan nilai nilai yang akan mengisi array. Jika panjang array tidak valid (<= 0), program akan berhenti. Selanjutnya, program memeriksa setiap angka dalam array. Jika angka tersebut lebih besar dari nilai maksimum saat ini, nilai maksimum dan lokasi diperbarui. Akhirnya, program mencetak nilai maksimum dan lokasinya dalam array. 

## Unguided 
### 1. Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!
### Data Array : 1 2 3 4 5 6 7 8 9 10
### Nomor Genap : 2, 4, 6, 8, 10,
### Nomor Ganjil : 1, 3, 5, 7, 9, 

```C++
#include <iostream>
using namespace std;
// Fungsi untuk menampilkan angka ganjil dari array
void printGanjil(int arr[], int n)
{
    cout << "Angka ganjil dalam array adalah: ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}
// Fungsi untuk menampilkan angka genap dari array
void printGenap(int arr[], int n)
{
    cout << "Angka genap dalam array adalah: ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}
int main()
{
    const int MAX = 100;
    int arr[MAX];
    int n;
    cout << "Masukkan panjang array: ";
    cin >> n;
    cout << "Masukkan angka-angka dalam array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printGanjil(arr, n);
    printGenap(arr, n);
    return 0;
}
```
Program ini memiliki 2 fungsi utama yaitu `printGanjil` dan `printGenap` yang menerima parameter array `arr[]` dan `n`. Fungsi `printGanjil` mencetak semua angka ganjil dalam array. Fungsi ini melakukan iterasi melalui setiap elemen dalam array dan memeriksa apakah elemen tersebut ganjil (yaitu, jika elemen tersebut ketika dibagi 2 memiliki sisa 1). Fungsi `printGenap` bekerja dengan cara yang sama, tetapi mencetak semua angka genap dalam array (yaitu, elemen yang habis dibagi 2).

### 2. Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!
```C++
#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;

    cout << "Masukkan ukuran array: " << endl;
    cout << "Ukuran dimensi 1: ";
    cin >> n1;
    cout << "Ukuran dimensi 2: ";
    cin >> n2;
    cout << "Ukuran dimensi 3: ";
    cin >> n3;

    int arr[n1][n2][n3];

    cout << "Masukkan elemen array: " << endl;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            for (int k = 0; k < n3; k++) {
                cout << "elemen [" << i << "][" << j << "][" << k << "]: ";
                cin >> arr[i][j][k];
            }
        }
    }

    cout << "Elemen array yang telah dimasukkan: " << endl;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            for (int k = 0; k < n3; k++) {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
```
Kode ini akan membuat array tiga dimensi berdasarkan ukuran yang diinputkan, mengisi array tersebut dengan elemen yang diinputkan juga oleh pengguna, dan kemudian mencetaknya. 
### Output : 
![unguided2](https://github.com/Syalaisha-Nisrina/Algortima-Struktur-Data/blob/main/Modul%202/Output%20Ungaided2.png)

### 3. Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user!

```C++
#include <iostream>
using namespace std;
int main() {
   int n;
   cout << "Masukkan jumlah elemen dalam array: ";
   cin >> n;

   int arr[n];
   cout << "Masukkan elemen-elemen array: ";
   for(int i = 0; i < n; i++) {
      cin >> arr[i];
   }

   int max = arr[0], min = arr[0], sum = 0;
   double average;
   for(int i = 0; i < n; i++) {
      if(arr[i] > max) {
         max = arr[i];
      }
      if(arr[i] < min) {
         min = arr[i];
      }
      sum += arr[i];
   }

   average = (double)sum / n;

   cout << "Nilai maksimum: " << max << endl;
   cout << "Nilai minimum: " << min << endl;
   cout << "Nilai rata-rata: " << average << endl;

   return 0;
}
```
Kode program `cout << "Masukkan jumlah elemen dalam array: ";` bertujuan untuk meminta pengguna memasukkan jumlah elemen array, yang kemudian disimpan dalam `cin >> n;`. Setelah itu, pengguna diminta untuk memasukkan elemen-elemen array, yang akan dibaca oleh loop `for` pertama. Selanjutnya, `int max = arr[0], min = arr[0], sum = 0;`  digunakan untuk mendeklarasikan dan menginisialisasi variabel max, min, dan sum, di mana max dan min diinisialisasi dengan elemen pertama dari array. Loop `for` kedua kemudian digunakan untuk menghitung nilai maksimum, minimum, dan total (sum) dari elemen-elemen array, yang nantinya akan dicetak ke layar.

## Kesimpulan 
Dari Modul 2 tentang Array ini, dapat diambil beberapa kesimpulan yaitu:

1. Array merupakan struktur data dasar yang penting untuk dipahami sebelum mempelajari struktur data lainnya.
2. Terdapat beberapa jenis Array, seperti Array satu dimensi, dua dimensi, dan multidimensi, yang digunakan untuk menyimpan data dengan tipe yang sama.
3. Setiap elemen dalam Array memiliki indeks yang digunakan untuk mengakses nilainya, dimulai dari 0 hingga jumlah elemen dikurangi satu.
4. Implementasi Array dalam program memungkinkan pengguna untuk menyimpan dan mengelola data secara efisien.
5. Melalui contoh program yang disediakan dalam modul, kita dapat belajar cara mendeklarasikan, mengisi, dan mengakses elemen dalam Array dengan berbagai dimensi.
### Output : 
![unguided3](https://github.com/Syalaisha-Nisrina/Algortima-Struktur-Data/blob/main/Modul%202/Output%20Ungaided3.png)

## Referensi
[1] Ariyus, D. Pemrograman Dasar C++. Bandung: Informatika, 2017.

[2] Bjarne Stroustrup. (2013). The C++ Programming Language (4th ed.). Addison-Wesley.

[3] Lippman, S. B., & Lajoie, J. (2012). C++ primer (5th ed.). Addison-Wesley.

[4] C++ Array Tutorial: https://www.cplusplus.com/doc/tutorial/arrays/

[5] "A Survey of Multidimensional Array Programming Languages" oleh David B. Shmoys (Journal of Functional Programming, 2002)

[6] "Multidimensional Arrays in C++" oleh Michael S. Miller (C++ Users Journal, 2005)
