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

