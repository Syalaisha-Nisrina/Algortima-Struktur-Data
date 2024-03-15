#include <stdio.h>
#include <iostream>
using namespace std;

//Struct
struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};

int main()
{
    struct Mahasiswa mhs1,mhs2;
    //mengisi nilai ke struct
    mhs1.name = "Icha";
    mhs1.address = "Asturia";
    mhs1. age = 19;
    mhs2.name = "Syalaisha";
    mhs2.address = "Magelang";
    mhs2. age = 19;

    cout << "Mahasiswa 1 \n"  << endl;
    cout << "Nama : " << mhs1.name << endl;
    cout << "Address :" << mhs1.address << endl;
    cout << "Age : " << mhs1.age <<endl;

    cout << "Mahasiswa 2 \n";
    cout << "Nama : " << mhs2.name << endl;
    cout << "Address :" << mhs2.address << endl;
    cout << "Age : " << mhs2.age <<endl;

    return 0;
}
