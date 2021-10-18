#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int ax2(int a) 
{
	int x = 1;
	int x2 = pow(x, 2);
	int ax2 = a * x2;
	return ax2;
}

int bx(int b) 
{
	int x = 1;
	int bx = b * x;
	return bx;
}

int main()
{

	int a, b, c, ax, bx1, c1;
	int x = 1;

	cout << "Algoritma menghitung 6*(ax^2 + bx + c) untuk x = 1 \n";
	cout << "__________________________________________________" << endl;
	cout << "Masukkan angka pertama = ";
	cin >> a;
	cout << "Masukkan angka kedua = ";
	cin >> b;
	cout << "Masukkan angka ketiga = ";
	cin >> c;

	ax = ax2(a);
	bx1 = bx(b);

	cout << "Maka jawabannya adalah = " << 6 * (ax + bx1 + c) << endl;
	

	cin.get();
	return 0;
}