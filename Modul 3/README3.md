# <h1 align="center">Laporan Praktikum Modul Sorting</h1>
<p align="center">Syalaisha Nisrina Anataya</p>

## Dasar Teori

### 1. Konsep dasar Sorting
Sorting adalah proses mengatur data berdasarkan nilai kunci tertentu[1]. Proses ini bisa dilakukan dengan cara mengurutkan data dari yang terkecil hingga yang terbesar (ascending), atau sebaliknya, dari yang terbesar hingga yang terkecil (descending)[1].
### 2. Insertion Sort
Insertion sort merupakan metode pengurutan yang mudah dan efektif, terutama untuk daftar berukuran kecil dan sebagian besar daftar yang sudah diurutkan. Metode ini beroperasi dengan cara memindahkan setiap elemen ke posisinya yang tepat dalam daftar yang telah diurutkan sebelumnya. Setiap operasi penyisipan melibatkan pemilihan satu elemen, mencari posisi yang tepat dalam daftar yang telah diurutkan dengan membandingkannya dengan elemen sebelahnya, dan memasukkannya ke posisi tersebut. Proses ini diulangi sampai seluruh daftar tersusun sesuai urutan yang diharapkan. Insertion sort adalah algoritma yang efisien dalam penggunaan memori karena hanya membutuhkan sedikit ruang memori tambahan. Meski demikian, algoritma ini menjadi kurang efisien untuk data masukan berukuran besar dibandingkan dengan algoritma lain. Namun, pada umumnya, insertion sort sering digunakan sebagai komponen dalam algoritma yang lebih kompleks.[2]
### 3. Bubble Sort
Proses pengurutan menggunakan algoritma bubble sort melibatkan perbandingan antara elemen yang dipilih dan elemen setelahnya[1]. Jika elemen yang dipilih memiliki nilai yang lebih besar, maka posisi elemen tersebut akan ditukar dengan elemen setelahnya[1]. Dalam setiap tahapan proses ini, tampak seolah-olah elemen bergerak dari posisi kanan ke kiri satu per satu jika rangkaian disusun secara horizontal[1].
Kelebihan dan kekurangan Bubble sort berdasarkan jurnal "Analisis Kompleksitas Waktu Menggunakan Sorting Algorithmpada Pengaplikasian Fitur Pengurutan Harga dari Terendah dan Tertinggidi Shopee" yaitu :
**Kelebihan Algoritma Bubble Sort:**
1. **Simpel:** Algoritma ini hanya menggunakan rekurensi dan perbandingan, tanpa proses lain. 
2. **Mudah Dikodekan:** Karena sifatnya yang simpel, algoritma Bubble Sort mudah diubah menjadi kode dan minim kesalahan sintaks.
3. **Definisi Terurut Jelas:** Tidak ada satu kali pun pertukaran (swap) pada satu kali iterasi (pass). Ini berbeda dengan algoritma lain yang sering tidak memiliki definisi terurut yang jelas.
4. **Cocok untuk Data dengan Elemen Kecil yang Sudah Terurut:** Algoritma Bubble Sort memiliki kondisi terbaik (best case) dengan kompleksitas algoritma O(n).

**Kekurangan Algoritma Bubble Sort:**
1. **Tidak Efektif untuk Data Skala Besar:** Kekurangan terbesar dari algoritma Bubble Sort adalah kompleksitas algoritma yang besar, baik dalam kasus rata-rata (average case) maupun kasus terburuk (worst case), yaitu O(n^2). Oleh karena itu, sering disebut sebagai algoritma primitif, brute-force, atau algoritma naif.
2. **Langkah Pengurutan Panjang:** Misalnya, untuk 1000 data, akan terjadi proses tidak lebih dari satu juta proses perbandingan. Kompleksitas yang besar ini sering membuat algoritma Bubble Sort disebut sebagai "algoritma buruk umum". Bahkan, di antara algoritma pengurutan lain yang memiliki kompleksitas algoritma O(n^2), insertion sort cenderung lebih efisien.

### 4. Selection Sort
Dibandingkan dengan bubble sort, selection sort memiliki waktu pengujian yang lebih cepat. Karena cara kerja selection sort dengan membandingkan elemen sekarang dengan elemen yang berikutnya sampai akhir. Kemudian jika ditemukan elemen paling kecil dapat ditukar dengan elemen yang sekarang.

