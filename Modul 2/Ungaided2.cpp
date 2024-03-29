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

