# <h1 align="center">Laporan Praktikum Modul Searching</h1>
<p align="center">Syalaisha Nisrina Anataya</p>

## Dasar Teori

### 1. Sequential Search

### 2. Binary Search


## Guided 
### 1. Buatlah sebuah project dengan menggunakan sequential search 
```C++
#include <iostream>
using namespace std;

int main () {
	int n = 10;
	int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10};
	int cari = 10;
	bool ketemu = false;
	int i;
	// Algoritma Sequential Searching
	for (i = 0; i < n; i++) {
		if(data[i] == cari) {
			ketemu = true; 
			break;
		}
	}
	cout << "\t Program Sequential Search Sederhana\n" << endl; 
	cout << "Data: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}" << endl;
	
	if (ketemu) {
		cout << "\nAngka" << cari << " ditemukan pada Index ke-" << i << endl;
	} else {
		cout << " tidak dapat ditemukan pada data." << endl;
	}
	
    return 0;
	}
```
Pada awal program dideklarasikan array data dengan ukuran n yang bernilai 10. Kemudian array tersebut diinisialisasi dengan nilai {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}. Selanjutnya dideklarasikan variabel cari untuk diisi dengan elemen data yang akan dicari. Selain itu Variabel ketemu digunakan untuk menandai apakah nilai cari ditemukan dalam array data.

Kemudian mengunakan loop `for` untuk melakukan pencarian dengan algoritma sequential searching. Kode melakukan pengecekan terhadap setiap elemen dalam array secara berurutan. Apabila ditemukan elemen yang memiliki nilai sama dengan yang dicari, akan mengubah status `ketemu` menjadi benar dan menghentikan loop dengan menggunakan `break`. 
#### Output : 
[gaided1](F:\Semester 1\ALPRO\Code\Praktikum Strukdat\Modul 4\Guided1.png)


### 2. Buatlah sebuah project untuk melakukan pencarian data dengan menggunakan Binary Search

```C++
#include <iostream>
#include <iomanip>

using namespace std;

int bil_data[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;

void selection_sort() {
    int temp, min, i, j;
    for(i = 0; i < 7; i++) {
        min = i;
        for(j = i + 1; j < 7; j++) {
            if(bil_data[j] < bil_data[min]) {
                min = j;
            }
        }
        temp = bil_data[i];
        bil_data[i] = bil_data[min];
        bil_data[min] = temp;
    }
}

void binary_search() {
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = 6;
    while (b_flag == 0 && awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if(bil_data[tengah] == cari) {
            b_flag = 1;
            break;
        } else if(bil_data[tengah] < cari) {
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }
    if(b_flag == 1) {
        cout << "\n Data ditemukan pada index ke-" << tengah << endl;
    } else {
        cout << "\n Data tidak ditemukan\n";
    }
}

int main() {
    cout << "\t BINARY SEARCH\n";
    cout << "\n Data : ";
    // tampilkan data awal
    for(int x = 0; x < 7; x++) {
        cout << setw(3) << bil_data[x];
    }
    cout << endl;
    cout << "\n Masukkan data yang ingin Anda cari : ";
    cin >> cari;
    cout << "\n Data diurutkan : ";
    // urutkan data dengan selection sort
    selection_sort();
    // tampilkan data setelah diurutkan
    for(int x = 0; x < 7; x++) {
        cout << setw(3) << bil_data[x];
    }
    cout << endl;
    binary_search();
    return 0;
}
```
Program diatas digunakan untuk melakukan pencarian data dengan menggunakan Binary Search. Program diawali dengan include librabry yakni `#include <iomanip>` yang berfungsi sebagai manipulator utuk memanipulasi format input dan output program. Kemudian mendeklarasikan array `bil_data` yang berisi 7 bilangan dan variabel `cari` untuk mencari bilangan dalam array. 

Selanjutnya fungsi `selection_sort()` yaitu metode pengurutan dengan mencari elemen dengan nilai paling kecil dan menukarnya ke posisi yang benar hingga array tersebut terurut. Diawali dengan mendeklarasikan variabel `temp`, `min`, `i`, dan `j`. Variabel `temp` untuk menyimpan nilai sementara saat menukar elemen, `min` untuk menyimpan indeks elemen dengan nilai terkecil, serta `i` dan `j` sebagai indeks dalam loop

Kemudian fungsi  `binary_search()`untuk mencari data cari dalam array `bil_data` yang telah diurutkan. Fungsi ini menggunakan pendekatan divide and conquer dengan membagi array menjadi dua bagian setiap langkahnya. Berjalan dengan menginisialisasi empat variabel: `awal`, `akhir`, `tengah`, dan `b_flag`. Variabel `awal` dan `akhir` untuk menentukan rentang pencarian, `tengah` untuk menyimpan indeks tengah dari rentang pencarian, dan `b_flag` untuk penanda apakah elemen yang dicari telah ditemukan atau belum. Selanjutnya, menggunakan juga loop `while` yang akan menghitung indeks tengah dari rentang pencarian. Kemudian, membandingkan elemen di indeks tengah dengan elemen yang dicari :
   - Jika elemen di indeks tengah sama dengan `cari`, maka `b_flag` diatur menjadi 1 dan loop dihentikan.
   - Jika elemen di indeks tengah lebih kecil dari `cari`, maka `awal` diatur menjadi `tengah + 1` untuk melanjutkan pencarian di setengah bagian array yang lebih besar.
   - Jika elemen di indeks tengah lebih besar dari `cari`, maka `akhir` diatur menjadi `tengah - 1` untuk .

