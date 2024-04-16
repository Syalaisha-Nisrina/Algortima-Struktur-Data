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