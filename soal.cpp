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

int main()
{
    Produk p1;               // default
    Produk p2(10);           // id saja
    Produk p3("Kursi");      // nama saja
    Produk p4(20, "Laptop"); // lengkap

    p1.tampilkan();
    p2.tampilkan();
    p3.tampilkan();
    p4.tampilkan();

    return 0;
