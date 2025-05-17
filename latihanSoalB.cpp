

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