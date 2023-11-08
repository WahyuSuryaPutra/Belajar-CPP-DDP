#include <iostream>
using namespace std;

int main() {
    double nilai;

    // Minta pengguna memasukkan nilai
    cout << "Masukkan nilai: ";
    cin >> nilai;

    // Periksa apakah nilai lebih dari atau sama dengan 75
    if (nilai >= 75) {
        cout << "Lulus" << std::endl;
    } else {
        cout << "Tidak Lulus" << std::endl;
    }

    return 0;
}
