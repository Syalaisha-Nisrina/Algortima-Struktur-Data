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
        cout << " Hurus tidak ditemukan dalam kalimat" << endl;
    }else{
        cout << " Huruf ditemukan pada posisi ke-" << pos + 1 << "."<<endl;
    }

    return 0;
}
