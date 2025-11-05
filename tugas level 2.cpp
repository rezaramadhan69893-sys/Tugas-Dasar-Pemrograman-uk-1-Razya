// NIM : 2500018002
// NAMA : RAZYA APRIAN

#include <iostream>
using namespace std;

int main() {
	long a, b, c, d, e;
	// a = jam, b = menit, c = detik, d = hari, e = totalDetik
	
	cout << "Masukkan Jumlah waktu (detik) : ";
	cin >> e;
	
    d = e / 86400;
    e = e % 86400;
	a = e / 3600;
	e = e % 3600;
	
	b = e / 60;
	c = e % 60;
	
	cout << "Hasil konversi : " << d << " hari, " << a << " jam, "
		<< b << " menit, " << c << " detik. " << endl;
	return 0;
