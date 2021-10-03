#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	int bil;

	cout << "Program untuk mengecek sebuah bilangan bulat apakah genap atau ganjil \n";
	cout << "Silahkan masukkan angka yang ingin anda periksa = ";
	cin >> bil;
	if (bil % 2 == 0)
	{
		cout << "Angka tersebut merupakan bilangan genap" << endl;
	}
	else
	{
		cout << "Angka tersebut merupakan bilangan ganjil" << endl;
	}

	cin.get();
	return 0;
}