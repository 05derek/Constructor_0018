#include <iostream>
using namespace std;
class buku{
    string judul;

public:
    buku setJudul(string judul)
    {
        this->judul = judul;
        return *this; //chain function
    }
    string getjudul;()
    {
        return this->judul;
    }
}bukunya;

int main()
{
    setjudul("matematika");
    cout << bukunya.setjudul("matematika").getjudul();//chain function calss
    return 0;
}