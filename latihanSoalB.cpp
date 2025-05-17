#include <iostream>
#include <string>
using namespace std;

class peminjam;
class petugas;

class buku{
    private:
        string judul;
        string penulis;
        bool dipinjam;

    public:
        buku(string j, string p) : judul(j), penulis(p), dipinjam(false){}
        friend class petugas;
};

class peminjam{
    private:
        string nama;
        int id;
        int totalpinjaman;

    public:
        peminjam (string n, int i) : nama(n), id(i), totalpinjaman(0){}      
};

class petugas{
    private:
        string nama;
        int idPetugas;
        string levelAkses;

    public:
        petugas(string n, int id, string level) : nama(n), idPetugas(id), levelAkses(level) {}

    void prosesPinjam(buku& b, peminjam& p) {
        if (!b.dipinjam){
            b.dipinjam = true;
            p.totalpinjaman++;
            cout << "buku berhasil dipinjam oleh " << p.nama << endl;
        }
    }else{
        cout << "buku sedang dipinjam." << endl;
    }
}

void proseskembali(buku b, peminjam p){
    if (b.dipinjam){
        b.dipinjam = false;
        p.totalpinjaman--;
        cout << "buku berhasil dikembalikkan oleh " << p.nama << endl;
    }else{
        cout << "buku tidak sedang dipinjam" << endl;
    }
};

friend class admin;
class admin{
    public:
        void ubahlevelAkses(petugas p, const string newLevel){
            p.levelAkses = newLevel;
            cout << "levelAkses petugas diubah menjadi: " << newLevel << endl;
        }

        void lihatStatistik(cosnt peminjam p, const buku b){
            cout << "peminjam: " << p.nama << ", total pinjaman: " << p.totalpinjaman << endl;
            cout << "status buku: " << b.dipinjam << "dipinjam" : "tersedia" << endl;
        }
};

int main(){
    buku buku1("retorika");
    peminjam peminjam1("hadi", 101);
    petugas petugas1("budi", 1, "level 1");
    admin admin;

    petugas1.prosesPinjam(buku1, peminjam1);
    admin1.lihatStatistik(peminjam1, buku1);
    petugas1.prosesKembali(buku1, peminjam1);
    admin1.lihatStatistik(peminjam1, buku1);
    admin1.ubahlevelAkses(petugas1, "level 2");

    return 0;
}