## Guided 
### 1. Mengurutkan secara ascending untuk data numerik bertipe double menggunakan Algoritma Bubble Sort
```C++
#include <iostream>
using namespace std;

void bubble_sort(double arr[], int length) {
    bool not_sorted = true;
    int j = 0;
    double tmp;

    while (not_sorted) {
        not_sorted = false;
        j++;

        for (int i = 0; i < length - j; i++) {
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
            }
        }
    }
}

void print_array(double a[], int length) {
    for(int i = 0; i < length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {
    int length = 5;
    double a[] = {22.1, 15.3, 8.2, 33.21, 99.99};

    cout << "Urutan bilangan sebelum sorting: " << endl;
    print_array(a, length);

    bubble_sort(a, length);

    cout << "\nUrutan bilangan setelah sorting: " << endl;
    print_array(a, length);

    return 0;
}
```
Kode Program ini terdiri dari tiga fungsi utama yaitu void bubble_sort, void print_Array, dan main. Fungsi `dvoid bubble_sort` digunakan untuk melakukan sorting dengan aloritma Bubble sort. Algoritma Bubble Sort adalah dengan membandingkan elemen pertama dengan elemen yang ada disebelahnya dan seterusnya. Jika elemen pertama > element berikutnya, maka elemen pertana dan elemen pembanding dapat ditukar. 

Fungsi `print_Array` digunakan untuk mencetak elemen-elemen dalam array yang menerima 2 argumen yaitu dari array `a` dan panjang array `length`. Selanjutnya pada fingsi `main` mendefinisikan array a dan panjangnya length, mencetak array sebelum sorting, melakukan sorting, dan akhirnya mencetak array setelah sorting.


#### Output : 
![Guided1](https://github.com/Syalaisha-Nisrina/Algortima-Struktur-Data/blob/main/Modul%203/Guided1.png)


### 2. Mengurutkan karakter secara descending (dari terbesar hingga terkecil) menggunakan Algoritma Insertion Sort
```C++
#include <iostream>
using namespace std;

int main () {
    int maks, a, lokasi;
    cout << "Masukkan panjang array: " ;
    cin >> a;

    // Jika panjang array kurang dari atau sama dengan 0, tampilkan pesan error dan keluar dari program
    if(a <= 0) {
        cout << " Panjang array harua lebih besar dari 0." << endl;
        return 1; 
    }
    // Membuat array 
    int array [a];
    cout << " Masukkan " << a << "angka\n";

    int x=0;
    // Memasukkan elemen-elemen array
    for (x = 0; x<a; x++){
        cout << "Array ke -" << (x + 1) << ":";
        cin >> array [x];
    }
    maks = array [0];
    lokasi = 0;

    // Mencari nilai maksimum dalam array
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
Program diatas untuk mengurutkan karakter secara descending. Ketika nilai yang dimasukkan kurang dari atau sama dengan nol, program akan memberikan pesan kesalahan dan berhenti dengan kode status 1, yang menunjukkan adanya kesalahan. Jika panjang array yang dimasukkan valid, program kemudian akan meminta pengguna untuk memasukkan elemen-elemen array satu per satu.

Setelah semua elemen array dimasukkan, program akan mencari nilai maksimum dalam array tersebut. Ini dilakukan dengan menginisialisasi variabel `maks` dengan elemen pertama array dan variabel `lokasi` dengan indeks 0. Program kemudian melalui array mulai dari elemen kedua, membandingkan setiap elemen dengan nilai `maks` saat ini. Jika elemen saat ini lebih besar dari `maks`, maka `maks` diperbarui dengan elemen tersebut dan `lokasi` diperbarui dengan indeks elemen tersebut.

Setelah semua elemen telah dibandingkan, program akan mencetak nilai maksimum dan lokasi (indeks + 1) elemen tersebut dalam array.
#### Output : 
![Guided2](https://github.com/Syalaisha-Nisrina/Algortima-Struktur-Data/blob/main/Modul%203/Guided2.png)

## Unguided 
### 1. Kelas S1 IF 2016 G memiliki 5 mahasiswa. Pada akhir semester mereka menerima lembar Indeks Prestasi Semester (IPS), masing-masing mahasiswa tersebut memiliki IPS sebagai berikut: {3.8, 2.9, 3.3, 4.0, 2.4}. Buatlah program untuk mengurutkan IPS mahasiswa tersebut dari yang terbesar hingga terkecil dengan menggunakan algoritma Selection Sort! 

```C++
void descending(float arr[], int n) {
    int index, tmp;
    for(int i = 0; i < n-1; i++) {
        index = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] > arr[index]) {
                index = j;
            }
        }
        if(index != i) {
            tmp = arr[i];
            arr[i] = arr[index];
            arr[index] = tmp;
        }
    }
}

