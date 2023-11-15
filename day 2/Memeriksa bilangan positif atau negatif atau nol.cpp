#include <iostream>

using namespace std;

int main() {
    // Mendapatkan bilangan dari pengguna
    int bilangan;
    cout << "Masukkan bilangan: ";
    cin >> bilangan;

    // Memeriksa apakah bilangan positif, negatif, atau nol
    if (bilangan > 0) {
        cout << "Bilangan positif" << endl;
    } else if (bilangan < 0) {
        cout << "Bilangan negatif" << endl;
    } else {
        cout << "Bilangan nol" << endl;
    }

    return 0;
}