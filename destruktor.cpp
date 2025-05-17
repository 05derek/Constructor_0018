

void angka::isiData(){
    for(int i=1; i<=panjang; i++){
        cout<<i<<" = "; cin>>arr[i];
    }
    cout<<endl;
}

int main(){
    angka belajarcpp(3);              // Constructor Dipanggil
    angka *ptrBelajarcpp = new angka(5); // Constructor Dipanggil
    delete ptrBelajarcpp;            // Destructor Dipanggil

    return 0;
} // Destructor Dipanggil
