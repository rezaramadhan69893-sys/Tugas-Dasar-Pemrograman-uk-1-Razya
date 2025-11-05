// NIM : 2500018002
// NAMA : RAZYA APRIAN
#include <iostream>
using namespace std;

int main() {
    long long c;
    // a = jam, b = menit, c = detik, d = sisa_detik, e = detik_akhir

    cout<<"Masukkan angka >1 (dalam satuan detik) =";
    cin>>c;
    
    long long a = c / 3600;
    long long d = c % 3600;
    int b = d / 60;
    int e = d % 60;

    cout<<endl;
    cout<<"Hasil konversinya adalah :"<<endl;
    cout<<c<<" "<<"Detik = "<<" "<<a<<" jam,"<<" "<<b<<" Menit,"<<" "<<e<<" detik."<<endl;
    
    return 0;
}
