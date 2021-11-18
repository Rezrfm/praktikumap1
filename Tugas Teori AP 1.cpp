#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int Array[100];
int i;
int N = 10;
float sum;
float avg;

void HitungData()
{
	sum = 0;
	for (i = 0; i < N; i++)
	{
		sum = Array[i] + sum;
	}
	cout << "4. Total data pada array adalah = " << sum << endl;
}

void AvgData()
{
	sum = 0;
	for (i = 0; i < N; i++)
	{
		sum = Array[i] + sum;
	}
	avg = sum / N;
	cout << "5. Rata-rata dari data adalah = " << avg << endl;
}

void TampilData()
{
	cout << "3. Tampilan data pada array." << endl;
	cout << endl;
	for (i = 0; i < N; i++)
	{
		cout << "Indeks ke-" << i << " berisi data : " << Array[i] << endl;
	}
}

int main()
{
	int a = 1;
	int b = 9;
	int hasilHitungData, hasilAvgData;

	cout << "1. Mengisi data array dan menampilkannya." << endl;
	cout << endl;

	for (i = 0; i < N; i++)
	{
		cout << "Isi data ke-" << i + 1 << " : ";
		cin >> Array[i];
	}

	cout << endl;
	cout << "2. Mengecek apakah ada data yang sama atau tidak." << endl;
	cout << endl;

	for (i = 0; i < N;)
	{
		if (a == N + 1)
		{
			a -= b;
			--b;
		}
		for (a; a <= N;)
		{
			if (Array[i] == Array[a])
			{
				cout << "Data yang sama adalah " << Array[a] << " pada indeks ke-" << i << " dan indeks ke-" << a << endl;
				cout << endl;
				cout << " ---------------------------------------------------------------------- \n";
				cout << "| Karena terdapat data yang sama, maka Array di atas bukanlah Himpunan |" << endl;
				cout << " ---------------------------------------------------------------------- \n";
				break;
			}
			++a;

			if (i == N - 1)
			{
				break;
			}
		}
		if (Array[i] == Array[a])
		{
			break;
		}
		if (i == N - 1)
		{
			break;
		}
		++i;
	}
	if (i == N)
	{
		--i;
	}
	if (Array[i] != Array[a])
	{
		cout << "Data berbeda semua" << endl;
		cout << endl;
		cout << " --------------------------------------------------------- \n";
		cout << "| Karena data di atas berbeda, maka Array adalah Himpunan |" << endl;
		cout << " --------------------------------------------------------- \n";
	}
	cout << endl;
	TampilData();
	cout << endl;
	HitungData();
	cout << endl;
	AvgData();
}