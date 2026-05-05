#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
private:
    int nim;
    string nama;

public:
    // Penggunaan this untuk membedakan variabel member dan parameter
    void setNim(int nim)
    {
        this->nim = nim;
    }

    void setNama(string nama)
    {
        this->nama = nama;
    }

    void cetak()
    {
        cout << "Nim = " << nim << endl;
        cout << "Nama = " << nama << endl;
    }
};
