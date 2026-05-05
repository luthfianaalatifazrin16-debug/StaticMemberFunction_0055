#include <iostream>
#include <string>
using namespace std;

class Produk
{
private:
    int id;
    string nama;

public:
    // 1. Constructor default
    Produk()
    {
        id = 0;
        nama = "Default";
    }

    // 2. Constructor dengan parameter id
    Produk(int Pid)
    {
        id = Pid;
        nama = "Meja";
    }

    // 3. Constructor dengan parameter nama
    Produk(string Pnama)
    {
        id = 0;
        nama = Pnama;
    }

    // 4. Constructor lengkap
    Produk(int Pid, string Pnama)
    {
        id = Pid;
        nama = Pnama;
    }

    void tampilkan()
    {
        cout << "ID   : " << id << endl;
        cout << "Nama : " << nama << endl;
        cout << endl;
    }
};
