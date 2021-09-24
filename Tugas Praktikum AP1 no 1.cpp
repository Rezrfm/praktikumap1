#include <iostream>
#include <string>

using namespace std;

int main()
{
	float nilai_uh = 89;
	float nilai_uts = 94;
	float nilai_uas = 98;
	cout << "Menghitung rata-rata nilai mahasiswa Universitas Paramadina \n";
	cout << "Nilai ulangan harian = " << nilai_uh << endl;
	cout << "Nilai UTS = " << nilai_uts << endl;
	cout << "Nilai UAS = " << nilai_uas << endl;
	cout << "Rata-ratanya adalah = " << (nilai_uh + nilai_uts + nilai_uas) / 3 << endl;
	
	return 0;
}