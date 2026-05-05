#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
private:
    int nim;
    string nama;

public:
    mahasiswa &setNim(int nim);
    mahasiswa &setNama(string nama);
    void cetak();
};

mahasiswa &mahasiswa::setNim(int nim)
{
    this->nim = nim;
    return *this;
}

mahasiswa &mahasiswa::setNama(string nama)
{
    this->nama = nama;
    return *this;
}

void mahasiswa::cetak()
{
    cout << "Nim = " << nim << endl;
    cout << "Nama = " << nama << endl;
}

int main()
{
    mahasiswa mhs;
    // Chaining function call
    mhs.setNama("Huda").setNim(101);
    mhs.cetak();

    return 0;
