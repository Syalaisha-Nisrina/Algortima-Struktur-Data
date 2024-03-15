#include <iostream>
using namespace std;

int main()
{
    char op;
    float num1, num2;
    cout << "Masukkan Operator: ";
    cin >> op;
    cout << "Masukkan Angka 1 dan 2: ";
    cin >> num1 >> num2;

    switch(op)
    {
    case '+':   
        cout<< num1 + num2;
        break;
    case '-':
        cout<< num1 - num2;
    case '*':
        cout<< num1 * num2;
    case '/':
        cout<< num1 / num2;
    default:
        cout<< "Error! operator is not correct";
  }
return 0;
}
