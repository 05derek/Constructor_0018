

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