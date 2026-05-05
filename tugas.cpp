#include <iostream>
#include <string>

using namespace std;

class Kendaraan
{
private:
    int id;
    string nama;

public:
    // 1.constructur tanpa parameter (Nilai Default)
    Kendaraan()
    {
        id = 0;
        nama = "Tidak Ada Nama";
    }

    // 2. constructure dengan parameter ID saja
    Kendaraan(int pID)
    {
        id = pID;
        nama = "Tanpa Nama";
    }

    // 3. constructure dengan parameter nama saja
    Kendaraan(string pNama)
    {
        id = 0;
        nama = pNama;
    }
    // constructure lengkap nama&id
    Kendaraan(int pId, string pNAma)
    {
        id = pId;
        nama = pNAma;
    }

    // Metode untuk menampilkan data kendaraan
    void tampilkanInfo()
    {
        cout << "ID Kendaraan : " << id << endl;
        cout << "Nama Kendaraan : " << nama << endl;
        cout << "---------------------------" << id << endl;
    }
};

int main()
{
    // inisialisasi menggunakan empat metode berbeda
    Kendaraan mobil1;                       // menggunakan constructor default
    Kendaraan mobil2(101);                  // menggunakan constructor ID saja
    Kendaraan mobil3("Motor Honda");        // menggunakan constructor Nama saja
    Kendaraan mobil4(202, "Mobil porsche"); // menggunakan constructor lengkap

    // Menampilkan informasi semua kendaraan
    cout << "=== Informasi Data Kendaraan ===" << endl;

    cout << "Kendaraan 1 (Default):" << endl;
    mobil1.tampilkanInfo();

    cout << "Kendaraan 2 (Hanya ID ):" << endl;
    mobil2.tampilkanInfo();

    cout << "Kendaraan 3 (Hanya Nama):" << endl;
    mobil3.tampilkanInfo();

    cout << "Kendaraan 4 (Lengkap):" << endl;
    mobil4.tampilkanInfo();

    return 0;
}
