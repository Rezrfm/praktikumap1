#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int i;
	int input;
	int input1[100];
	int cari;

	cout << "Masukkan berapa banyak array : ";
	cin >> input;

	for (i = 0; i < input; i++)
	{
		cout << "Masukkan Array ke-" << i + 1 << " : ";
		cin >> input1[i];
	}
	cout << endl;
	for (i = 0; i < input; i++)
	{
		cout << "Isi Array ke-" << i + 1 << " : " << input1[i] << endl;
	}
	cout << endl;

	cout << "Nilai array yang dicari : ";
	cin >> cari;
	cout << endl;
	for (i = 0; i < input; i++)
	{
		if (input1[i] == cari)
		{
			cout << "Nilai " << cari << " ditemukan pada isi array ke- " << i + 1 << endl;
			break;
		}
	}
	if (input1[i] != cari)
	{
		cout << "Array tidak ditemukan" << endl;
	}
}
