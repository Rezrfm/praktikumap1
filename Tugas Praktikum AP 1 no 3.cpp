#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
	//Proses awal menghitung tabungan 3 tahun
	double u_s, i_l;
	double y = 3;

	cout << "Program menghitung tabungan saat ini jika diketahui tabungan 3 tahun yang akan datang \n";
	cout << "Masukkan tabungan anda 3 tahun yang akan datang Rp.= ";
	cin >> u_s;
	cout << "Masukkan persenan bunga yang anda inginkan(dalam %)= ";
	cin >> i_l;

	//Proses menghitung tingkat bunga menjadi desimal dan saldo yang dimiliki jika dibayarkan per tahun
	double p2d = 0.01;
	double yip1 = i_l * p2d;
	double yip2 = 1 + yip1;
	double y_i = pow(yip2, y);

	cout << "Tabungan yang anda miliki saat ini jika bunga dibayarkan per tahun = Rp." << fixed << (1 * u_s) / y_i << endl;

	//Proses menghitung saldo yang dimiliki jika bunga dibayarkan per semester
	double spi1 = (i_l * p2d) / 2;
	double spi2 = 1 + spi1;
	double s = y * 2;
	double s_i = pow(spi2, s);

	cout << "Tabungan yang anda miliki saat ini jika bunga dibayarkan per semester = Rp." << fixed << (1 * u_s) / s_i << endl;

	cin.get();
	return 0;
}