void printArray(float arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }
}

int main() {
    int jumlahData = 5;
    float ip[jumlahData] = {3.8, 2.9, 3.3, 4.0, 2.4};
    descending(ip, jumlahData);
    cout << "Urutan IPS dari terbesar ke terkecil\n" << endl;
    printArray(ip, jumlahData);
    cout << endl;
    return 0;
}
```
Kode Program ini terdiri dari tiga fungsi utama yaitu descending, printArray, dan main. Fungsi `descending(float arr[], int n)` Fungsi ini digunakan untuk mengurutkan array arr dengan jumlah elemen n dalam urutan menurun (dari besar ke kecil).Dengan menggunakan Selection Sort, fungsi ini akan membandingkan elemen sekarang dengan elemen yang berikutnya sampai terakhir. Jika ditemukan elemen paling besar, kemudian ditukar dengan elemen sekarang. 

Fungsi `printArray(float arr[], int n)` digunakan untuk mencetak elemen-elemen dari array `arr` dengan jumlah elemen n. Kemudian Fungsi `main()` yang merupakan titik masuk program. Di sini, array `ip` berisikan nilai dari IPS. Kemudian, fungsi `descending` dipanggil untuk mengurutkan array ini dalam urutan menurun. Setelah itu, pesan “Urutan IPS dari terbesar ke terkecil” dicetak, diikuti oleh elemen-elemen array yang telah diurutkan. 
#### Output : 
![Ungaided1](https://github.com/Syalaisha-Nisrina/Algortima-Struktur-Data/blob/main/Modul%203/Ungaided1.png)

### 2. Pak RT memiliki 10 warga dengan nama: siti, situ, sana, ana, ani, caca, cici, dida, dodo, dan dadi. Supaya mudah dalam melakukan pencarian, Pak RT akan mengurutkan nama-nama tersebut sesuai dengan alfabet. Buatlah program untuk membantu Pak RT dengan menggunakan algoritma Bubble Sort!
```C++
#include <iostream>
using namespace std;

void bubble_sort(string arr[], int length) {
    bool notSorted = true;
    int j = 0;
    string tmp;
    while(notSorted) {
        notSorted = false;
        j++;
        for(int i = 0; i < length - j; i++) {
            if(arr[i] > arr[i+1]) {
                tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
                notSorted = true;
            }
        }
    }
}

void print(string arr[], int length) {
    for(int i = 0; i < length; i++) {
        cout << arr[i] << ", ";
    }
}

int main() {
    int length = 10;
    string list_nama[] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};
    bubble_sort(list_nama, length);
    print(list_nama, length);
    cout << endl;
    return 0;
}
```
Kode Program ini terdiri dari tiga fungsi utama yaitu `bubble_sort`, `print`, dan `main`. Fungsi `bubble_sort(string arr[], int length)`digunakan untuk mengurutkan array `arr` dengan jumlah elemen `length` dalam urutan menaik (dari kecil ke besar). Dengan menggunakan Bubble Sort fungsi ini berjalan dengan membandingkan setiap pasangan elemen yang berdekatan dan menukarnya jika mereka dalam urutan yang salah. Proses ini diulangi sampai tidak ada lagi elemen yang perlu ditukar. Yang kedua fungsi `print(string arr[], int length)`digunakan untuk mencetak elemen-elemen dari array `arr` dengan jumlah elemen `length`. Setiap elemen dicetak dengan koma `,` sebagai pemisah. Kemudian, fungsi `main()`sebagai titik masuk program. Di sini, array `list_nama` yang berisi nama nama warga. Kemudian, fungsi `bubble_sort` dipanggil untuk mengurutkan array ini dalam urutan menaik. Setelah itu, elemen-elemen array yang telah diurutkan dicetak.
#### Output : 
![Ungaided2](https://github.com/Syalaisha-Nisrina/Algortima-Struktur-Data/blob/main/Modul%203/Ungaided2.png)

### 3. Buatlah program yang meminta user menginputkan suatu bilangan n dan meminta user untuk menginputkan sejumlah n karakter. Kemudian program akan melakukan sorting secara menaik (ascending) dan menurun (descending)!

```C++
#include <iostream>
using namespace std;

void prosedur_isi_array(char a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << " Karakter ke-" << i+1 << " :";
        cin >> a[i];
    }
    cout << endl;
}

void ascending(char a[], int n) {
    int x, y;
    char tmp;
    for(x = 1; x < n; x++) {
        y = x;
        while(y > 0 && a[y - 1] > a[y]) {
            tmp = a[y];
            a[y] = a[y - 1];
            a[y - 1] = tmp;
            y--;
        }
    }
}

