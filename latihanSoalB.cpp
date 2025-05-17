
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