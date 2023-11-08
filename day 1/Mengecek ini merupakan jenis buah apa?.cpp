#include <iostream>
#include <string>
using namespace std;

int main() {
    string warna, bentuk;
    
    cout << "Masukkan warna buah: ";
    cin >> warna;
    
    cout << "Masukkan bentuk buah: ";
    cin >> bentuk;
    
    //Pengecekan ini merupakan buah apa?
    if (warna == "merah" && bentuk == "bulat") {
        cout << "Buah ini adalah apel." << endl;
    } else if (warna == "kuning" && bentuk == "panjang") {
        cout << "Buah ini adalah pisang." << endl;
    } else if (warna == "hijau" && bentuk == "bulat") {
        cout << "Buah ini adalah pir hijau." << endl;
    } else if (warna == "kuning" && bentuk == "bulat") {
        cout << "Buah ini adalah pir hijau." << endl;
    } else {
        cout << "Ini bukan buah." << endl;
    }
    
    return 0;
}
