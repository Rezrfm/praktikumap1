#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	float avg, sum;
	int input;
	sum = 0;
	int nilai[10];

	int a = 0;
	cout << "Berapa data yang ingin anda masukkan? = ";
	cin >> input;
	for (a; a < input; a++)
	{
		cout << "Masukkan bilangan " << a + 1 << " = ";
		cin >> nilai[a];
		sum = sum + nilai[a];
		avg = sum / a;
	}
	int nilai_kecil = nilai[0];
	int nilai_besar = nilai[0];

	for (a = 0; a < input; a++)
	{
		
		if (nilai[a] < nilai_kecil)
		{
			nilai_kecil = nilai[a];
		}
		if (nilai[a] > nilai_besar)
		{
			nilai_besar = nilai[a];
		}

	}
	cout << "Nilai terkecilnya adalah = " << nilai_kecil << endl;
	cout << "Nilai terbesarnya adalah = " << nilai_besar << endl;
	cout << "Rata-ratanya adalah = " << avg << endl;
}