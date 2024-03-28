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
