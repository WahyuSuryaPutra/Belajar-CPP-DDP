#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char statusMenikah;
    char golongan;

    cout << "Apakah Anda sudah menikah? (Y/N): ";
    cin >> statusMenikah;

    cout << "Masukkan golongan (A/B/C): ";
    cin >> golongan;

    const double gajiPokok = 2500000;
    double tunjanganMenikah = 0;
    double tunjanganJabatan = 0;

    // Cek status menikah
    if (statusMenikah == 'Y' || statusMenikah == 'y') {
        tunjanganMenikah = 0.15 * gajiPokok;
    }

    // Cek golongan
    if (golongan == 'A' || golongan == 'a') {
        tunjanganJabatan = 0.20 * gajiPokok;
    } else if (golongan == 'B' || golongan == 'b') {
        tunjanganJabatan = 0.15 * gajiPokok;
    } else if (golongan == 'C' || golongan == 'c') {
        tunjanganJabatan = 0.10 * gajiPokok;
    }

    // Hitung total gaji
    double totalGaji = gajiPokok + tunjanganMenikah + tunjanganJabatan;

    // Tampilkan hasil
    cout << "\n===== Hasil Perhitungan =====\n";
    cout << fixed << setprecision(2);
    cout << "Gaji Pokok: " << gajiPokok << endl;
    cout << "Tunjangan Menikah: " << tunjanganMenikah << endl;
    cout << "Tunjangan Jabatan: " << tunjanganJabatan << endl;
    cout << "Total Gaji: " << totalGaji << endl;

    return 0;
}
