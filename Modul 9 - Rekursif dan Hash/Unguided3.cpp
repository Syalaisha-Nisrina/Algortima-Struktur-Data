#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int TABLE_SIZE = 10;

class HashNode {
public:
    string NIM;
    int nilai;

    HashNode(string NIM, int nilai) {
        this->NIM = NIM;
        this->nilai = nilai;
    }
};

class HashMap {
private:
    vector<HashNode *> table[TABLE_SIZE];

public:
    int hashFunc(string key) {
        int hash_val = 0;
        for (char c : key) {
            hash_val += c;
        }
        return hash_val % TABLE_SIZE;
    }

    void insert(string NIM, int nilai) {
        int hash_val = hashFunc(NIM);
        for (auto node : table[hash_val]) {
            if (node->NIM == NIM) {
                node->nilai = nilai;
                return;
            }
        }
        table[hash_val].push_back(new HashNode(NIM, nilai));
        cout << "Data berhasil ditambahkan!" << endl;
    }

    void remove(string NIM) {
        int hash_val = hashFunc(NIM);
        for (auto it = table[hash_val].begin(); it != table[hash_val].end(); it++) {
            if ((*it)->NIM == NIM) {
                table[hash_val].erase(it);
                cout << "Data berhasil dihapus!\n";
                return;
            }
        }
    }

    string searchByNim() {
        string NIM;
        cout << "Input NIM : ";
        cin >> NIM;
        int hash_val = hashFunc(NIM);
        for (auto &node : table[hash_val]) {
            if (node->NIM == NIM) {
                string nilai = to_string(node->nilai);
                cout << "Data di temukan : \n"
                     << "NIM : " << NIM << endl
                     << "Nilai : " << nilai << endl;
                return nilai;
            }
        }
        cout << "Data anda dengan NIM " << NIM << " tidak ditemukan." << endl;
        return "";
    }

    void searchByrangeNim() {
        int lower, upper;
        cout << "Input rentang nilai (misal: 80 90): ";
        cin >> lower >> upper;
        cout << "Data rentang nilai antara " << lower << "-" << upper << ":\n";
        for (int i = 0; i < TABLE_SIZE; i++) {
            for (auto node : table[i]) {
                int nilai = node->nilai;
                if (nilai >= lower && nilai <= upper) {
                    cout << "NIM : " << node->NIM << endl
                         << "Nilai : " << node->nilai << endl;
                }
            }
        }
    }

    void print() {
        cout << "Tampilan Data :" << endl;
        for (int i = 0; i < TABLE_SIZE; i++) {
            cout << i << ": ";
            for (auto pair : table[i]) {
                if (pair != nullptr) {
                    cout << "[" << pair->NIM << ", " << pair->nilai << "] ";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    HashMap employee_map;

    while (true) {
        cout << "Pilihan Menu: \n";
        cout << "1. Menambah Data\n";
        cout << "2. Menghapus Data\n";
        cout << "3. Mencari Data berdasarkan NIM\n";
        cout << "4. Mencari Data berdasarkan Nilai\n";
        cout << "5. Menampilkan Data\n";
        cout << "6. Keluar\n";
        cout << "Input Pilihan Anda : ";

        int pilih, nilai;
        string nim;
        cin >> pilih;

        switch (pilih) {
        case 1: {
            int x;
            cout << "Jumlah yang ingin ditambahkan : ";
            cin >> x;
            for (int i = 1; i <= x; i++) {
                cout << "Menambah data ke-" << i << endl;
                cout << "Input NIM : ";
                cin >> nim;
                cout << "Input Nilai : ";
                cin >> nilai;
                employee_map.insert(nim, nilai);
            }
            break;
        }
        case 2:
            cout << "Menghapus data\n";
            cout << "Input NIM : ";
            cin >> nim;
            employee_map.remove(nim);
            break;
        case 3:
            employee_map.searchByNim();
            break;
        case 4:
            employee_map.searchByrangeNim();
            break;
        case 5:
            employee_map.print();
            break;
        case 6:
            cout << "Keluar\n";
            return 0;
        default:
            break;
        }
    }

    return 0;
}
