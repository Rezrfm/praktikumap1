#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
	float jarak_tempuh= 750;
	float waktu_tempuh = 20;
	cout << "Kecepatan mobil jika diketahui jarak tempuh 750 km dan waktu tempuh mobil 20 jam \n";
	cout << "Jarak tempuh mobil = " << jarak_tempuh << "km" << endl;
	cout << "Waktu tempuh mobil = " << waktu_tempuh << " jam" << endl;
	cout << "Maka kecepatan mobil adalah = " << jarak_tempuh / waktu_tempuh << "km/jam" << endl;

	return 0;
}