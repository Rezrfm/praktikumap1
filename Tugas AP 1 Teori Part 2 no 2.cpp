#include <iostream>
#include <string>

using namespace std;

struct DataSiswa
{
	char Nama[100];
	int NIM;
	float UH;
	float UTS;
	float UAS;
	float AVG;
	float SUM;
	string Indeks;
};


int main()
{
	int i;
	float nmax;
	int a = 0;
	const int max = 21;
	cout << "Masukkan Data Mahasiswa. \n";
	cout << endl;

	DataSiswa nama_mhs[max], nim_mhs[max], nilai_mhs[max], indeks_mhs[100];

	for (i = 0; i < max; i++)
	{
		cout << "Masukkan nama mahasiswa ke-" << i + 1 << " : ";
		cin.getline(nama_mhs[i].Nama, 100);
	}
	cout << endl;
	for (i = 0; i < max; i++)
	{
		cout << "Masukkan NIM sdr/i " << nama_mhs[i].Nama << " : ";
		cin >> nim_mhs[i].NIM;
	}
	cout << endl;
	for (i = 0; i < max; i++)
	{
		cout << "Masukkan Nilai Ulangan Harian sdr/i " << nama_mhs[i].Nama << " : ";
		cin >> nilai_mhs[i].UH;
		cout << "Masukkan Nilai Ulangan Tengah Semester sdr/i " << nama_mhs[i].Nama << " : ";
		cin >> nilai_mhs[i].UTS;
		cout << "Masukkan Nilai Ulangan Akhir Semester sdr/i " << nama_mhs[i].Nama << " : ";
		cin >> nilai_mhs[i].UAS;
	}

	for (i = 0; i < max; i++)
	{
		nilai_mhs[i].SUM = nilai_mhs[i].UH + nilai_mhs[i].UTS + nilai_mhs[i].UAS;
		nilai_mhs[i].AVG = nilai_mhs[i].SUM / 3;
	}

	cout << endl;

	for (i = 0; i < max; i++)
	{
		if (nilai_mhs[i].AVG > 90)
		{
			indeks_mhs[i].Indeks = 'A';
		}
		else if (nilai_mhs[i].AVG >= 80)
		{
			indeks_mhs[i].Indeks = 'B';
		}
		else if (nilai_mhs[i].AVG >= 70)
		{
			indeks_mhs[i].Indeks = 'C';
		}
		else if (nilai_mhs[i].AVG < 70)
		{
			indeks_mhs[i].Indeks = 'D';
		}
	}

	nmax = nilai_mhs[0].AVG;

	for (i = 0; i < max; i++)
	{
		if (nilai_mhs[i].AVG > nmax)
		{
			nmax = nilai_mhs[i].AVG;
		}
	}

	for (i = 0; i < max; i++)
	{
		if (nilai_mhs[i].AVG == nmax)
		{
			cout << "Nominasi mahasiswa dengan nilai tertinggi." << endl;
			cout << "Mahasiswa dengan nilai tertinggi jatuh kepada: " << nama_mhs[i].Nama << " dengan indeks kelulusan: " << indeks_mhs[i].Indeks << endl;
		}
	}
	cout << endl;
	cout << "Nama mahasiswa beserta indeks kelulusannya." << endl;

	for (i = 0; i < max; i++)
	{
		cout << "Mahasiswa atas nama " << nama_mhs[i].Nama << " dengan indeks kelulusan: " << indeks_mhs[i].Indeks << endl;
	}
}