void descending(char a[], int n) {
    int x, y;
    char tmp;
    for(x = 1; x < n; x++) {
        y = x;
        while(y > 0 && a[y - 1] < a[y]) {
            tmp = a[y];
            a[y] = a[y - 1];
            a[y - 1] = tmp;
            y--;
        }
    }
}

void print(char a[], int n) {
    for(int x = 0; x < n; x++) {
        cout << a[x] << " ";
    }
}

int main() {
    int jmlData;
    cout << " Input (n) : ";
    cin >> jmlData;
    char karakter[jmlData];
    prosedur_isi_array(karakter, jmlData);
    cout << "Karakter sebelum sorting :" << endl;
    print(karakter, jmlData);
    cout << endl;
    cout << "Karakter setelah ascending sort :" << endl;
    ascending(karakter, jmlData);
    print(karakter, jmlData);
    cout << endl;
    cout << "Karakter setelah descending sort :" << endl;
    descending(karakter, jmlData);
    print(karakter, jmlData);
    cout << endl;
    return 0;
}
```
Kode Program ini terdiri dari empat fungsi utama yaitu `prosedur_isi_array`, `ascending`, `descending`, dan `main`. Fungsi `prosedur_isi_array(char a[], int n)`digunakan untuk mengisi array `a` dengan `n`(banyaknya karakter) karakter yang dimasukkan oleh pengguna. Yang ke 2 fungsi `ascending(char a[], int n)`digunakan untuk mengurutkan array `a` dengan jumlah elemen `n` dalam urutan menaik (dari kecil ke besar) dengan menggunakan Insertion Sort. Yang ke 3 fungsi `descending(char a[], int n)` digunakan untuk mengurutkan array `a` dengan jumlah elemen `n`, tetapi dalam urutan menurun (dari besar ke kecil)dengan menggunakan Insertion Sort juga. Yang ke 4 fungsi `print(char a[], int n)`digunakan untuk mencetak elemen-elemen dari array `a` dengan jumlah elemen `n`. Setiap elemen dicetak dengan spasi `" "` sebagai pemisah. Kemudian, fungsi `main()`sebagai  titik masuk program. Pada fungsi ini pengguna diminta untuk memasukkan jumlah data, dan array `karakter` dibuat dengan ukuran tersebut. Kemudian, fungsi `prosedur_isi_array` dipanggil untuk mengisi array ini dengan karakter yang dimasukkan oleh pengguna. Setelah itu, elemen-elemen array dicetak sebelum dan setelah diurutkan dalam urutan menaik dan menurun.
#### Output : 
![Ungaided3](https://github.com/Syalaisha-Nisrina/Algortima-Struktur-Data/blob/main/Modul%203/Ungaided3.png)

## Kesimpulan 
Dari Modul 3 tentang Array ini, dapat diambil beberapa kesimpulan yaitu:
1. **Sorting** adalah proses mengatur data berdasarkan nilai kunci tertentu. Proses ini bisa dilakukan dengan cara mengurutkan data dari yang terkecil hingga yang terbesar (ascending), atau sebaliknya, dari yang terbesar hingga yang terkecil (descending).

2. **Insertion Sort** adalah metode pengurutan yang efektif untuk daftar berukuran kecil dan sebagian besar daftar yang sudah diurutkan. Meski demikian, algoritma ini menjadi kurang efisien untuk data masukan berukuran besar dibandingkan dengan algoritma lain.

3. **Bubble Sort** adalah algoritma pengurutan yang simpel dan mudah dikodekan. Algoritma ini cocok untuk data dengan elemen kecil yang sudah terurut. Namun, algoritma ini tidak efektif untuk data skala besar karena memiliki langkah pengurutan yang panjang.

4. **Selection Sort** adalah algoritma pengurutan yang memiliki waktu pengujian lebih cepat dibandingkan dengan bubble sort. Algoritma ini bekerja dengan membandingkan elemen sekarang dengan elemen yang berikutnya sampai akhir dan jika ditemukan elemen paling kecil dapat ditukar dengan elemen yang sekarang.
 
## Referensi
[1] D. A. Tara et al., “Analisis Kompleksitas Waktu Menggunakan Sorting Algorithm pada Pengaplikasian Fitur Pengurutan Harga dari Terendah dan Tertinggi di Shopee,” Jurnal Potensial, vol. 3, no. 1, pp. 68-80, 2024.

[2] A. Karunanithi, “A Survey, Discussion and Comparison of Sorting Algorithms,” Umeå University, 2014.
