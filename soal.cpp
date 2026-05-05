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
};
