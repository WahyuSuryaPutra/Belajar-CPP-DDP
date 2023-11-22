#include <iostream>


using namespace std;

int main() {
    // Menampilkan daftar menu agar saat di run langsung keluar hasilnya
    cout << "Menu\n";
    cout << "1. Minyak Goreng  : 20000\n";
    cout << "2. Sabun          : 5000\n";
    cout << "3. Shampoo        : 6000\n";
    cout << "4. Gula           : 10000\n";
    cout << "5. Kopi           : 12000\n";
    cout << "6. Teh            : 8000\n";
    cout << "7. Sampo         : 15000\n";
    cout << "8. Rinso         : 18000\n";
    cout << "9. Telur         : 25000\n";
    cout << "10. Sabut Sikat   : 3000\n";

    // Memasukkan menu yang dibeli pilihan yang akan dipilih oleh customer
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
            totalPayment = 5000 * quantity;
            break;
        case 3:
            cout << "Masukkan jumlah pembelian: ";
            cin >> quantity;
            totalPayment = 6000 * quantity;
            break;
        case 4:
            cout << "Masukkan jumlah pembelian: ";
            cin >> quantity;
            totalPayment = 10000 * quantity;
            break;
        case 5:
            cout << "Masukkan jumlah pembelian: ";
            cin >> quantity;
            totalPayment = 12000 * quantity;
            break;
        case 6:
            cout << "Masukkan jumlah pembelian: ";
            cin >> quantity;
            totalPayment = 8000 * quantity;
            break;
        case 7:
            cout << "Masukkan jumlah pembelian: ";
            cin >> quantity;
            totalPayment = 15000 * quantity;
            break;
        case 8:
            cout << "Masukkan jumlah pembelian: ";
            cin >> quantity;
            totalPayment = 18000 * quantity;
            break;
        case 9:
            cout << "Masukkan jumlah pembelian: ";
            cin >> quantity;
            totalPayment = 25000 * quantity;
            break;
        case 10:
            cout << "Masukkan jumlah pembelian: ";
            cin >> quantity;
            totalPayment = 3000 * quantity;
            break;
        default:
            cout << "Pilihan menu tidak valid.\n";
            return 0;
    }

    // Apakah dia merupakan Member? Mari kita buktikan
    bool isMember;
    cout << "Apakah Anda memiliki member? (1: Ya, 0: Tidak): ";
    cin >> isMember;

    // Menambahkan variable pendukung untuk menyimpan nama dari member 
    string memberName;

    // Jika dia member, minta nama dan tampilkan notifikasi selamat berbelanja blalblblbalblabla
    if (isMember) {
        cout << "Masukkan nama Anda: ";
        cin.ignore(); // Membersihkan buffer sebelum membaca string
        getline(cin, memberName);
        totalPayment -= (totalPayment * 10) / 100;
        cout << "Selamat berbelanja, " << memberName << "! Anda mendapatkan diskon 10% sebagai member.\n";
    } else {
        cout << "\n";
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
