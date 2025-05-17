

void proseskembali(buku& b, peminjam& p){
    if (b.dipinjam){
        b.dipinjam = false;
        p.totalpinjaman--;
        cout << "buku berhasil dikembalikkan oleh " << p.nama << endl;
    }
}