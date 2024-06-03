#include <iostream>
using namespace std;

// untuk menghitung faktorial menggunakan rekursif tidak langsung
long long factorial_iterative(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int angka;
    cout << "Masukkan bilangan bulat positif: ";
    cin >> angka;
    cout << "Faktorial dari " << angka << " dengan rekursif tidak langsung adalah: " << factorial_iterative(angka) << endl;
    return 0;
}