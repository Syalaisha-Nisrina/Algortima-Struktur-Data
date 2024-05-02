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