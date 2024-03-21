# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Syalaisha Nisrina Anataya</p>
## Dasar Teori


### 1. Tipe Data Primitif


### 2. Tipe Data Abstrak

### 3. Tipe Data Koleksi


## Guided 

### 1. Tipe Data Primitif

```C++
#include <iostream>

using namespace std;

// Main program
int main() 
{
    char op;
    float num1, num2;

    //It allows user to enter operator i.e. +, -, *, /
    cout << "Enter a Operator: " << endl;
    cin >> op;

    //It allows user to enter the operations
    cout << "Enter Number 1 & 2: " << endl;
    cin >> num1 >> num2;

    //Switch statement begins
    switch (op)
    {
    //If user enter +
    case '+':
        cout << num1 + num2;
        break;

    //If user enter -
    case '-':
        cout << num1 - num2;
        break;

    //If user enter *
    case '*':
        cout << num1 * num2;
        break;

    //If user enter /
    case '/':
        cout << num1 / num2;
        break;

    //If the operatior is other that +, -, * or /,
    //error message will display
    default:
        cout << "Error! operator is not correct";
    }//switch statement ends
    return 0;
}
```
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
### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya
```C++
#include <iostream> 
using namespace std; 

// Kelas PersegiPanjang 
class PersegiPanjang {
public:
  int panjang;
  int lebar;

  // Menghitung luas persegi panjang.
  int getLuas() {
    return panjang * lebar;
  }

  // Menghitung keliling persegi panjang.
  int getKeliling() {
    return 2 * (panjang + lebar);
  }
};

int main() {
  PersegiPanjang persegiPanjang1;
  persegiPanjang1.panjang = 10;
  persegiPanjang1.lebar = 5;

  char pilihan;
  cout << "Pilih '1' untuk luas atau '2' untuk keliling: ";
  cin >> pilihan;

  switch (pilihan) {
    case '1':
      cout << "Luas persegi panjang: " << persegiPanjang1.getLuas() << endl;
      break;
    case '2':
      cout << "Keliling persegi panjang: " << persegiPanjang1.getKeliling() << endl;
      break;
    default:
      cout << "Pilihan tidak valid." << endl;
  }

  return 0;
}
```
### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map
```C++
#include <iostream>
#include <map>
#include <string>
#include <cctype> // Include cctype for toupper function

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



