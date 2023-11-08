#include <iostream>
using namespace std;
int main() {
    int a, b;

    // Menerima input dari pengguna
    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;

    // Melakukan operasi perhitungan
    double penjumlahan = a + b;
    double pengurangan = a - b;
    double perkalian = a * b;
    double pembagian = a/b;
    int modulus = a%b;

    // Menampilkan hasil perhitungan
    cout << "Hasil penjumlahan: " << penjumlahan << endl;
    cout << "Hasil pengurangan: " << pengurangan << endl;
    cout << "Hasil perkalian: " << perkalian << endl;
    cout << "Hasil pembagian: " << pembagian << endl;
    cout << "Hasil modulus:" << modulus << endl;
    return 0; 
}
