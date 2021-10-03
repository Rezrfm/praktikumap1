#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	int a, b, c, max;

	cout << "Program untuk menampilkan angka terbesar \n";
	cout << "Masukkan angka pertama = ";
	cin >> a;
	cout << "Masukkan angka kedua = ";
	cin >> b;
	cout << "Masukkan angka ketiga = ";
	cin >> c;
	if (a > b)
		if (a > c) max = a;
		else max = c; 
	else
		if (b > c) max = b;
		else max = c; 
	cout << "Angka tertinggi adalah : " << max << endl;
}
