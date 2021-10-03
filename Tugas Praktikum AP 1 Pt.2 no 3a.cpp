#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	int p, b, c;
	int np = 10000000;
	float pb1 = 0.10;
	float pb2 = 0.05;

	cout << "Program menghitung besaran bonus penjualan \n";
	cout << "Masukkan pemasukan yang anda dapatkan per minggu = Rp.";
	cin >> p;

	int pbli = p * pb1;
	int pblii = p * pb2;

	if (p >= np)
	{
		cout << "Pemasukan yang anda dapatkan adalah = Rp." << fixed << p + pbli << endl;
		cout << "Dengan besaran bonus penjualan sebesar = Rp." << fixed << pbli << endl;
	}
	else if (p < np)
	{
		cout << "Pemasukan yang anda dapatkan adalah = Rp." << fixed << p + pblii << endl;
		cout << "Dengan besaran bonus penjualan sebesar = Rp." << fixed << pblii << endl;
	}

	cin.get();
	return 0;
}

