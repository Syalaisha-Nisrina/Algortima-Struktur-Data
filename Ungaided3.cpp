#include <iostream>
using namespace std;
int main() {
   int n;
   cout << "Masukkan jumlah elemen dalam array: ";
   cin >> n;

   int arr[n];
   cout << "Masukkan elemen-elemen array: ";
   for(int i = 0; i < n; i++) {
      cin >> arr[i];
   }

   int max = arr[0], min = arr[0], sum = 0;
   double average;
   for(int i = 0; i < n; i++) {
      if(arr[i] > max) {
         max = arr[i];
      }
      if(arr[i] < min) {
         min = arr[i];
      }
      sum += arr[i];
   }

   average = (double)sum / n;

   cout << "Nilai maksimum: " << max << endl;
   cout << "Nilai minimum: " << min << endl;
   cout << "Nilai rata-rata: " << average << endl;

   return 0;
}