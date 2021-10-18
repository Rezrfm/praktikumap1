#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int hasil1(double pjg)
{
	double mtocm = 100;
	double mtocmresult = pjg * mtocm;
	return mtocmresult;
}

int hasil2(double pjg)
{
	double cmtom = 0.01;
	double cmtomresult = pjg * cmtom;
	return cmtomresult;
}
	
int main(){

	int pjg, brg, barang, hasil1x, sisa;
    int hasil2x;

	cout << "Program Menghitung Banyaknya Barang yang Dapat Dibuat \n";
	cout << "_____________________________________________________" << endl;
	cout << " " << endl;
	cout << "Masukkan panjang bahan yang anda miliki(dalam meter) = ";
	cin >> pjg;
	cout << "Masukkan berapa bahan yang dibutuhkan untuk membuat 1 barang(dalam cm) = ";
	cin >> brg;
	
	hasil1x = hasil1(pjg);
	barang = hasil1x / brg;
	sisa = hasil1x % brg;
	hasil2x = hasil2(hasil1x);

	cout << "Maka barang yang dapat anda buat adalah = " << barang << endl;
	cout << "Maka sisa bahan yang anda miliki adalah = " << sisa << " cm" << endl;
	cout << "Mengubah satuan meter ke satuan centimeter = " << hasil1x << " cm" << endl;
	cout << "Mengubah satuan centimeter kembali ke satuan meter = " << hasil2x << " m" << endl;

	cin.get();
	return 0;
}