Setelah selesai memeriksa nilai `b_flag`:
   - Jika `b_flag` adalah 1, yang berarti elemen yang dicari telah ditemukan, maka akan mencetak pesan bahwa data ditemukan dan indeksnya.
   - Jika `b_flag` masih 0, yang berarti elemen yang dicari tidak ditemukan dalam array, maka akan mencetak pesan bahwa data tidak ditemukan.

#### Output : 
[gaided2]( )

## Unguided 
### 1. Buatlah sebuah program untuk mencari sebuah huruf pada sebuah kalimat yang sudah di input dengan menggunakan Binary Search!


```C++
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int binarySearch(string kalimat, char huruf)
    { int left = 0, right = kalimat.length() -
    1; while (left <= right) {
        int mid = left + (right - left) / 2;
        if (kalimat[mid] == huruf) {
            return mid;
        } else if (kalimat[mid] < huruf) 
            { left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    string kalimat;
    char huruf;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    sort(kalimat.begin(), kalimat.end());

    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> huruf;
    int pos = binarySearch(kalimat, huruf);

    if (pos == -1){
        cout << " Huruf tidak ditemukan dalam kalimat" << endl;
    }else{
        cout << " Huruf ditemukan pada posisi ke-" << pos + 1 << "."<<endl;
    }

    return 0;
}
```
Kode Program menggunakan`#include <algorithm>` yang berfungsi untuk memasukkan file header algorithm yang berisi fungsi-fungsi algoritma standar seperti `sort()`, `binary_search()`, dll. Selain itu juga menggunakan `#include <string>` untuk memasukkan file header string yang berisi definisi kelas string dan fungsi-fungsi yang berhubungan dengan string.

Pertama tama program melakukan sorting pada kalimat menggunakan fungsi sort(). Kemudian menggunakan `int binarySearch` untuk menerima dua parameter, sebuah string `kalimat` dan sebuah karakter `huruf`. Fungsi ini akan mencari `huruf` dalam `kalimat` menggunakan algoritma Binary Search dan mengembalikan posisi `huruf` jika ditemukan, atau `-1` jika tidak ditemukan.

#### Output : 
[Ungaided1]( )

### 2. Buatlah sebuah program yang dapat menghitung banyaknya huruf vocal dalam sebuah kalimat!

```C++
#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat;
    int jumlah_vokal = 0;

    cout << "Masukkan kalimat: "; getline(cin, kalimat);

    for(int i = 0; i < kalimat.length(); i++) {
    if(kalimat[i] == 'a' || kalimat[i] == 'i' || kalimat[i] == 'u' || kalimat[i] == 'e' || kalimat[i] == 'o' || kalimat[i] == 'A' || kalimat[i] == 'I' || kalimat[i] == 'U' || kalimat[i] == 'E' || kalimat[i] == 'O') {
        jumlah_vokal++;
        }
    }

    cout << "Jumlah huruf vokal dalam kalimat tersebut adalah: " << jumlah_vokal;

    return 0;
}
```
Kode Program ini akan menghitung jumlah huruf vokal yang dimasukkan oleh user. Pertama program akan meminta user memasukkan kalimat dengan getline() . Kemudian pada loop `for` akan melakukan perulangan sebanyak jumlah karakter dalam string `kalimat` dengan memeriksa kondisi pada `if`. Kondisi yang diperiksa adalah apakah terdapat huruf  vokal (‘a’, ‘i’, ‘u’, ‘e’,‘o’ atau ‘A’, ‘I’, ‘U’, ‘E’,‘O’) Jika ya, maka program di dalam kondisi ini akan dieksekusi.
#### Output : 
[Ungaided2]( )

### 3. Diketahui data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4. Hitunglah berapa banyak angka 4 dengan menggunakan algoritma Sequential Search

```C++
#include <iostream>
using namespace std;

int main() {
    int data[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int length = sizeof(data)/sizeof(data[0]);
    int searchNum = 4;
    int count = 0;

    cout << "Data: ";
    for(int i=0; i<length; i++)
        { cout << data[i] << " ";
        if(data[i] == searchNum) {
            count++;
        }   
    }
    cout << endl;

    cout << "Jumlah angka " << searchNum << " pada data tersebut adalah: " << count << endl;

    return 0;
}
```
Pertama dilakukan pendefinisian array `int data`  dengan {9, 4, 1, 4, 7, 10, 5, 4, 12, 4}, `int length`,`int searchNum` dan `int count`.Kemudian akan menampilkan data dalam  `int data`. Selanjutnya pada loop `for` dilakukan perulangan sebanyak  `length` dengan membaningkan setiap elemen dengan elemen yang dicari.

### Output :
[Ungaided3]( )

## Kesimpulan 
Dari Modul 4 tentang Searching  ini, dapat diambil beberapa kesimpulan yaitu:

 
## Referensi
[1] D. A. Tara et al., “Analisis Kompleksitas Waktu Menggunakan Sorting Algorithm pada Pengaplikasian Fitur Pengurutan Harga dari Terendah dan Tertinggi di Shopee,” Jurnal Potensial, vol. 3, no. 1, pp. 68-80, 2024.
[2] A. Karunanithi, “A Survey, Discussion and Comparison of Sorting Algorithms,” Umeå University, 2014.