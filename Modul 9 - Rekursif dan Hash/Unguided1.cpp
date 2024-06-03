#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int angka;
    cout << "Masukkan bilangan bulat positif: ";
    cin >> angka;
    cout << "Faktorial dari " << angka << " adalah: " << factorial(angka) << endl;
    return 0;
}