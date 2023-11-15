#include <iostream>

using namespace std;

int main() {
    // Mendapatkan bilangan dari pengguna
    int bilangan;
    cout << "Masukkan bilangan: ";
    cin >> bilangan;

    // Menggunakan switch case untuk memeriksa apakah bilangan positif atau negatif
    switch (bilangan > 0) {
        case true:
            cout << "Bilangan positif" << endl;
            break;
        case false:
            cout << "Bilangan negatif" << endl;
            break;
    }

    return 0;
}
