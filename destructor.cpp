#include <iostream>
using namespace std;

class mahasiswa
{
public:
    mahasiswa();  // Constructor
    ~mahasiswa(); // Destructor
};

mahasiswa::mahasiswa()
{
    cout << "Constructor Terpanggil" << endl;
}

mahasiswa::~mahasiswa()
{
    cout << "Destructor Terpanggil" << endl;
}

int main()
{
    mahasiswa mhs; // Pembuatan Object
    return 0;
}