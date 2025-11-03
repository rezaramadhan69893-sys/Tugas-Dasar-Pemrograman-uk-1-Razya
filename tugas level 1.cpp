#include <iostream>
using namespace std;

int main() {
    int detik;

    cout<<"Masukkan angka >1 (dalam satuan detik) =";
    cin>>detik;

    long long jam = detik / 3600;
    long long sisa_detik = detik % 3600;
    int menit = sisa_detik / 60;
    int detik_akhir = sisa_detik % 60;

    cout<<endl;
    cout<<"Hasil konversi adalah :"<<endl;
    cout<<detik<<" "<<"Detik = "<<" "<<jam<<" jam"<<" "<<menit<<" Menit"<<" "<<detik_akhir<<" detik."<<endl;
    
    return 0;
}