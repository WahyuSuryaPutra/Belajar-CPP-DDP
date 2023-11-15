#include <iostream>
#include <string>

using namespace std;

int main() {
    string kodeBaju, merkBaju, ukuranBaju;
    double hargaBaju;

    cout << "Masukkan kode baju (001 atau 002): ";
    cin >> kodeBaju;

    if (kodeBaju == "001") {
        merkBaju = "Nevada";
        cout << "Masukkan ukuran baju (S, M, atau L): ";
        cin >> ukuranBaju;

        if (ukuranBaju == "S") {
            hargaBaju = 100000.0;
        } else if (ukuranBaju == "M") {
            hargaBaju = 150000.0;
        } else if (ukuranBaju == "L") {
            hargaBaju = 200000.0;
        } else {
            cout << "Ukuran baju tidak valid." << endl;
            return 1; // Keluar dari program dengan kode error
        }
    } else if (kodeBaju == "002") {
        merkBaju = "Uniqlo";
        cout << "Masukkan ukuran baju (S, M, atau L): ";
        cin >> ukuranBaju;

        if (ukuranBaju == "S") {
            hargaBaju = 50000.0;
        } else if (ukuranBaju == "M" || ukuranBaju == "L") {
            hargaBaju = 100000.0;
        } else {
            cout << "Ukuran baju tidak valid." << endl;
            return 1; // Keluar dari program dengan kode error
        }
    } else {
        cout << "Kode baju tidak valid." << endl;
        return 1; // Keluar dari program dengan kode error
    }

    // Output informasi baju dan harga
    cout << "Merk Baju: " << merkBaju << endl;
    cout << "Ukuran Baju: " << ukuranBaju << endl;
    cout << "Harga Baju: " << hargaBaju << endl;

    return 0;
}
