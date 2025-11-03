#include <iostream>
using namespace std;

int main() {
	long totalDetik, hari, jam, menit, detik;
	
	cout << "Masukkan Jumlah waktu (detik) : ";
	cin >> totalDetik;
	
    long long hari = totalDetik / 86400;
    long long totalDetik = totalDetik % 86400;
	long long jam = totalDetik / 3600;
	long long totalDetik = totalDetik % 3600;
	
	menit = totalDetik / 60;
	detik = totalDetik % 60;
	
	cout << "Hasil konversi : " << hari << " hari : " << jam << " jam : "
		<< menit << " menit : " << detik << " detik " << endl;
	return 0;
}