#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	int bil1, bil2, op;
	float hasil;
	string operasi;

	cout << "Kalkulator Sederhana \n";
	cout << "Masukkan angka pertama = ";
	cin >> bil1;
	cout << "Masukkan angka kedua = ";
	cin >> bil2;
	cout << "Pilih salah satu operasi yang diinginkan \n";
	cout << "1. Penjumlahan" << endl;
	cout << "2. Pengurangan" << endl;
	cout << "3. Perkalian" << endl;
	cout << "4. Pembagian" << endl;
	cout << "Masukkan operasi yang diinginkan = ";
	cin >> op;

	
	switch (op) {
	case 1 : hasil = bil1 + bil2;
		operasi = '+';
		break;
	case 2 : hasil = bil1 - bil2;
		operasi = '-';
		break;
	case 3 : hasil = bil1 * bil2;
		operasi = 'x';
		break;
	case 4 : hasil = bil1 / bil2;
		operasi = ':';
		break;
	default :
		cout << "Salah memasukkan operasi" << endl;
	}
	cout << "___________________" << endl;
	cout << bil1 << operasi << bil2 << "=" << hasil << endl;
	cout << "___________________" << endl;

	cin.get();
	return 0;
}

