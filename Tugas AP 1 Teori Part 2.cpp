#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct pecahan
{
	float pembilang;
	float penyebut;
};

int main()
{
	pecahan pecahan1, pecahan2;

	float penyebut, pembilang1, pembilang2, menjumlah, menjumlah2, mengurang, mengurang2, pengali1, pengali2, pengali3, pembagi1, pembagi2, pembagi3;
	char yorno;
	do
	{
		system("cls");
		cout << "Masukkan pembilang pada pecahan pertama : ";
		cin >> pecahan1.pembilang;
		cout << endl;
		cout << "Masukkan penyebut pada pecahan pertama : ";
		cin >> pecahan1.penyebut;
		cout << endl;
		cout << "Masukkan pembilang pada pecahan kedua : ";
		cin >> pecahan2.pembilang;
		cout << endl;
		cout << "Masukkan penyebut pada pecahan kedua : ";
		cin >> pecahan2.penyebut;
		cout << endl;
		cout << "Pecahan yang anda masukkan adalah = " << pecahan1.pembilang << " / " << pecahan1.penyebut << " dan " << pecahan2.pembilang << " / " << pecahan2.penyebut << endl;
		cout << endl;
		cout << "Apakah sudah benar? y/n : ";
		cin >> yorno;
		cout << endl;
	} while (yorno == 'n');

	penyebut = pecahan1.penyebut * pecahan2.penyebut;
	pembilang1 = penyebut / pecahan1.pembilang;
	pembilang2 = penyebut / pecahan2.pembilang;
	menjumlah = (pembilang1 + pembilang2) / penyebut; //hasil penjumlahan 2 pecahan jika penyebut berbeda.
	menjumlah2 = (pecahan1.pembilang + pecahan2.pembilang) / pecahan1.penyebut; //hasil penjumlahan 2 pecahan jika penyebut sama.
	mengurang = (pembilang1 - pembilang2) / penyebut; //hasil pengurangan 2 pecahan jika penyebut berbeda.
	mengurang2 = (pecahan1.pembilang - pecahan2.pembilang) / pecahan1.penyebut; //hasil pengurangan 2 pecahan jika penyebut sama.
	pengali1 = pecahan1.pembilang * pecahan2.pembilang; //hasilnya menjadi pembilang.
	pengali2 = pecahan1.penyebut * pecahan2.penyebut; //hasilnya menjadi penyebut.
	pengali3 = pengali1 / pengali2; //hasil perkalian 2 pecahan.
	pembagi1 = pecahan1.pembilang * pecahan2.penyebut; //hasilnya menjadi pembilang.
	pembagi2 = pecahan2.pembilang * pecahan1.penyebut; //hasilnya menjadi penyebut.
	pembagi3 = pembagi1 / pembagi2; //hasil pembagian 2 pecahan.

	cout << "Soal 1" << endl;

	if (pecahan1.penyebut == pecahan2.penyebut)
	{
		cout << "a. Menjumlahkan dua pecahan." << endl;
		cout << pecahan1.pembilang << " / " << pecahan1.penyebut << " + " << pecahan2.pembilang << " / " << pecahan2.penyebut << " = " << pecahan1.pembilang << " + " << pecahan2.pembilang << " / " << pecahan1.penyebut << " = " << menjumlah2 << endl;
		cout << endl;
		cout << "b. Mengurangi dua pecahan." << endl;
		cout << pecahan1.pembilang << " / " << pecahan1.penyebut << " - " << pecahan2.pembilang << " / " << pecahan2.penyebut << " = " << pecahan1.pembilang << " - " << pecahan2.pembilang << " / " << pecahan1.penyebut << " = " << mengurang2 << endl;
		cout << endl;
	}
	else
	{
		cout << "a. Menjumlahkan dua pecahan." << endl;
		cout << pecahan1.pembilang << " / " << pecahan1.penyebut << " + " << pecahan2.pembilang << " / " << pecahan2.penyebut << " = " << pembilang1 << " / " << penyebut << " + " << pembilang2 << " / " << penyebut << " = " << menjumlah << endl;
		cout << endl;
		cout << "b. Mengurangi dua pecahan." << endl;
		cout << pecahan1.pembilang << " / " << pecahan1.penyebut << " - " << pecahan2.pembilang << " / " << pecahan2.penyebut << " = " << pembilang1 << " / " << penyebut << " - " << pembilang2 << " / " << penyebut << " = " << mengurang << endl;
		cout << endl;
	}
	cout << "c. Mengalikan dua pecahan." << endl;
	cout << pecahan1.pembilang << " / " << pecahan1.penyebut << " * " << pecahan2.pembilang << " / " << pecahan2.penyebut << " = " << pengali1 << " / " << pengali2 << " = " << pengali3 << endl;
	cout << endl;
	cout << "d. Membagi dua pecahan." << endl;
	cout << pecahan1.pembilang << " / " << pecahan1.penyebut << " : " << pecahan2.pembilang << " / " << pecahan2.penyebut << " = " << pembagi1 << " / " << pembagi2 << " = " << pembagi3 << endl;
}