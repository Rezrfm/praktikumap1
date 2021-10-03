#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	string nm;
	float jm, jp;

	cout << "Program Penghitung Gaji Bulanan PT. Ceria Bersama \n";
	cout << "1. Silahkan masukkan nama anda = ";
	getline(cin, nm);
	cout << "2. Pukul berapa anda mulai bekerja? (format waktu adalah 24.00) = ";
	cin >> jm;
	cout << "3. Pukul berapa anda pulang dari bekerja? (format waktu adalah 24.00) = ";
	cin >> jp;

	int gol;
	int jpb = 150;
	int hak = 26;
	float tjk = jp - jm;
	float wkb = tjk * hak;

	cout << "Result. \n";
	cout << "a. Lama anda bekerja tiap harinya adalah = " << tjk << " jam" << endl;
	cout << "b. Maka total waktu bekerja anda selama sebulan adalah = " << wkb << " jam" << endl;

	if (wkb <= jpb) {
		cout << " -Waktu bekerja anda selama sebulan tergolong normal dan akan memakai gaji tetap-" << endl;
	}
	else {
		cout << " -Waktu bekerja anda selama sebulan diatas waktu normal sehingga" << endl;
		cout << "        setiap jam lebihnya akan dihitung gaji per jam- " << endl;
	}

	cout << "_____________________________________________________________________ \n";
	cout << "     Dibawah ini adalah list gaji berdasarkan golongan karyawan \n";
	cout << "1. Golongan 1. Gaji Tetap = Rp. 1.000.000 | Gaji per Jam = Rp. 10.000 \n";
	cout << "2. Golongan 2. Gaji Tetap = Rp. 2.000.000 | Gaji per Jam = Rp. 20.000 \n";
	cout << "3. Golongan 3. Gaji Tetap = Rp. 3.000.000 | Gaji per Jam = Rp. 30.000 \n";
	cout << "4. Golongan 4. Gaji Tetap = Rp. 4.000.000 | Gaji per Jam = Rp. 40.000 \n";
	cout << "5. Golongan 5. Gaji Tetap = Rp. 5.000.000 | Gaji per Jam = Rp. 50.000 \n";
	cout << "   Silahkan masukkan golongan karyawan anda = ";
	cin >> gol;

	int gol1, gol2, gol3, gol4, gol5;
	int gaji1 = 1000000;
	int gaji2 = 2000000;
	int gaji3 = 3000000;
	int gaji4 = 4000000;
	int gaji5 = 5000000;
	int gajij1 = 10000;
	int gajij2 = 20000;
	int gajij3 = 30000;
	int gajij4 = 40000;
	int gajij5 = 50000;
	if (gol == 1) {
		if (wkb <= jpb) gol1 = gaji1;
		else gol1 = gaji1 + (wkb - jpb) * gajij1;
		cout << "   Maka gaji anda sebesar = Rp." << gol1 << endl;
	}
	else if (gol == 2) {
		if (wkb <= jpb) gol2 = gaji2;
		else gol2 = gaji2 + (wkb - jpb) * gajij2;
		cout << "   Maka gaji anda sebesar = Rp." << gol2 << endl;
	}
	else if (gol == 3) {
		if (wkb <= jpb) gol3 = gaji3;
		else gol3 = gaji3 + (wkb - jpb) * gajij3;
		cout << "   Maka gaji anda sebesar = Rp." << gol3 << endl;
	}
	else if (gol == 4) {
		if (wkb <= jpb) gol4 = gaji4;
		else gol4 = gaji4 + (wkb - jpb) * gajij4;
		cout << "   Maka gaji anda sebesar = Rp." << gol4 << endl;
	}
	else if (gol == 5) {
		if (wkb <= jpb) gol5 = gaji5;
		else gol5 = gaji5 + (wkb - jpb) * gajij5;
		cout << "   Maka gaji anda sebesar = Rp." << gol5 << endl;
	}
	else {
		cout << "   Golongan yang anda masukkan salah atau tidak terdaftar di database kami" << endl;
	}
	
	cin.get();
	return 0;
}