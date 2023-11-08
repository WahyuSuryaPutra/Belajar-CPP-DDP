#include <iostream>
using namespace std;
int main() {
    double a, b, c, d;

    // Menerima input dari pengguna
    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;
    cout << "Masukkan nilai c: ";
    cin >> c;
    cout << "Masukkan nilai d: ";
    cin >> d;

    // Melakukan operasi perhitungan
    double penjumlahan = (a+b)/(c+d);

    // Menampilkan hasil perhitungan
    cout << "Hasil penjumlahan: " << penjumlahan << endl;

    return 0; 
}
