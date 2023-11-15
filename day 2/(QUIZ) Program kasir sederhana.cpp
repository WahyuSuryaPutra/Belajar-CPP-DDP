#include <iostream>

using namespace std;

int main() {
    // Menampilkan daftar menu
    cout << "Menu\n";
    cout << "1. Ayam Goreng    : 20000\n";
    cout << "2. Nasi Goreng    : 25000\n";
    cout << "3. CapCay         : 15000\n";

    // Memasukkan menu yang dibeli
    int choice, quantity;
    cout << "\nMasukkan Menu yang dibeli (0 untuk selesai):\n";
    cout << "Pilihan: ";
    cin >> choice;

    // Memeriksa apakah pilihan menu valid
    int totalPayment = 0;
    switch (choice) {
        case 1:
            cout << "Masukkan jumlah pembelian: ";
            cin >> quantity;
            totalPayment = 20000 * quantity;
            break;
        case 2:
            cout << "Masukkan jumlah pembelian: ";
            cin >> quantity;
            totalPayment = 25000 * quantity;
            break;
        case 3:
            cout << "Masukkan jumlah pembelian: ";
            cin >> quantity;
            totalPayment = 15000 * quantity;
            break;
        default:
            cout << "Pilihan menu tidak valid.\n";
            return 0;
    }

    // Menampilkan total pembayaran
    cout << "\nJumlah uang yang harus dibayarkan adalah: " << totalPayment << endl;

    // Memasukkan uang yang dibayar
    int amountPaid;
    cout << "Masukkan uang yang dibayar: ";
    cin >> amountPaid;

    // Menghitung dan menampilkan kembalian
    int change = amountPaid - totalPayment;
    cout << "Kembalian: " << change << endl;

    return 0;
}
