#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
	//Proses awal menghitung tabungan 3 tahun
	double tabungan_anda;
	double tingkat_bunga;
	double tahun = 3;

	cout << "Program menghitung tabungan saat ini jika diketahui tabungan 3 tahun yang akan datang \n";
	cout << "Masukkan tabungan anda 3 tahun yang akan datang Rp.= ";
	cin >> tabungan_anda;
	cout << "Masukkan persenan bunga yang anda inginkan(dalam %)= ";
	cin >> tingkat_bunga;

	//Proses menghitung tingkat bunga menjadi desimal dan saldo yang dimiliki jika dibayarkan per tahun
	double percent_to_decimal = 0.01;
	double bunga_persenan_tahun = tingkat_bunga * percent_to_decimal;
	double bunga_persen_tahun = 1 + bunga_persenan_tahun;
	double bunga_tahunan;
	bunga_tahunan = pow(bunga_persen_tahun, tahun);

	cout << "Tabungan yang anda miliki saat ini jika bunga dibayarkan per tahun = Rp." << fixed << (1 * tabungan_anda) / bunga_tahunan << endl;

	//Proses menghitung saldo yang dimiliki jika bunga dibayarkan per semester
	double bunga_persenan_semester = (tingkat_bunga * percent_to_decimal) / 2;
	double bunga_persen_semester = 1 + bunga_persenan_semester;
	double bunga_semester;
	double semester = tahun * 2;
	bunga_semester = pow(bunga_persen_semester, semester);

	cout << "Tabungan yang anda miliki saat ini jika bunga dibayarkan per semester = Rp." << fixed << (1 * tabungan_anda) / bunga_semester << endl;

	cin.get();
	return 0;
}
